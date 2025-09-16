<?php
/*
.----------------------------------------------------------------------
. Program       : pdfthumb.php
.
. Function      : Return PDF Page as Thumbnail
.
. Modifications :
. V10.10.01       23.06.2017  B.G.Ackland
.                             Fix pasphp.ini load to look in new paths
. V10.04.01       24.03.2014  B.G.ackland
.                             Use php.ini to determine Cache Location
. V10.03.01       03.07.2013  B.G.ackland
.                             Remove References to Imagick PHP Component
.----------------------------------------------------------------------
PRGID     INIT      "pdfthumb.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PDF Thumbnail as Images"
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
/* 
Show Thumb Image 
*/
function show_image($pageFile,$thumbFile,$max_width) {
  $image_type = "png";
  if (file_exists($thumbFile)) {
    header("Content-Type: image/" . $image_type);
    readfile($thumbFile);
    exit;
  } 
  if (!$image = imagecreatefromstring(file_get_contents($pageFile))) {
    exit;
  }
  $image_width = imagesx($image);
  $image_height = imagesy($image);
  if ($image_width < $max_width) {
    $new_img_height = $image_height;
    $new_img_width = $image_width;
  } else {
    $aspect_x = $image_width / $max_width;
    $new_img_width = $max_width;
    $new_img_height = $image_height / $aspect_x;
  }
  $new_image = imagecreatetruecolor($new_img_width, $new_img_height);
  imagecopyresampled($new_image, $image, 0, 0, 0, 0, $new_img_width, $new_img_height, imagesx($image), imagesy($image));
  imagedestroy($image);
  header("Content-type: image/" . $image_type);
  imagepng($new_image);
  imagepng($new_image, $thumbFile);
  imagedestroy($new_image);
}
function pdfpage($file,$page,$width) {
  try {
    $tmp = IMAGE_CACHE.'/pdf/';
    if (!is_dir($tmp))  mkdir($tmp, 0777, TRUE);
    $format = "png";
    $source = $file;
    $name = preg_replace("/^.*\//","",$file);
    $name = preg_replace("/\.pdf$/i","",$name);
    $dest = "$tmp$name-%d.$format";
    $pageFile = "$tmp$name-$page.$format";
    $tdr = IMAGE_CACHE.'/pdf/thumbnail/';
    if (!is_dir($tdr))  mkdir($tdr, 0777, TRUE);
    $thumbFile = "$tdr$name-$page-w$width.$format";
    show_image($pageFile,$thumbFile,$width);
  }
  catch(Exception $e) {
    echo $e->getMessage();
  }
}
$file = $_GET['path'];
$page = $_GET['page'];
$size = $_GET['size'];
if (file_exists($file)) {
  if ($file && $page) {
    pdfpage($file,$page,$size);
  }
}
?>
