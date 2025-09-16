<?php
/*
.----------------------------------------------------------------------
. Program       : liststructs.php
.
. Function      : 
.  use liststructs.php?p=y to display the types used in the web service
.      liststructs.php to display the types formatted for php classes
.
. Modifications :
.----------------------------------------------------------------------
. V10.02.01 12/10/2011 Jill Parkinson CAR 252756
.           Added version control
. V10.02.00 25/07/2011 Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "liststructs.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "WA Health EMPI Interface Service"
.
.
*/

require_once "lib/EmpiConfiguration.include.php";

$url = WEB_SERVICE_URI;

$client = new SoapClient($url,array('login' => USERNAME,'password' => PASSWORD));

try {                                   
  $arr = $client->__getTypes();
  $pattern = '/struct/i';
  $pattern2 = '/\n(.*) (.*)/';
  $pattern3 = '/.*\[\]$/i';
  $str = "";

  if( isset($_GET['class']) ) {
    foreach($arr as $item) {
      $str .= str_replace("<>","\n",
                   preg_replace($pattern3,'',
                   preg_replace($pattern2,'<> public $${2}',
                   preg_replace($pattern,"class",$item))))."\n\n";

    }
  }else {

    foreach($arr as $item) {
       $str .= $item."\n\n";
    }
  }

  echo "<pre>".$str."</pre>";

}catch(Exception $e) {
  echo $e->getMessage(); 
}

?>
