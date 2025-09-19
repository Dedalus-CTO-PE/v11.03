<?php
/*
.----------------------------------------------------------------------
. Program       : sendsms.php
.
. Function      : Generic Send SMS via Message Media Gateway
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "sendsms.php"
VERSION   INIT      "V10.14.00"
PRGNAM    INIT      "Generic Send SMS via Message Media Gateway"
.----------------------------------------------------------------------
*/
 require ("SmsInterface.inc");
 $msubject = "";
 $urnumber = "";
 $admissno = "";
 $doctcode = "";
 $hcppcode = "";
 $mobileno = "";
 $username = "";
 
 if (isset($_GET['urnumber'])) $urnumber = $_GET['urnumber'];
 if (isset($_GET['admissno'])) $admissno = $_GET['admissno'];
 if (isset($_GET['doctcode'])) $doctcode = $_GET['doctcode'];
 if (isset($_GET['hcppcode'])) $hcppcode = $_GET['hcppcode'];
 if (isset($_GET['mobileNo'])) $mobileNo = $_GET['mobileNo'];
 if (isset($_GET['messageText'])) $messageText = $_GET['messageText'];
 $mobileNo = str_replace(" ","+",$mobileNo);

 $qry = "select cast(nvl(max(cast(smsemid as int)),0) as int) + 1 from smssenaf
         where TRIM(smsephn) = TRIM('".$mobileNo."')";

 $conn = oci_connect('paspub','health8','localhost/PAS') or die('Cant Connect to Oracle');
 $stmt = oci_parse($conn,$qry) or die('Cant Parse Query');
 if (oci_execute($stmt))
 {
   $row  = oci_fetch_array($stmt) or die('cant fetch');
   $messageID = $row[0];
 }
 else
 {
   $e = oci_error($stmt);
   echo $e['message'];
 }

 oci_close($conn);

 $messageStatus = 0;
 $si = new SmsInterface ();
 $si->addMessage ($mobileNo, $messageText,$messageID);
 if (!$si->connect ("iSOFTHealth004", "chrisapi", true, false))
   echo "failed. Could not contact server.\n";
 elseif (!$si->sendMessages()) {
	    echo "failed. Could not send message to server.\n";
    if ($si->getResponseMessage () !== NULL)
		echo "<BR>Reason: " . $si->getResponseMessage () . "\n";
	} else {
	    echo "OK.\n";
            $messageStatus = 1; }
 
 $uid = $_SERVER['REMOTE_USER'];
 $reply = "";
 $date = date("Ymd");
 $time = date("H:i");
 $uid = $_SERVER['REMOTE_USER'];
 $messageTextA = substr($messageText,0,160);
 $messageTextB = " ";
 $messageTextC = " ";
 $messageTextD = " ";
 $messageTextE = " ";
 $messageTextF = " ";
 if (strlen($messageText)>160) $messageTextB = substr($messageText,160,160);
 if (strlen($messageText)>320) $messageTextC = substr($messageText,320,160);
 if (strlen($messageText)>480) $messageTextD = substr($messageText,480,160);
 if (strlen($messageText)>640) $messageTextE = substr($messageText,640,160);
 if (strlen($messageText)>800) $messageTextF = substr($messageText,800,160);
 $qry = "insert into smssenaf (smsephn,smsemid,smsesnt,smsedat,smsetim,smseurn,smsevis,smsedoc,smsehcp,smseuid,
                               smsemsa,smsemsb,smsemsc,smsemsd,smsemse,smsemsf,smsespa,lf)
  values('".$mobileNo."','"
           .$messageID."','"
           .$messageStatus."','"
           .$date."','"
           .$time."','"
           .$urnumber."','"
           .$admissno."','"
           .$doctcode."','"
           .$hcppcode."','"
           .$uid."','"
           .$messageTextA."','"
           .$messageTextB."','"
           .$messageTextC."','"
           .$messageTextD."','"
           .$messageTextE."','"
           .$messageTextF."','"
           ." ',' ')";
 $conn = oci_connect('paspub','health8','localhost/PAS') or die('Cant Connect to Oracle');
 $stmt = oci_parse($conn,$qry) or die('Cant Parse Query');
 if (oci_execute($stmt))
 {
   oci_close($conn);
 }
 else
 {
   $e = oci_error($stmt);
   echo $e['message'];
   oci_close($conn);
 }
?>
