<?php
/*
.----------------------------------------------------------------------
. Program       : patientPhoto.php
.
. Function      : Return Patient Photo from 
.                  1/ Latest Clinical Document for Patient of Cat wi Code pi
.                  2/ File in patientImagePath 
.                  3/ Unknown Male or Female
.
. Modifications :
. V10.06.01       17.03.2015  Peter Vela CAR 305590
.                 Added validation for deleted Patient Photo ID for oracle
. V10.04.01       15.04.2013  B.G.Ackland
.                 Enable Patient Photo ID via Clinical Documents for Informix
. V10.03.03       27.03.2013  B.G.Ackland
.                 Enable Patient Photo ID via Clinical Documents
.                 Fixed to fall back to non clinical document for CISAM
. V10.03.02       24.07.2013  B.G.Ackland
.                 Move Location of Place Holders to reside in patientImagePath
. V10.03.01       03.07.2013  B.G.Ackland
.                 Remove References to Imagick PHP Component
.                 Add pasphp.ini parameter for image location
.                 Change directory thumbs to thumbnails
. V10.03.00       13/04/2012  
.----------------------------------------------------------------------
PRGID     INIT      "patientPhoto.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Patient Photo Service"
.----------------------------------------------------------------------
*/
require "setup.php";
error_reporting(0);
define("IMAGE_CACHE", $ini['cacheImagePath']);
$secureid    = $_SERVER['REMOTE_USER'];
$urnumber    = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
$gender      = (isset($_REQUEST["gender"])) ? $_REQUEST["gender"] : null;
$imageWidth  = (isset($_REQUEST["w"])) ? $_REQUEST["w"] : null;
$imageHeight = (isset($_REQUEST["h"])) ? $_REQUEST["h"] : null;

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
/*
   Query for the latest Patient Image Document (pi)
*/
  if (strtolower($ini['dbtype']) == 'oracle') {
    $qry = "select case obpccvis 
                 when '00000000' 
                    then 'UR'||replace(a.obpcurno||'-'||obpccpid||a.obpcfext,' ','0')
                 else 
                     replace(a.obpccvis||'-'||a.obpccpid||a.obpcfext,' ','0')
                 end filename
                ,c.obptsdir filepath
          from obspcoaf a
          left join obspctaf c on c.obptslid= a.obpcslid
          where a.obpcurno = :urnumber
          and   a.obpcctyp = 'pi'
          and   a.OBPCINDT||a.OBPCINTM = 
                (select max(a.OBPCINDT||a.OBPCINTM)
                    from obspcoaf a
                    where a.obpcurno = :urnumber
                    and   a.obpcctyp = 'pi'
                    and   a.obpcmdel <> '1')
    ";
    $stmt = oci_parse($conn,$qry) or die('cant parse query');
    oci_bind_by_name($stmt, ':urnumber', $urnumber);
    if ($stmt) {
      if (oci_execute($stmt)) { 
        $row  = oci_fetch_row($stmt);
        if (!($row[0]===NULL)) {
           if (file_exists($row[1].$row[0])) {
            show_image($row[0],$row[1],$imageWidth,$imageHeight); 
            exit();
          }
        }
      }
    }
  } else {
    putenv("REQUEST_METHOD=" .$_SERVER["REQUEST_METHOD"]);
    putenv("REMOTE_USER=" .$_SERVER["REMOTE_USER"]);
    putenv("QUERY_STRING=" .$_SERVER["QUERY_STRING"]."&reportno=1&template=42");
    $row = array();
    exec("$approot/cgi-bin/cliweb08.pbl",$row); 
    if (file_exists($row[3].$row[4])) {
      show_image(trim($row[4]),$row[3],$imageWidth,$imageHeight); 
      exit();
    }
  }
  $thumbnail = $ini['patientImagePath']."thumbnail/".trim($urnumber).".jpg";
  if (file_exists($thumbnail)) {
    show_image(trim($urnumber).".jpg",$ini['patientImagePath']."thumbnail/",$imageWidth,$imageHeight); 
    exit();
  } 
  $file      = $ini['patientImagePath'].trim($urnumber).".jpg";
  if (file_exists($file)) {
    show_image(trim($urnumber).".jpg",$ini['patientImagePath'],$imageWidth,$imageHeight); 
    exit();
  } 
  if ($gender=='Male') {
    if (file_exists('unkMale.png')) {
      $im = file_get_contents('unkMale.png'); 
    } else {
      $im = file_get_contents($ini['patientImagePath'].'unkMale.png'); 
    }
  } else {
    if (file_exists('unkFemale.png')) {
      $im = file_get_contents('unkFemale.png'); 
    } else {
      $im = file_get_contents($ini['patientImagePath'].'unkFemale.png'); 
    }
  }
  header('Content-Type: image/png'); 
  echo $im; 
?>

