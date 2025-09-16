<?php
/*
.----------------------------------------------------------------------
. Program       : sendsms_xml.php
.
. Function      : Generic Send SMS via Message Media Gateway Interface.
.                 Reads in an XML file with <messages> for sending.
.
. Modifications :
.     V11.03.01   07/12/2023  Don Nguyen    TSK 0893290
.                 Added validation to avoid trying to send the message if the
.                 patient phone number has not been specified, for the case of
.                 sending to other contacts only.
.                 Fixed issue of sent details not being recorded for messages
.                 that fail to send (e.g. blank or invalid phone number).
.                 Fixed the length validation of mobile numbers that don't
.                 start with a '+' country code (e.g. 0412345678); validNumber()
.                 Improved debug logging so messages are more accurate.
.     V11.00.05   05/08/2020  Don Nguyen    TSK 0893319
.                 Added ability to format URL's (text in between <url> and
.                 </url> tags); added parseURL()
.     V11.00.04   22/07/2020  Ebon Clements TSK 0891439
.                 Added proxy settings to smsphp.ini
.     V11.00.03   02/07/2020  Ebon Clements TSK 0890882
.                 Added sms_country_code to smsphp.ini to add the country
.                 code to the mobile number prior to sending
.     V11.00.02   01/07/2020  Ebon Clements TSK 0891439
.                 Added sms_secure_connect to smsphp.ini to connect with ssl
.     V11.00.01   11/06/2020  Don Nguyen    TSK 0876574
.                 Modified number validation to allow for shorter NZ numbers
.     V10.15.01   30/10/2019  Don Nguyen    TSK 0883006
.                 Re-worked code to use 'sms_preserve_newlines' configuration
.                 parameter for preserving CRLF characters (as per TSK 0881804).
.     V10.14.06   04/10/2019  Don Nguyen    TSK 0882556
.                 Corrected mobile number validation to allow up to 13 digits
.     V10.14.05   03/10/2019  Don Nguyen    TSK 0882556
.                 Corrected mobile number validation to allow NZ numbers
.     V10.14.04   17/09/2019  Don Nguyen    TSK 0881804
.                 Preserved any CRLF characters for sending via the Gateway.
.     V10.14.03   13/09/2019  Don Nguyen    TSK 0875542
.                 Corrected mobile number format validation
.     V10.14.02   22/08/2019  Don Nguyen    TSK 0875542
.                 Removed restrictions on phone number having only numbers
.                 and commas. Added validation for blank phone numbers and other
.                 invalid number patterns; set 'Error' status.
.     V10.14.01   22/02/2019  Peter Vela    TSK 0870780
.                 Changed elligible to eligible
.     V10.09.01   06/12/2016  Ebon Clements TSK 0294154
.                 Only allow single spaces in SMS message text
.     V10.08.04   20/09/2016  Ebon Clements TSK 0294154
.                 Fixed bulk write to sent file
.     V10.08.03   14/09/2016  Ebon Clements TSK 0294154
.                 Added contact type to sent text file
.     V10.08.02   29/08/2016  Ebon Clements TSK 0294154
.                 Changed $tmpfilnam and $tgtfilnam extension to .sms
.     V10.08.01   14/07/2016  Don Nguyen    TSK 0294154
.                 Added ability to send to other contacts as well
.     V10.08.00   05/05/2016  Don Nguyen    TSK 0294154
.                 Created
.----------------------------------------------------------------------
PRGID     INIT      "sendsms_xml.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Generic Send SMS via Message Media Gateway (read XML)"
.----------------------------------------------------------------------
*/
  require ("SmsInterface.inc");

  $approot = getenv("approot");
  $inifile = $approot."/etc/smsphp.ini" ;
  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  } else {
    error_log("FATAL: the $inifile file doesn't seem to exist or is not readable\n!");
    exit(1);
  }

  $authorisedNumbers = array();

  // Check for a limited send list (for controlled testing)  
 
  if (isset($ini['eligible_numbers'])) {
    $list = $ini['eligible_numbers'];
    $authorisedNumbers = explode(",",$list);
  }

  // Check for presence of preserve newlines (CRLF) parameter
  $preserveNewlines = false;  // default setting

  if (isset($ini['sms_preserve_newlines'])) {
    $preserveNewlines = $ini['sms_preserve_newlines'] === 'true' ? true : false;
  }

  // Check for presence of the secure connect parameter
  $secure_connect = false;     // default setting

  if (isset($ini['sms_secure_connect'])) {
      $secure_connect = $ini['sms_secure_connect'] === 'true' ? true : false;
  }

  // Check for presence of country code parameter
  $country_code = false;  // default setting

  if (isset($ini['sms_country_code'])) {
    $country_code = $ini['sms_country_code'] === 'true' ? true : false;
  }

  $sentflag = 0;
  $msgcount = 0;
  $inpfilnam = "";  // input file (XML)
  $tmpfilnam = "";  // temp output file (sent details)
  $tgtfilnam = "";  // target output file (sent details)
  $xml = "";
  $temp_dir = $ini['webpas_tmp_dir'];
  $target_dir = $ini['sms_target_dir'];

  $inpfilnam = $argv[1];
  if (empty($inpfilnam)) exitError("Message file not specified");

  $xml = simplexml_load_file($inpfilnam) or exitError("Invalid XML file: " . $inpfilnam);

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

  echo "\nConnecting to SMS server...\n\n";

  //
  // Get remaining credits...
  //
  if (!$si->connect($ini['smsuid'], $ini['smspwd'], true, $secure_connect)) {
    echo "Unable to connect to the SMS server.\n";
  }
  else {
    $cr = $si->getCreditsRemaining ();
    if ($cr == -2) {
      echo "Unable to read credits for ".$ini['smsuid'];
      echo " from the SMS server.\n";
      if ($si->getResponseMessage () !== NULL)
        echo "Reason: " . $si->getResponseMessage() . "\n";
    }
    elseif ($cr == -1) {
      echo "The account for ".$ini['smsuid'];
      echo " is not a pre-paid account.\n";
    }
    else {
      echo "Connected successfully!!\n";
      echo "The account for ".$ini['smsuid'];
      echo " has $cr credits remaining.\n";
    }
  }

  //
  // Send messages...
  //
  if (!$si->connect($ini['smsuid'], $ini['smspwd'], true, $secure_connect)) {
    echo "Unable to connect to the SMS server.\n";
  }
  else {
    $tmpfilnam = $temp_dir . basename($inpfilnam, ".prt") . ".sms";
    $tgtfilnam = $target_dir . basename($inpfilnam, ".prt") . ".sms";
    $fh = fopen($tmpfilnam, 'a+') or exitError("can't open response file");

    //
    // Send the SMS messages (<sms_message>)
    //
    foreach ($xml->xpath('//sms_message') as $sms_msg) {
      if (isset($sms_msg->phone_no)) {
        if (validNumber(trim($sms_msg->phone_no))) {
          echo "\nAdding message for valid patient phone number: '" . trim($sms_msg->phone_no) . "'\n";

          $phone_number= trim($sms_msg->phone_no);
          if ($country_code) {
            $phone_number=preg_replace("/^02/","+642",$phone_number);
            $phone_number=preg_replace("/^04/","+614",$phone_number);
            echo "Country Code added to number";
          }
          echo "\nMessage Details:\n"
           ."----------------\n"
           ."Phone: " . trim($phone_number) . "\n"
           ."Msg ID: $sms_msg->msg_id\n"
           ."Text: $sms_msg->text\n";

          $msg = $sms_msg->text;
          if (!$preserveNewlines) {
            $msg = trim(preg_replace('/\r?\n|\r/',' ',$msg));
            $msg = preg_replace('/\s\s+/',' ',$msg);
          }

          $si->addMessage(trim($phone_number),parseURL($msg),$sms_msg->msg_id);
          $msgcount++;
        }
        else {
          echo "\nIgnoring blank or invalid patient phone number: '" . trim($sms_msg->phone_no) . "'\n"; 
        }
      }
      else {
          echo "\nNo patient phone number!\n";
      }


      //
      // Process Other Contacts...
      //
      if ($sms_msg->other_contacts == "1") {
        $phone_nums = explode("|",$sms_msg->contact_nos);
        $msg_ids = explode("|",$sms_msg->contact_ids);
        $cont_types = explode("|",$sms_msg->contact_types);

        for ($i=0; $i < count($phone_nums); $i++) {
          if (validNumber(trim($phone_nums[$i]))) {

            echo "\nAdding message for valid Contact number: '$phone_nums[$i]'\n";

            $phone_number= trim($phone_nums[$i]);
            if ($country_code) {
              $phone_number=preg_replace("/^02/","+642",$phone_number);
              $phone_number=preg_replace("/^04/","+614",$phone_number);
              echo "Country Code added to Contact number";
            }
            $msg = $sms_msg->text;

            if (!$preserveNewlines) {
              $msg = trim(preg_replace('/\r?\n|\r/',' ',$msg));
              $msg = preg_replace('/\s\s+/',' ',$msg);
            }

            $si->addMessage(trim($phone_number),parseURL($msg),$msg_ids[$i]);
            $msgcount++;

	    echo "\nMessage Details:\n"
	      ."----------------\n"
	      ."Phone: $phone_number\n"
	      ."Msg ID: $msg_ids[$i]\n"
	      ."Contact: $cont_types[$i]\n"
	      ."Text: $sms_msg->text\n";
          }
          else { echo "\nIgnoring blank or invalid Contact number: '" . trim($phone_nums[$i]) . "'\n"; }
        }
      }
    }

    if ($msgcount > 0) {
      echo "\nSending message(s)...\n";

      if (!$si->sendMessages()) {
        echo "\nFailed to send message(s)!";
        if ($si->getResponseMessage() !== NULL) {
          echo "\nReason: " . $si->getResponseMessage() . "\n";
        }
      }
      else {
        $sentflag = 1;
        echo "\nMessage(s) have been sent via the Gateway!\n";
      }
    }
    else {
      echo "\nNo message(s) to send.\n";
    }

    echo "\nWriting sent details to: " . $tgtfilnam . "\n";
    writeSentDetails($fh, $xml, $sentflag);
    copy($tmpfilnam, $tgtfilnam);
    unlink($tmpfilnam);
  }

  echo "\n\nFinished!!\n\n";

  exit(0);

