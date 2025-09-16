<?php
/*
.----------------------------------------------------------------------
. Program       : geocod02.php
.
. Function      : Device Tracking GEO Coded Details
.
. Modifications :
. V10.03.01  29/10/2013  B.G.Ackland
.                        Changes to use bind in SQL to aviod SQL Injection
.----------------------------------------------------------------------
PRGID     INIT      "geocod02.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Device Tracking Mapping"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $latitude = (isset($_REQUEST["latitude"])) ? $_REQUEST["latitude"] : null;
 $longtude = (isset($_REQUEST["longtude"])) ? $_REQUEST["longtude"] : null;
 $frstdate = (isset($_REQUEST["frstdate"])) ? $_REQUEST["frstdate"] : null;
 $lastdate = (isset($_REQUEST["lastdate"])) ? $_REQUEST["lastdate"] : null;
 
 $currentDate = getDate();
 $currentMonth = date("m");
 $currentYear = $currentDate['year'];
 $previousYear = $currentDate['year'] - 1;
 $FormattedAddress = "";
 $reply = "";
 $dl    = "\",\"";

switch($reportno) {
/* Update GPS Location of Device   */
 case 1:
   $SQL = "
     INSERT INTO Map_Tracking
      ( secureid, TrackDateTime, Lat, Lng )
      Values (:secureid,SYSDATE,:Lat,:Lng)";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':Lat', $latitude);
   oci_bind_by_name($rs, ':Lng', $longtude);
   oci_bind_by_name($rs, ':secureid', $secureid);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   echo "OK";
   oci_close($conn); 
   exit();
   break;
/* Plot GPS Location of Device   */
 case 2:
   $SQL = "
     SELECT  a.TRACKINGID
           , a.SECUREID
           , to_CHAR(a.TRACKDATETIME,'YYYYMMDDHH24:MI')
           , a.LAT
           , a.LNG
           , b.WBSENAM
     FROM  MAP_Tracking a
     JOIN  websecaf b on b.WBSEUID=a.SECUREID
     WHERE a.TrackDateTime > TO_DATE(:frstdate,'YYYYMMDD')
     AND   a.TrackDateTime < TO_DATE(:lastdate,'YYYYMMDD')+1
     ";
   $stmt=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($stmt, ':frstdate', $frstdate);
   oci_bind_by_name($stmt, ':lastdate', $lastdate);
   break;
/* Plot GPS Location of Device   */
 case 3:
   $SQL = "
     SELECT  a.*, b.WBSENAM
     FROM MAP_Tracking a
      JOIN (SELECT SECUREID, max(TRACKINGID)  maxTrackingID
           FROM Map_Tracking GROUP BY SECUREID) m on m.maxTrackingID=a.TrackingID
     JOIN websecaf b on b.WBSEUID=a.SECUREID
     WHERE a.TrackDateTime > TO_DATE(:frstdate,'YYYYMMDD')
     AND   a.TrackDateTime < TO_DATE(:lastdate,'YYYYMMDD')+1
     ";
   $stmt=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($stmt, ':secureid', $secureid);
   oci_bind_by_name($stmt, ':frstdate', $frstdate);
   oci_bind_by_name($stmt, ':lastdate', $lastdate);
   break;
 }
  $reply .= "function AddRows() {";
  if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        $reply .= "t.addRow(\"".$row[0];    /* 0-TrackingID*/
        for ($i = 1; $i < $numcols; $i++) {
          $reply .= $dl.str_replace('"','&quot;',$row[$i]);
        }
        $reply .= "\");\n";
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
  $reply .= "}";
  echo $reply;
  oci_close($conn); 
 
?>
