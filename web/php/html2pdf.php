<?php
/*
.----------------------------------------------------------------------
. Program       : html2pdf.php
.
. Function      : Remote Server Conversion of HTML to PDF
.                 Enables web service request to perform conversion
.                 from alternate application server that is not 
.                 configured with wkhtmltopdf
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "html2pdf.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Remote HTML to PDF Conversion"
.----------------------------------------------------------------------
 $validIP = array("192.168.16.63", "192.168.16.54", "192.168.18.142", "192.168.16.63");
 $validUser = "iba";
 $uid = $_SERVER['REMOTE_USER'];
 $svr = $_SERVER['REMOTE_ADDR'];
 if ($uid != $validUser)          exit("Invalid Security User ID");
 if (!(in_array($svr, $validIP))) exit("Invalid Security Server IP");
*/
 if (isset($_GET['cmdline'])) $cmdline = $_GET['cmdline']; 
 passthru("/opt/iba/bin/wkhtmltopdf $cmdline");
?>
