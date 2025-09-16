<?php
/*
.----------------------------------------------------------------------
. Program       : creditsms.php
.
. Function      : Page to return view of remaining Credit using Message Media Interface
.
. Modifications :
.     V11.00.02   22/07/2020  Ebon Clements TSK 0891439
.                 Added proxy settings to smsphp.ini 
.     V11.00.01   01/07/2020  Ebon Clements TSK 0891439
.                 Added sms_secure_connect to smsphp.ini to connect with ssl
.----------------------------------------------------------------------
PRGID     INIT      "creditsms.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "SMS Message Media Credit Information"
.----------------------------------------------------------------------
*/

  require ("SmsInterface.inc");

  $approot = dirname(dirname($_SERVER['SCRIPT_FILENAME']));

  $inifile = "$approot/etc/smsphp.ini";

  $html = "<head>\n<title>SMS Credits Remeaining</title>\n</head>\n<body>\n";

  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  } else {
    error_log($_SERVER['SCRIPT_FILENAME']." FATAL: the $inifile file doesn't seem to exist or is not readable!\n");
    exit(1);
  }

  // Check for presence of the secure connect parameter
  $secure_connect = false;     // default setting

  if (isset($ini['sms_secure_connect'])) {
      $secure_connect = $ini['sms_secure_connect'] === 'true' ? true : false;
  }

  $si = new SmsInterface ();

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

  if (!$si->connect ($ini['smsuid'], $ini['smspwd'], true, $secure_connect))
     $html .= "<p> Unable to connect to the SMS server.</p>";
  else {
    $cr = $si->getCreditsRemaining();
    switch ($cr) {
    case -2: 
      $html .= "<p>Unable to read credits for ".$ini['smsuid'];
      $html .= " from the SMS server.";
      if ($si->getResponseMessage () !== NULL)
        echo "<br />Reason: " . $si->getResponseMessage();
      break;
    case -1:
      $html .= "<p>The account  for ".$ini['smsuid'];
      $html .= " is not a pre-paid account.";
      break;
    default:
      $html .= "The account for ".$ini['smsuid'];
      $html .= " has $cr credits remaining.";
    }
    $html .= "</p>\n";
  }
  $html .= "</body>\n</html>";
  echo $html;
?>
