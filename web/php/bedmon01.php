<?php
/*
.----------------------------------------------------------------------
. Program       : bedmon01.php
.
. Function      : Phillips Bedside Monitor Interface
.
. Modifications :
. V10.14.02 08.07.2019 B.G.Ackland
.           Fixed emrlocn assignment; use the emergency location as the map key
.           if the ward and bed are empty.
. V10.10.01 09.05.2017 B.G.Ackland
.           Return Monitor Login Page to allow different systems
. V10.06.02 15.02.2015 B.G.Ackland
.           Remove Code no Longer Required 
. V10.06.01 15.02.2015 B.G.Ackland
.           Modification for New Release of Philips Software.
.           N.B. Only option 5 is used all other access implemeted via 
.                Apache reverse proxy configuration on server.
.                See documentation.
.----------------------------------------------------------------------
PRGID     INIT      "bedmon01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Phillips Bedside Monitor Interface"
.----------------------------------------------------------------------
*/
 require "bedmocfg.php";
 if (isset($_SERVER['REMOTE_USER']))  $username = $_SERVER['REMOTE_USER'];
 if (isset($_GET['reportno']))        $reportno = $_GET['reportno'];
 if (isset($_GET['wardcode']))        $wardcode = $_GET['wardcode'];
 if (isset($_GET['bedcode']))         $bedcode = $_GET['bedcode'];
 if (isset($_GET['emrlocn']))         $emrlocn = $_GET['emrlocn'];
 switch($reportno) {
 case 5:
   $bedcode=trim($bedcode);
   $mapkey="$wardcode$bedcode";
   if (trim($mapkey)=="") {
     $mapkey=$emrlocn;
   }
   if ($BedMap[$mapkey]) {
     $PatientLocation=$BedMap[$mapkey];
     echo "'$host','$PatientLocation','$monitorLogin','$monitorPassword','$monitorTimeout','$monitorApp','$monitorLoginPage'";
   } else {
     echo 'false';
   }
  break;
 }
?>
