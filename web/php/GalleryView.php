<?php
/*
.----------------------------------------------------------------------
. Program       : GalleryView.php
.
. Function      : Patient Images Gallery View
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "GalleryView.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Patient Images Gallery View"
.----------------------------------------------------------------------
*/
require "setup.php";
$secureid = $_SERVER['REMOTE_USER'];
error_reporting(0);
define("IMAGE_CACHE", $ini['imageCachePath']);
function return_image($image_file,$image_path,$image_type) {
  if (file_exists($image_path.$image_file)) {
    header("Content-Type: image/" . $image_type);
    header("Content-Disposition: filename=\"" . $image_file . "\"");
    readfile($image_path.$image_file);
  }
}
function show_image($image_file,$image_path,$max_width,$max_height) {
  $type = strtolower(substr($image_file, strrpos($image_file, ".")));
  if ($type == ".jpg")  $image_type = "jpeg";
  if ($type == ".jpeg") $image_type = "jpeg";
  if ($type == ".png")  $image_type = "png";
  if ($type == ".gif")  $image_type = "gif";
  // return full image if no size specified
  if ((is_null($max_width)) or (is_null($max_height))) {
    return_image($image_file,$image_path,$image_type);
    exit;
  }
  if (!is_dir(IMAGE_CACHE)) {
    mkdir(IMAGE_CACHE, 0777, TRUE);
  }
  $cache_file = "c". $max_width ."X" . $max_height. "-" . $image_file;
  $cache_path_file = IMAGE_CACHE.$cache_file;
  if (file_exists($cache_path_file)) {
    header("Content-Type: image/" . $image_type);
    header("Content-Disposition: filename=\"" . $cache_file . "\"");
    readfile($cache_path_file);
    exit;
  }
  $source_img = $image_path.$image_file;
  if (!$image = imagecreatefromstring(file_get_contents($source_img))) {
    exit;
  }
  $image_width = imagesx($image);
  $image_height = imagesy($image);
  if (($image_width < $max_width) and ($image_height < $max_height)) {
    $new_img_height = $image_height;
    $new_img_width = $image_width;
  } else {
    $aspect_x = $image_width / $max_width;
    $aspect_y = $image_height / $max_height;
    if ($aspect_x > $aspect_y) {
      $new_img_width = $max_width;
      $new_img_height = $image_height / $aspect_x;
    } else {
      $new_img_height = $max_height;
      $new_img_width = $image_width / $aspect_y;
    }
  }
  $new_image = imagecreatetruecolor($new_img_width, $new_img_height);
  imagecopyresampled($new_image, $image, 0, 0, 0, 0, $new_img_width, $new_img_height, imagesx($image), imagesy($image));
  imagedestroy($image);
  header("Content-type: image/" . $image_type);
  header("Content-Disposition: filename=\"" . $cache_file . "\"");
  if ($image_type == "jpeg") {
    imagejpeg($new_image, NULL, 75);
    imagejpeg($new_image, $cache_path_file, 75);
  }
  if ($image_type == "png") {
    imagepng($new_image);
    imagepng($new_image, $cache_path_file);
  }
  if ($image_type == "gif") {
    imagegif($new_image);
    imagegif($new_image, $cache_path_file);
  }
  imagedestroy($new_image);
}
function show_document($conn,$detailky,$secureid,$image_width,$image_height) {
   $qry = "
     select case obpccvis
            when '00000000'
            then 'UR'||replace(a.obpcurno||'-'||obpccpid||a.obpcfext,' ','0')
            else replace(a.obpccvis||'-'||a.obpccpid||a.obpcfext,' ','0')
            end filename
           ,c.obptsdir filepath
          from obspcoaf a
            left join patcodes b on b.tcode='wi' and b.acode=trim(a.obpcctyp)
            left join obspctaf c on c.obptslid= a.obpcslid
          where a.obpcurno = :urnumber
          and   a.obpccvis = :admissno
          and   a.obpccpid = :corresid
            and ((b.tcform6='0') or (b.tcindc1<>1 and
            ((select nvl(wbstlev,'0') from websteaf
              where wbstuid=:secureid and wbstprg='CLIWEB08') > b.tcform6)))
           order by obpcindt desc
  ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_bind_by_name($stmt, ':urnumber', substr($detailky,0,8));
  oci_bind_by_name($stmt, ':admissno', substr($detailky,8,8));
  oci_bind_by_name($stmt, ':corresid', substr($detailky,16,4));
  if ($stmt) {
    if (oci_execute($stmt)) {
       $row  = oci_fetch_row($stmt);
        show_image($row[0],$row[1],$image_width,$image_height);
    }
  }
}
//
// Main Code Line
// Image Name and Path Base64 encoded to mask name and specal characters in URL
//
 $reportno    = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $detailky    = (isset($_REQUEST["detailky"])) ? $_REQUEST["detailky"] : null;
 $imageFile   = (isset($_REQUEST["f"])) ? base64_decode($_REQUEST["f"]) : null;
 $imagePath   = (isset($_REQUEST["p"])) ? base64_decode($_REQUEST["p"]) : null;
 $imageWidth  = (isset($_REQUEST["w"])) ? $_REQUEST["w"] : null;
 $imageHeight = (isset($_REQUEST["h"])) ? $_REQUEST["h"] : null;
 if ($reportno==1) {
   show_document($conn,$detailky,$secureid,$imageWidth,$imageHeight);
   exit();
 }
 show_image($imageFile,$imagePath,$imageWidth,$imageHeight);
?>

