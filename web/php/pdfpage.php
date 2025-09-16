<?php
/*
.----------------------------------------------------------------------
. Program       : pdfpage.php
.
. Function      : Return PDF Page as Images
.
. Modifications :
. V10.14.02       22/08/2019  Don Nguyen    TSK 0876119
.                             Added escapeshellarg() around $dest in pdfpage()
. V10.14.01       17/06/2019  Don Nguyen    TSK 0876119
.                             Modified pdfpage() to utilise escapeshellarg().
.                             Re-worked $file & $page validations to prevent
.                             XSS attack.
.                             Don Nguyen    TSK 0876120
.                             Moved readfile() to prevent local file inclusion.
. V10.10.01       23.06.2017  B.G.Ackland
.                             Fix pasphp.ini load to look in new paths
. V10.04.01       24.03.2014  B.G.ackland
.                             Use php.ini to determine Cache Location
. V10.03.01       03.07.2013  B.G.ackland
.                             Remove References to Imagick PHP Component
.----------------------------------------------------------------------
PRGID     INIT      "pdfpage.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PDF Page as Images"
.----------------------------------------------------------------------
*/
error_reporting(0);
  $approot=dirname(dirname($_SERVER['SCRIPT_FILENAME']));
  // look in web implementation etc directory 
  $inifile = "$approot/etc/pasphp.ini" ;
  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  } else {
    // look in php directory 
    $inifile = "$approot/php/pasphp.ini" ;
    if (file_exists($inifile) && is_readable($inifile)) {
      $ini = parse_ini_file($inifile);
    } else {
      // look in current directory
      $inifile = "pasphp.ini" ;
      if (file_exists($inifile) && is_readable($inifile)) {
        $ini = parse_ini_file($inifile);
      } else {
        error_log("FATAL: the $inifile file doesn't seem to exist or is not readable\n!");
        exit(1);
      }
    }
  }

define("IMAGE_CACHE", $ini['imageCachePath']);
if (!is_dir(IMAGE_CACHE)) mkdir(IMAGE_CACHE, 0777, TRUE);

function pdfpage($file,$page) {
  try {
    $tmp = IMAGE_CACHE.'/pdf/';
    if (!is_dir($tmp))  mkdir($tmp, 0777, TRUE);
    $format = "png";
    $source = $file;
    $dest=$source;
    if (preg_match("/\.pdf$/i",$file)) {
      $name = preg_replace("/^.*\//","",$file);
      $name = preg_replace("/\.pdf$/i","",$name);
      $dest = "$tmp$name-$page.$format";
      if (!file_exists("$dest")) {
        $exec = "gs -q -sDEVICE=png256 -o " . escapeshellarg($dest) .
                " -r150 -dFirstPage=" . escapeshellarg($page) .
                " -dLastPage=" . escapeshellarg($page) .
                " " . escapeshellarg($source);
        exec($exec);
      }
      if (!file_exists("$dest")) {
        $dest="EndOfDocument.png";
      }

      header('Content-Type: image/png');
      readfile($dest);
    }
  }
  catch(Exception $e) {
    echo $e->getMessage();
  }
}

$file = $_GET['path'];
$page = $_GET['page'];

if (file_exists($file)) {
  if (is_numeric($page)) {
    pdfpage($file,$page);
  }
}
?>