/*------------------------------------------------------------------------------
  Writes the sent message details to a file (pipe-delimited)

  Example xml parameter:

  <messages>
    <sms_message>
      <msg_id>112233</msg_id>
      <msg_code>10</msg_code>
      <msg_type>3</msg_type>
      <key> </key>
      <urno> </urno>
      <user_id> </user_id>
      <phone_no>0412 345 678</phone_no>
      <text>Hello world again!!</text>
    </sms_message>
  </messages>

//----------------------------------------------------------------------------*/
function writeSentDetails($fd, $xml, $sent) {

  foreach ($xml->xpath('//sms_message') as $msg_node) {
    $phone = trim($msg_node->phone_no);
    $msgid = $msg_node->msg_id;
    $date = date("Ymd");
    $time = date("H:i:s");
    $usrid = $msg_node->user_id;
    $urno = $msg_node->urno;
    $msgcode = $msg_node->msg_code;
    $rcrdkey = $msg_node->key;
    $sendstat = $sent ? 0 : 2; // default to '0' if sent; otherwise '2' - error
    $contact = "0";  // 'Patient' phone number
    $conttype = " "; // Blank contact type for patient

    // Replace any newline chars in message with space
    $msg_text = trim(preg_replace('/\r?\n|\r/',' ',parseURL($msg_node->text)));

    // Condense the spaces
    $msg_text = preg_replace('/\s\s+/',' ',$msg_text);

    $messagea = substr($msg_text,0,160);

    $msglen = strlen($msg_text);

    $messageb = ($msglen > 160) ? substr($msg_text,160,160) : "";
    $messagec = ($msglen > 320) ? substr($msg_text,320,160) : "";
    $messaged = ($msglen > 480) ? substr($msg_text,480,160) : "";
    $messagee = ($msglen > 640) ? substr($msg_text,640,160) : "";
    $messagef = ($msglen > 800) ? substr($msg_text,800,160) : "";

    if (!validNumber($phone)) {
      $sendstat = 2;  // blank or invalid number; set 'Error' status
    }

    $txt = $phone."|"
	   .$msgid."|"
	   .$date."|"
	   .$time."|"
	   .$usrid."|"
	   .$urno."|"
	   .$msgcode."|"
	   .$rcrdkey."|"
	   .$messagea."|"
	   .$messageb."|"
	   .$messagec."|"
	   .$messaged."|"
	   .$messagee."|"
	   .$messagef."|"
	   .$sendstat."|"
	   .$contact."|"
	   .$conttype."\n";

    if (isset($msg_node->phone_no)) {
      fwrite($fd, $txt);  // write sent details
      echo "\nMessage sent details...\n\n";
      echo $txt;  // log sent details
    }

    //
    // Process any other contacts...
    //
    if ($msg_node->other_contacts == "1") {
      echo "\nMessage sent details (Other Contacts)...\n\n";

      $phone_nums = explode("|",$msg_node->contact_nos);
      $msg_ids = explode("|",$msg_node->contact_ids);
      $cont_types = explode("|",$msg_node->contact_types);

      for ($i=0; $i < count($phone_nums); $i++) {
        $sendstat = $sent ? 0 : 2; // default to '0' if sent; otherwise '2' - error
        $phone = trim($phone_nums[$i]);
        $msgid = $msg_ids[$i];
        $contact = "1";  // 'Other Contact' phone number
        $conttype = $cont_types[$i]; // Contact Type

        if (!validNumber($phone)) {
          $sendstat = 2;  // blank or invalid number; set 'Error' status
        }

        $txt = $phone."|"
           .$msgid."|"
           .$date."|"
           .$time."|"
           .$usrid."|"
           .$urno."|"
           .$msgcode."|"
           .$rcrdkey."|"
           .$messagea."|"
           .$messageb."|"
           .$messagec."|"
           .$messaged."|"
           .$messagee."|"
           .$messagef."|"
           .$sendstat."|"
           .$contact."|"
           .$conttype."\n";

        fwrite($fd, $txt);  // write sent details
        echo $txt;  // log sent details
      }
    }
  }
  fflush($fd);
  fclose($fd);
}

