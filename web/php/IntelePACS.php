<?php
/* *****  DEPRECATED   *****
.----------------------------------------------------------------------
. Program       : IntelePACS.php
.
. Function      : IntelePACS Interface
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "IntelePACS.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "IntelePACS Interface"
.----------------------------------------------------------------------
*/

 if (isset($_SERVER['REMOTE_USER']))  $username = $_SERVER['REMOTE_USER'];
 if (isset($_GET['patientId']))       $patientId = $_GET['patientId']; 
 if (isset($_GET['accessionNumber'])) $accessionNumber = $_GET['accessionNumber']; 
 if (isset($_GET['reportno']))        $rept = $_GET['reportno']; 
 $reply = "";
 
# Test Data Comment Out for Production 
$username="iba";
$reportno="3";
$patientId="41.03372731";
$accessionNumber="41.1391404";
#
$host="https://cahweb1.cabrini.com.au";
$authToken="fe1512553c0173047317563f158cc2c5";
$pacsUser="isoftcah";
$clientId="webPasV10";
$path="/UserAuthentication?action=createSession";
$WebService="$host$path&authToken=$authToken&username=$username&pacsUser=$pacsUser&clientId=$clientId";
$sessionResponse=exec("wget -q --no-check-certificate --no-proxy -O -  '$WebService'");
$sessionDetails = explode("|",$sessionResponse);
if ( $sessionDetails[0] = "OK" ){
  $sessionId=$sessionDetails[1];
  $path="/InteleBrowser/ViewImages?viewer=web";
  $WebService="$host$path&username=$username&sessionId=$sessionId&accessionNumber=$accessionNumber&patientId=$patientId&clientId=$clientId";
  switch ($reportno) {
   case 1: 
      passthru("wget --ignore-length  -q --no-check-certificate --no-proxy -O -  '$WebService' | awk -f PACS.awk");
      break;
   case 3: 
      $dest="cachePACS/$patientId-$accessionNumber.html";
/* Expire Cache if File Age > X seconds 
      if (file_exists($dest)) {
        $FileCreationTime = filemtime($dest);
        $FileAge = time() - $FileCreationTime;
        if ($FileAge>60*60*24) unlink($dest);
      }
*/
      if (!file_exists($dest)) {
        exec("wget --ignore-length  -q --no-check-certificate --no-proxy -O -  '$WebService' | awk -f PACS1.awk > $dest");
        readfile($dest);
      }
      else {
        $matchInputField="/<input type=\"hidden\" name=\"SID\"/i";
        $sessionInputField="<input type='hidden' name='SID' value='$sessionId'>";
        $fh = fopen($dest, 'r');
        while ( ($line = fgets($fh)) !== false) {
          if (preg_match($matchInputField,$line)) { echo $sessionInputField; }
          else { echo $line; }
        }
      }
      break;
   default: 
      echo $WebService;
      break;
  }
 }
else {
  echo "FAIL";
}
?>
