<?php
/*
.----------------------------------------------------------------------
. Program       : hv.php
.
. Function      : HealthView Interface
.
. Modifications :
. V10.03.00 14.11.2013 B.G.Ackland
.                      Security Review
. V10.01.00 13/04/2012 Version change
. V10.00.00 13/04/2012 Created for Mobility Suite
.----------------------------------------------------------------------
PRGID     INIT      "hv.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "AJAX Select List"
.----------------------------------------------------------------------
*/
# $uid = $_SERVER['REMOTE_USER'];
 if (isset($_GET['ihi'])) {
   $ihi = $_GET['ihi']; 
 } else {
   exit();
 }
 $reply = "";
 $dl    = "','";
 $conn = oci_connect('paspub','paspub','PAS') or die('Cant Connect to Oracle');
 $qry = "select pmaiurno ,(select max(dpvibill) from patvisaf where pviurno=pmaiurno)
         from pmsaidaf where pmaialid like '%I'||:ihi ";
 $stmt = oci_parse($conn,$qry) or die('cant parse query');
 oci_bind_by_name($stmt, ':ihi', $ihi);
 if ($stmt) {
    if (oci_execute($stmt)) { 
      $row  = oci_fetch_row($stmt);
      $urnumber=$row[0];
      $admissno=$row[1];
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
  $reply .= "<head><title>Electronic Health Record</title>
<link rel='stylesheet' href='../html/public/PatientSummary.css' type='text/css'>
<script type=text/javascript>
var CONTENT_LINK='../../cgi-bin/patweb98.pbl?reportno=01&template=900&srchtype=4&urnumber=$urnumber&admissno=$admissno'
</script>
</head><body>
<iframe name='menu' id='menu' 
        src='../html/public/PatientSummaryMenu.html' class='MenuiFrame' ></iframe>
<iframe name='content' id='content'
 class='ContentiFrame' /></iframe></body>";
  echo $reply;
  oci_close($conn);
?>
