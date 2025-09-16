<?php
/*
.----------------------------------------------------------------------
. Program       : PACSimage.php
.
. Function      : PACS Image Proxy
.
. Modifications :
.   V10.03.01       05.06.2013   Saroeun Soeur CAR 286325
.   V10.01.00       20.03.2013   B.G.Ackland     
----------------------------------------------------------------------
PRGID     INIT      "PACSimage.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PACS Image Proxy"
.----------------------------------------------------------------------
*/
 require "PACSconfig.php";
 $path="/JpegServlet/getJpeg?";
 $qs=$_SERVER['QUERY_STRING'];
 $WebService="$host$path$qs";
 passthru("$wgetCMD  '$WebService' | awk -f PACSimage.awk");
?>
