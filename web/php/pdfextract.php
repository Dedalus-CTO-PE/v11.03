<?php
/*
.----------------------------------------------------------------------
. Program       : pdfextract.php
.
. Function      : Extract PDF Document to Images
.
. Modifications :
. V10.14.01       17/06/2019  Don Nguyen    TSK 0876119
.                             Modified pdfpage() to utilise escapeshellarg().
.                             Removed $file evaluation before pdfpage() call
.                             to prevent XSS attack.
. V10.10.01       23.06.2017  B.G.Ackland
.                             Fix pasphp.ini load to look in new paths
. V10.04.01       24.03.2014  B.G.Ackland
.                             Use php.ini to determine Cache Location
. V10.03.01       03.07.2013  B.G.Ackland
.                             Remove References to Imagick PHP Component
.----------------------------------------------------------------------
PRGID     INIT      "pdfextract.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Extract PDF Document to Images"
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

$secureid = $_SERVER['REMOTE_USER'];

define("IMAGE_CACHE", $ini['imageCachePath']);
if (!is_dir(IMAGE_CACHE)) mkdir(IMAGE_CACHE, 0777, TRUE);

function pdfpage($file) {
  try {
    $tmp = IMAGE_CACHE.'/pdf/';
    if (!is_dir($tmp))  mkdir($tmp, 0777, TRUE);
    $format = "png";
    $source = $file;
    $name = preg_replace("/^.*\//","",$file);
    $name = preg_replace("/\.pdf$/i","",$name);
    $dest = "$tmp$name-%d.$format";
    $extractLog = "$tmp$name-extract.log";
    if (!file_exists("$extractLog")) {
      $exec = "gs -dSAFER -dBATCH -dNOPAUSE -sDEVICE=png256 -o $dest -r150 " .
              escapeshellarg($source) . " > $extractLog";

      exec($exec);
    }
    passthru("ls -1 $tmp$name-*.$format |wc -l ");
  }
  catch(Exception $e) {
    echo $e->getMessage();
  }
}

$file = $_GET['path'];

if (file_exists($file)) {
  pdfpage($file);
}
?>
