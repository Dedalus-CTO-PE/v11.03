<?php
/*
.----------------------------------------------------------------------
. Program       : EventListAJAX.php
.
. Function      : AJAX Event List Sort Table Structure
.
. Modifications :
. V10.12.01  15.02.2018 B.G.Ackland
.            Fixed for Multi Hospital Configuration.
.----------------------------------------------------------------------
PRGID     INIT      "EventListAJAX.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "AJAX Event List Sort Table Structure"
.----------------------------------------------------------------------
*/

  header("cache-control:no-cache");
  require "include/setup.php";
  require "include/security.php";
  require "include/standard.php";
  require "include/functions.php";
  require "include/datefilter.php";
  $EventTypeID = (isset($_REQUEST["EventTypeID"])) ? $_REQUEST["EventTypeID"] : null;
  $EventStatusID = (isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;
  $SQL="select a.*
              ,TO_CHAR(a.dtStart,'YYYYMMDDHH24:MI')
              ,TO_CHAR(a.dtEnd,'YYYYMMDDHH24:MI')
              ,b.Description StatusName
              ,c.Description TypeName
     from ICS_Events a
     JOIN ICS_EventStatus b on b.EventStatusID=a.EventStatusID
     JOIN ICS_EventTypes c on c.EventTypesID=a.EventTypesID ";
  if ($ibcnmhos=="1") {
    $SQL.=" JOIN opropraf d on d.oprmroom=a.LocationCode  and d.oprmhosp=:HOSPITAL ";
  }
  $SQL.=" WHERE 1=1  ";
  if ($EventTypeID!=null) {
    $SQL.="AND   a.EventTypeID=:EventTypeID";
  }
  if ($EventStatusID!=null) {
    $SQL.="AND   a.EventStatusID=:EventStatusID";
  }
  if ($ListFromDate!=null) {
    $SQL.="AND   a.dtStart>=TO_DATE('".date("Ymd",:ListFromDate)."','YYYYMMDD') ";
  }
  if ($ListToDate!=null) {
    $SQL.="AND   a.dtStart<TO_DATE('".date("Ymd",:ListToDate)."','YYYYMMDD')+1 ";
  }

?>
function TableAddRows() {
<?php  
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  if ($ibcnmhos=="1")       { oci_bind_by_name($rs, ':HOSPITAL', $wbsehosp); }
  if ($EventTypeID!=null)   { oci_bind_by_name($rs, ':EventTypeID', $EventTypeID); }
  if ($EventStatusID!=null) { oci_bind_by_name($rs, ':EventStatusID', $EventStatusID); }
  if ($ListFromDate!=null)  { oci_bind_by_name($rs, ':ListFromDate', $ListFromDate); }
  if ($ListToDate!=null)    { oci_bind_by_name($rs, ':ListToDate', $ListToDate); }
  AddSortTable($rs);
?>
}
function rowOnclick(rowNo) {
	theURL=LinkToEventPage+"?EventID="+FormTable.rows[rowNo][0] 
 location.href=theURL;
}
