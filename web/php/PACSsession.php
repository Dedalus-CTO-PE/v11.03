<?php
/*
.----------------------------------------------------------------------
. Program       : PACSSession.php
.
. Function      : Return Session for InteleConnect Interface
.
. Modifications :
----------------------------------------------------------------------
PRGID     INIT      "PACSSession.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PACS Image Proxy"
.----------------------------------------------------------------------
*/
require "PACSconfig.php";
$authQry="&authToken=$authToken&username=$username&pacsUser=$pacsUser&clientId=$clientId";
$path="/UserAuthentication?action=createSession";
$WebService="$ServerHost$path$authQry";
$sessionResponse=exec("$wgetCMD '$WebService'");
$sessionDetails = explode("|",$sessionResponse);
if ( $sessionDetails[0] == "OK" ){
  $sessionId=$sessionDetails[1];
  $signature=substr(sha1("$sessionId|$accessionNumber|$signatureKey"),0,20);
  $WebService=$ClientHost."/view/order/".$accessionNumber."?SID=".$sessionId."&signature=".$signature;
  echo "OK|".$WebService;
 } else {
  echo "FAILED|CONNECTION TO HOST FAILED</b><br>".$sessionResponse;
}
?>

