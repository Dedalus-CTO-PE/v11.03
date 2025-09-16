<?php
/*
.----------------------------------------------------------------------
. Program       : GpsTrack.php
.
. Function      : GPS Logging AJAX
.                 Writes a Users GPS Location to Flat Log File
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "GpsTrack.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "GPS Tracking AJAX"
.----------------------------------------------------------------------
*/
 $uid = $_SERVER['REMOTE_USER'];
 if (isset($_GET['lati'])) $lati= $_GET['lati']; 
 if (isset($_GET['long'])) $long= $_GET['long']; 
 if (isset($_GET['device'])) $device= $_GET['device']; 
 $time = date('H:i:s');
 $trackRecord="$uid|$lati|$long|$time\n";
 $today = date('Y-m-d');
 $trackfile = "gps$today.txt";
 $fh = fopen($trackfile,'a');
 fwrite($fh, $trackRecord);
 fclose($fh);
 echo "OK";
?>
