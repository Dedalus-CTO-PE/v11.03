<?php
/*
.----------------------------------------------------------------------
. Program       : preadm01.php
.
. Function      : General AJAX Select List JSON Generation
.
. Requirements  : PHP MSSQL Configuration
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "preadm01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Preadmission Portal Interface"
.----------------------------------------------------------------------
*/
require "setup.php";
$preadmDB = mssql_connect($ini['preadmDB_host'], $ini['preadmDB_user'], $ini['preadmDB_password']);
if (!$preadmDB) {
    die('Error: Unable to connect to Online Pre-admission Database at this Time.');
}
mssql_select_db($ini['preadmDB_database'],$preadmDB); 

$admissdt = "";
$admissno = "";
$urnumber = "";
$keywords = "";
$facility = "";
$frstdate = "";
$lastdate = "";
$status = "";
$doctcode = "";
$comments = "";
if (isset($_GET['facility']))    { $facility    = trim($_GET['facility']); }
if (isset($_GET['doctcode']))    { $doctcode    = trim($_GET['doctcode']); }
if (isset($_GET['status']))      { $status      = trim($_GET['status']); }
if (isset($_GET['reportno']))    { $reportno    = trim($_GET['reportno']); }
if (isset($_GET['frstdate']))    { $frstdate    = trim($_GET['frstdate']); }
if (isset($_GET['lastdate']))    { $lastdate    = trim($_GET['lastdate']); }
if (isset($_GET['patientid']))   { $patientid   = trim($_GET['patientid']); }
if (isset($_GET['admissionid'])) { $admissionid = trim($_GET['admissionid']); }
if (isset($_GET['admissno']))    { $admissno    = $_GET['admissno']; }
if (isset($_GET['urnumber']))    { $urnumber    = $_GET['urnumber']; }
if (isset($_GET['comments']))    { $comments    = $_GET['comments']; }
if ($reportno==1) {
  $sql = "EXEC webPASList '$facility','$status','$frstdate','$lastdate','$doctcode'";
  $result = mssql_query($sql);
  $c=0;
  echo "function AddRows() {";
  while(mssql_fetch_row($result)) {
   echo "t.addRow(\"";
   for($i=0;$i<mssql_num_fields($result);$i++)
   {        
     echo mssql_result($result,$c,$i)."\",\"";         
   }
   echo "$c\");";
   $c=$c+1;
  } 
  echo "}";
}
if ($reportno==2) {
  $sql = "EXEC webPASAdmission '$admissionid'";
  $result = mssql_query($sql);
  $c=0;
  $reply = "[";
  while(mssql_fetch_row($result)) {
   if ($c>0) $reply .= ",";
   $reply .= "{";
   for($i=0;$i<mssql_num_fields($result);$i++)
   {        
     if ($i>0) $reply .= ",";
     $reply .= "\"".mssql_field_name($result, $i)."\":\"".mssql_result($result,$c,$i)."\"";         
   }
   $reply .= "}";
   $c=$c+1;
  } 
  $reply .= "]";
  echo $reply;
}
if ($reportno==3) {
  $sql = "EXEC webPASUpdate '$admissionid','$status','$urnumber','$admissno','$comments'";
  $result = mssql_query($sql);
  $c=0;
  $reply = "";
  while(mssql_fetch_row($result)) {
   for($i=0;$i<mssql_num_fields($result);$i++)
   {        
     $reply .= mssql_result($result,$c,$i);         
   }
  }
  echo $reply;
}

if ($reportno==4) {
  $sql = "EXEC webPASDefaultReg '$admissionid'";
  $result = mssql_query($sql);
  $c=0;
  $reply = "[";
  while(mssql_fetch_row($result)) {
   if ($c>0) $reply .= ",";
   $reply .= "{";
   for($i=0;$i<mssql_num_fields($result);$i++)
   {        
     if ($i>0) $reply .= ",";
     $reply .= "\"".mssql_field_name($result, $i)."\":\"".mssql_result($result,$c,$i)."\"";         
   }
   $reply .= "}";
   $c=$c+1;
  } 
  $reply .= "]";
  echo $reply;
}

if ($reportno==5) {
  $sql = "EXEC webPASDefaultNok '$admissionid'";
  $result = mssql_query($sql);
  $c=0;
  $reply = "[";
  while(mssql_fetch_row($result)) {
   if ($c>0) $reply .= ",";
   $reply .= "{";
   for($i=0;$i<mssql_num_fields($result);$i++)
   {        
     if ($i>0) $reply .= ",";
     $reply .= "\"".mssql_field_name($result, $i)."\":\"".mssql_result($result,$c,$i)."\"";         
   }
   $reply .= "}";
   $c=$c+1;
  } 
  $reply .= "]";
  echo $reply;
}

if ($reportno==6) {
  $sql = "EXEC webPASDefaultAdm '$admissionid'";
  $result = mssql_query($sql);
  $c=0;
  $reply = "[";
  while(mssql_fetch_row($result)) {
   if ($c>0) $reply .= ",";
   $reply .= "{";
   for($i=0;$i<mssql_num_fields($result);$i++)
   {        
     if ($i>0) $reply .= ",";
     $reply .= "\"".mssql_field_name($result, $i)."\":\"".mssql_result($result,$c,$i)."\"";         
   }
   $reply .= "}";
   $c=$c+1;
  } 
  $reply .= "]";
  echo $reply;
}

if ($reportno==7) {
  $sql = "EXEC webPASDefaultThr '$admissionid'";
  $result = mssql_query($sql);
  $c=0;
  $reply = "[";
  while(mssql_fetch_row($result)) {
   if ($c>0) $reply .= ",";
   $reply .= "{";
   for($i=0;$i<mssql_num_fields($result);$i++)
   {
     if ($i>0) $reply .= ",";
     $reply .= "\"".mssql_field_name($result, $i)."\":\"".mssql_result($result,$c,$i)."\"";
   }
   $reply .= "}";
   $c=$c+1;
  }
  $reply .= "]";
  echo $reply;
}

mssql_close ($preadmDB);

?>
