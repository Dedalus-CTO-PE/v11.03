<?php
/*
.----------------------------------------------------------------------
. Program       : CanvasToImage.php
.
. Function      : Save a Canvas Image to a Temporary File
.                 Then trigger Clinical Document Creation 
.                 for a patient.
.
. Modifications :
.  V10.05.01 09.10.2014 B.G.Ackland
.            Enable Flash Upload on Image via Post Data when corsp001=''
.            Used from cliweb0801045.html via js/webcamjs/jpegcam
.----------------------------------------------------------------------
PRGID     INIT      "CanvasToImage.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Save Image Data to File"
.----------------------------------------------------------------------
*/
  $secureid = $_SERVER['REMOTE_USER'];
  if ($secureid=='') {
    echo "ERROR:Security Invalid.";
    exit;
  }
  $img = $_POST['corsp001'];
  if ($img=='') {
    $img = file_get_contents('php://input');
    if(md5($img) == '7d4df9cc423720b7f1f3d672b89362be'){
        echo "ERROR:File empty.";
        exit;
    }
    $data=$img;
    $filename = substr(uniqid(),0,8) . '.png';
    $file = "/tmp/$filename";
    $success = file_put_contents($file, $data);
    if ($success) {
      echo "FILESAVED:$file";
      exit;
    } else {
      echo "ERROR:Unable to save the file. ";
      exit;
    }
  }
  if (preg_match('/data:image\/png;base64,/', $img)) {
    $img = str_replace('data:image/png;base64,', '', $img);
    $img = str_replace(' ', '+', $img);
    $data = base64_decode($img);
    $filename = substr(uniqid(),0,8) . '.png';
  }
  if (preg_match('/data:image\/jpeg;base64,/', $img)) {
    $img = str_replace('data:image/jpeg;base64,', '', $img);
    $img = str_replace(' ', '+', $img);
    $data = base64_decode($img);
    $filename = substr(uniqid(),0,8) . '.jpg';
  }
  $file = "/tmp/$filename";
  $success = file_put_contents($file, $data);
  $query_string = "";
  if ($_POST) {
    $kv = array();
    foreach ($_POST as $key => $value) {
      if ($key!='corsp001') {
        $kv[] = "$key=$value";
      }
    }
    $kv[] = "corsp001=$file";
    $query_string = join("&", $kv);
    $query_string = str_replace(" ","+",$query_string);
  }
  if ($success) {
    header("Location:../cgi-bin/cliweb08.pbl?$query_string");
  } else {
    echo "Unable to save the file. $query_string";
  }
?>
