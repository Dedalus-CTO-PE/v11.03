<?php
/*
.----------------------------------------------------------------------
. Program       : PrintDocument.php
.
. Function      : Print HTML Document via PDF Conversion
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "PrintDocument.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Print HTML Document via PDF Conversion"
.----------------------------------------------------------------------
*/
# require "setup.php";

 $uid = $_SERVER['REMOTE_USER'];
 $copies=1;
 if (isset($_GET['webservice'])) $webservice = escapeshellarg($_GET['webservice']); 
 if (isset($_GET['stylesheet'])) $stylesheet = escapeshellarg($_GET['stylesheet']); 
 if (isset($_GET['copies']))     $copies     = escapeshellarg($_GET['copies']); 
 if (isset($_GET['printer']))    $printer    = escapeshellarg($_GET['printer']); 
 if (preg_match('/`/',$copies))      { echo "Parameter Invalid"; exit;}
 if (preg_match('/`/',$printer))     { echo "Parameter Invalid"; exit;}
 if (preg_match('/`/',$stylesheet))  { echo "Parameter Invalid"; exit;}
 if (preg_match('/`/',$webservice))  { echo "Parameter Invalid"; exit;}
 if (!is_numeric($copies))                       { echo "Copies Invalid"; exit;}
 $servicesHttp   = $ini['servicesHttp'];
 $servicesHost   = $ini['servicesHost'];
 $servicesPath   = $ini['servicesPath'];
 $sharedHtmlPath = $ini['sharedHtmlPath'];
 $webservice = "$servicesHttp$servicesHost$servicesPath$webservice";
 $uid = uniqid();
 $htmlfile = "$sharedHtmlPath$uid.html";
 $pdffile  = "$sharedHtmlPath$uid.pdf";
 $cmdline="/opt/iba/bin/PrintHTML2PDF $webservice $stylesheet $copies $printer $htmlfile >/tmp/PrintHTML2PDF.log 2>&1 &";
 passthru($cmdline);
 echo "COMPLETE";
?>
