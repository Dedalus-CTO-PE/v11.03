<?php
/*
.----------------------------------------------------------------------
. Program       : listrpc.php
.
. Function      : WA Health EMPI Interface Service
.
. Modifications :
.----------------------------------------------------------------------
. V10.02.01 12/10/2011 Jill Parkinson CAR 252756
.           Added version control
. V10.02.00 25/07/2011 Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "listrpc.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "listrpc"
.----------------------------------------------------------------------
*/

require_once "lib/EmpiConfiguration.include.php";

$url = WEB_SERVICE_URI;

$client = new SoapClient($url);

try {                                   

  $arr = $client->__getFunctions();

  foreach($arr as $item) {

    $str .= $item."\n\n";

  }

  echo "<pre>".$str."</pre>";

}catch(Exception $e) {
  echo $e->getMessage(); 
}

?>
