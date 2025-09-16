<?php
/*
.----------------------------------------------------------------------
. Program       : ViewOrder.php
.
. Function      : View Printed Order PDF File
.
. Modifications :
.
.  22.06.2015 V10.06.01 B.G.Ackland
.             Move Location to Parameter in pasphp.ini
.
.----------------------------------------------------------------------
PRGID     INIT      "ViewOrder.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "View Printed Order PDF File"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = (isset($_SERVER["REMOTE_USER"])) ? $_SERVER["REMOTE_USER"] : null;
 if ($secureid==null) { echo "Invalid Security"; exit(); }
 $ordernum = (isset($_REQUEST["ordernum"])) ? $_REQUEST["ordernum"] : null;
 $urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
 $LocationPath=$ini['order_pdf_path'];
 $ordernum=preg_replace("/-.*$/","",$ordernum);
 $Filename=$LocationPath."UR".$urnumber."_".$ordernum.".pdf";
 if (!file_exists($Filename)) {
   echo "Order File No Longer Available. $Filename";
 } else {
   header("Content-type:application/pdf"); 
   readfile($Filename);
 }
?>
