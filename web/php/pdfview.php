<?php
/*
.----------------------------------------------------------------------
. Program       : pdfview.php
.
. Function      : View PDF as Thumbnails
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "pdfview.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "View PDF as Thumbnail Images"
.----------------------------------------------------------------------
*/
$pdfFile = $_GET['path'];
header("Content-Type: text/html");
header("Cache-Control: no-cache");
echo "<head>";
echo "<link rel='stylesheet' href='../html/ipad/ipad.css' type='text/css'>";
echo "<script type='text/javascript'  src='../html/ipad/ipad.js'></script>";
echo "<script type='text/javascript'  src='../html/ipad/ipadpdf.js'></script>";
echo "<script type='text/javascript'>";
echo "pdfFile='$pdfFile';";
echo "</script>";
echo "</head>";
echo "<body onload='thumbPDF();' style='background-color:white'>";
echo "<div class=subMenu>";
echo " <input type=button id=btnPrev class=MenuShowButton  value='Previous'   onclick='lastPDF();'>";
echo " <input type=button id=btnNext class=MenuShowButton  value='Next'       onclick='nextPDF();'>";
echo " <input type=button id=btnThumb class=MenuShowButton  value='Thumbnails' onclick='thumbPDF();'>";
echo " <span id=PageHead class=PageView></span>";
echo "</div>";
echo "<div id=ListLocation style='margin-top:60px;'>";
echo "<img  class=ShowPDFImage id=ViewPDFImage src='../images/Blank.gif'>";
echo "<span id=pdfThumbnails ";
echo " style='text-align:center;background-color:white;'></span>";
echo "</div>";
echo "</body>";
?> 
