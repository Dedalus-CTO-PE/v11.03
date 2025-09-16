<?php
/*
.----------------------------------------------------------------------
. Program       : doctorPhoto.php
.
. Function      : Return Doctors Photo from doctorImagePath that has been
.                 configured in pasphp.ini.  This is to aviod storing photo 
.                 in web path.
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "doctorPhoto.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Doctors Photo Service"
.----------------------------------------------------------------------
*/
  $inifile = "pasphp.ini" ;
  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  }
  $doctcode  = trim($_GET['doctcode']);
  $file      = $ini['doctorImagePath'].$doctcode.".jpg";
  $thumbnail = $ini['doctorImagePath']."thumbnail/".$doctcode.".jpg";
  if (file_exists($thumbnail)) {
    $im = file_get_contents($thumbnail);
    header('content-type: image/jpeg');
    echo $im;
  } else  {
    if (file_exists($file)) {
      $im = file_get_contents($file);
      header('content-type: image/jpeg');
      echo $im;
    }
    else {
      if (file_exists('unavailable.png')) {
        $im = file_get_contents('unavailable.png');
      } else {
        $im = file_get_contents($ini['patientImagePath'].'unavailable.png');
      }
      header('content-type: image/png');
      echo $im;
    }
  }
?>
