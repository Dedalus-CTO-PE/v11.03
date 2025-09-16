<?php
/*
.----------------------------------------------------------------------
. Program       : PACSlist.php
.
. Function      : Interface to IntelePACS Imaging
.                 Return Series Related to a Patient/Accession No
.
. Modifications :
. V10.08.01 30.03.2016 B.G.Ackland
.           Added Account Locked Error Message
----------------------------------------------------------------------
PRGID     INIT      "PACSlist.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PACS Image Proxy"
.----------------------------------------------------------------------
*/
require "PACSconfig.php";
/* 
    Setup Session and Cookie Details for IntelePACS 
*/
$authQry="&authToken=$authToken&username=$username&pacsUser=$pacsUser&clientId=$clientId";
$path="/UserAuthentication?action=createSession";
$WebService="$host$path&$authQry";
$sessionResponse=exec("$wgetCMD '$WebService'");
$sessionDetails = explode("|",$sessionResponse);
if ($sessionResponse=="ACCOUNT_LOCKED") {
   echo "<p style='color:white;text-align:center'>Your Account is Locked in the PACS System</p>";
   exit;
}
/*
    Send Query for Series List to IntelePACS
*/
if ( $sessionDetails[0] = "OK" ){
  $sessionId=$sessionDetails[1];
  $path="/InteleBrowser/ViewImages?viewer=web";
  $sessQry="&username=$username&sessionId=$sessionId&clientId=$clientId";
  $accnQry="&accessionNumber=".trim($accessionNumber)."&patientId=".trim($patientId);
  $WebService="$host$path$sessQry$accnQry";
  passthru("$wgetCMD '$WebService' | awk -f PACSlist.awk");
} else {
  echo "FAIL";
}
?>
