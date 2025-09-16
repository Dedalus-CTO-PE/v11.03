<?php
/*
.----------------------------------------------------------------------
. Program       : PACSjpeg.php
.
. Function      : PACS Image Proxy
.
. Modifications :
----------------------------------------------------------------------
PRGID     INIT      "PACSjpeg.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PACS Image Proxy"
.----------------------------------------------------------------------
*/
 require "PACSconfig.php";
 $path="/JpegServlet/getJpeg?";
 $qs=$_SERVER['QUERY_STRING'];
 $WebService="$host$path$qs";
 header('Content-type: image/jpeg');
 passthru("$wgetCMD  '$WebService'");
?>
