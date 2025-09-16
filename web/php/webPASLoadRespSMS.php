<?php
/*
.----------------------------------------------------------------------
. Program       : webPASLoadRespSMS.php
.
. Function      : Load SMS response details into a text file - smsresp1
.
. Modifications :
.     V11.01.01   26/11/2021  Don Nguyen    TSK 0913053 & 0913536
.                 Also replace '\r' (carriage return) characters with space
.                 and trim trailing space in the message.
.     V11.00.02   22/07/2020  Ebon Clements TSK 0891439
.                 Added proxy settings to smsphp.ini
.     V11.00.01   01/07/2020  Ebon Clements TSK 0891439
.                 Added sms_secure_connect to smsphp.ini to connect with ssl
.     V10.14.01   21/03/2019  Don Nguyen    TSK 0871764
.                 Modified processSMSResp() to replace " with '.
.                 Also replaced newline chars with spaces.
.     V10.08.00   05/05/2016  Don Nguyen    TSK 0294154
.                 Created
.----------------------------------------------------------------------
PRGID     INIT      "webPASLoadRespSMS.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Load SMS response details (from SMS Gateway)"
.----------------------------------------------------------------------
*/

  require ("SmsInterface.inc");
  $approot = $argv[1];
  $inifile = $approot . "/etc/smsphp.ini";

  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  } else {
    error_log("FATAL: the $inifile file doesn't seem to exist or is not readable!\n");
    exit(1);
  }

  // Check for presence of the secure connect parameter
  $secure_connect = false;     // default setting

  if (isset($ini['sms_secure_connect'])) {
      $secure_connect = $ini['sms_secure_connect'] === 'true' ? true : false;
  }

  $cd_dir = $ini['webpas_tmp_dir'];
  $file_name = $cd_dir . "/smsresp1.txt";
  if (($fh = fopen($file_name, 'w')) === false)  {
    error_log("can't open response file");
    exit(1);
  }
  echo "\nGet SMS response messages...\n";

  $si = new SmsInterface(true,true);  // autoSplit=true; concatenation=true

  // Check for presence of the proxy connection parameters
  if (isset($ini['sms_proxy_name'])) {
    $p_name = $ini['sms_proxy_name'];
    $p_user = NULL;
    if (isset($ini['sms_proxy_user'])) {
      $p_user = $ini['sms_proxy_user'];
    }
    $p_pass = NULL;
    if (isset($ini['sms_proxy_password'])) {
      $p_pass = $ini['sms_proxy_password'];
    }
    if($secure_connect) {
      $p_port = 443;
      if (isset($ini['sms_proxy_port'])) {
        $p_port = $ini['sms_proxy_port'];
      }
      $si->setHttpsProxy ($p_name, $p_port, $p_user, $p_pass);
    } else {
      $p_port = 80;
      if (isset($ini['sms_proxy_port'])) {
        $p_port = $ini['sms_proxy_port'];
      }
      $si->setHttpProxy ($p_name, $p_port, $p_user, $p_pass);
    }
  }

  // Connect to SMS Gateway
  if (!$si->connect($ini['smsuid'],$ini['smspwd'], true, $secure_connect)) {
    echo "<p>Unable to connect to the SMS server.\n";
  }
  elseif (($srl = $si->checkReplies()) === NULL) {
    echo "Unable to read messages from the SMS server.\n";
    if ($si->getResponseMessage() !== NULL)
       echo "Reason: " . $si->getResponseMessage () . "\n";
  }
  elseif (count($srl) == 0) {
    echo "No messages waiting on the SMS server.\n";
  }
  else {
    echo "\nThere are " . count($srl) . " responses.";
    foreach ($srl as $sr) {
      echo "\nMessage ID:$sr->messageID\n";
      echo "Phone number: $sr->phoneNumber\n";
      echo "Message: \n";
      echo "--- MESSAGE START ---\n";
      echo "$sr->message\n";
      echo "--- MESSAGE END ---\n";

      processSMSResp($fh, $sr);
    }

    fclose($fh);
  }

  echo "\nFinished!\n\n";

  exit(0);


function processSMSResp($fh, $sr) {
  // replace " (double-quotes) with ' (single-quotes)
  $sr->message = str_replace("\"","'",$sr->message);

  // replace any carriage return & newline chars with space
  $sr->message = trim(preg_replace("/\r?\n|\r/"," ",$sr->message));

  $phone = $sr->phoneNumber;
  $id = $sr->messageID;
  $date = date("Ymd");
  $time = date("H:i:s");
  $messagea = substr($sr->message,0,160);

  $msglen = strlen($sr->message);

  $messageb = ($msglen > 160) ? substr($sr->message,160,160) : "";
  $messagec = ($msglen > 320) ? substr($sr->message,320,160) : "";
  $messaged = ($msglen > 480) ? substr($sr->message,480,160) : "";
  $messagee = ($msglen > 640) ? substr($sr->message,640,160) : "";
  $messagef = ($msglen > 800) ? substr($sr->message,800,160) : "";

  $messstat = $sr->status;

  $txt = $phone."|"
         .$id."|"
         .$date."|"
         .$time."|"
         .$messagea."|"
         .$messageb."|"
         .$messagec."|"
         .$messaged."|"
         .$messagee."|"
         .$messagef."|"
         .$messstat."\n";

  fwrite($fh, $txt);
}
?>