function validNumber($phone) {
  if (empty($phone))
    return false;

  //
  // Check number pattern...
  //
  // Only contain numbers and spaces.
  // Can (optionally) start with a + followed by country code (up to 3 digits).
  // Number without country code can be up to 13 digits long.
  $pattern = "/^(\+[0-9]{1,3}(?:[0-9]\s*){10,13})|(?:[0-9]\s*){10,13}$/";

  if (!preg_match($pattern,$phone)) {
    return false;
  }

  // Check if number is in our Whitelist (if Whitelist set in 'smsphp.ini')
  global $authorisedNumbers;

  // There are no numbers in our Whitelist; bypass check
  if (count($authorisedNumbers) == 0) return true;

  // Return result of array search
  return in_array($phone,$authorisedNumbers);
}

/*----------------------------------------------------------------------------*/
// Parse any URL's (text between <url> and </url> tags) in the message body
//   - Remove newlines & spaces
/*----------------------------------------------------------------------------*/
function parseURL($msg) {
  if (empty($msg))
    return "";

  $pattern = "/<url>(.*?)<\/url>/si";  // match newlines & case-insensitive

  $result = preg_replace_callback($pattern,
              function ($matches) {
                return preg_replace('/[ \t]+/', '', preg_replace('/[\r\n]+/', '',$matches[1]));
              },
              $msg
            );

  return $result;
}

function exitError($error_msg)
{
  echo "<B>" . $error_msg . "</B>";   // output HTML
  error_log($error_msg);              // write to our php error logs
  die(1);
}

?>
