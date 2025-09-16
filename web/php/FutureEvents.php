<?php
/*
.----------------------------------------------------------------------
. Program       : FutueEvents.php
.
. Function      : Future Events List
.
. Modifications :
. V10.12.01  15.02.2018 B.G.Ackland
.            Fixed for Multi Hospital Configuration.
.----------------------------------------------------------------------
PRGID     INIT      "FutureEvents.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Future Event List"
.----------------------------------------------------------------------
*/
  header("cache-control:no-cache");
  require "setup.php";
  require "include/security.php";
  require "include/standard.php";
  require "include/events.php";

  $EventTypeID = (isset($_REQUEST["EventTypeID"])) ? $_REQUEST["EventTypeID"] : "";
  $EventStatusID = (isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : "";
  if ($EventTypeID=="") $EventTypeID="";
  if ($EventStatusID=="") $EventStatusID="";
  $SQL="SELECT * FROM ICS_EventTypes WHERE EVENTTYPEID=:EventTypeID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':EventTypeID', $EventTypeID);
  oci_execute($rs);
  $rsEventTypes=oci_fetch_array($rs, OCI_BOTH+OCI_RETURN_NULLS);
  $PageHeading=$rsEventTypes["DESCRIPTION"];
  $SQL="select a.*
        ,TO_CHAR(a.DTSTART,'YYYYMMDDHH24:MI') StartDateTime
        ,TO_CHAR(a.DTEND,'YYYYMMDDHH24:MI') EndDateTime
        ,b.Description StatusName
        ,c.Description Typename
        from ICS_Events a
        JOIN ICS_EventStatus b on b.EventStatusID=a.EventStatusID
        JOIN ICS_EventTypes c on c.EventTypeID=a.EventTypeID ";
  if ($ibcnmhos=="1") {
    $SQL.=" JOIN opropraf d on d.oprmroom=a.LocationCode  and d.oprmhosp=:HOSPITAL ";
  }
  $SQL.=" WHERE a.dtStart>=SYSDATE ";
  if ($EventTypeID!="")    $SQL.=" AND   a.EventTypeID=:EventTypeID   ";
  if ($EventStatusID!="")  $SQL.=" AND   a.EventStatusID=:EventStatusID ";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  if ($ibcnmhos=="1")     { oci_bind_by_name($rs, ':HOSPITAL', $wbsehosp); } 
  if ($EventTypeID!="")   { oci_bind_by_name($rs, ':EventTypeID', $EventTypeID); }
  if ($EventStatusID!="") { oci_bind_by_name($rs, ':EventStatusID', $EventStatusID); }
  if (!oci_execute($rs)) {echo oci_error($rs); echo $SQL;echo "\n$EventTypeID\n$EventStatusID";exit();}
?>
<HTML>
<HEAD>
  <meta name="Author"          content="B.G.Ackland">
  <meta name="Title"           content="Future Calendar Events">
  <meta name="ServerID"        content="FutureEvents.php">
  <meta name="ServerVersion"   content="V11.03.00">
  <meta name="ServerName"      content="Future Calendar Events">
  <meta name="ServerOption"    content="N/A">
  <meta name="ServerTemplate"  content="N/A">
  <meta name="TemplateFile"    content="FutureEvents.php">
  <meta name="TemplateVersion" content="V11.03.00">
  <meta name="TemplateHome"    content="php/event">

<Title><?php echo $PageHeading; ?></Title>
<link rel="stylesheet" href="../html/standard.css" type="text/css">
<link rel="stylesheet" href="../html/forms.css" type="text/css">
<link rel="stylesheet" href="../html/list.css" type="text/css">
<link rel="stylesheet" href="../html/custom.css" type="text/css">
<script type=text/javascript src="../js/Standard.js"></script>
<script type=text/javascript src="../js/Custom.js"></script>
<script type=text/javascript src="../js/FormStandards.js"></script>
<script type=text/javascript src="../js/FormTableSort.js"></script>
<script type=text/javascript>
var t;
var FormTable;
function init() {
 t = new Table(1,0,1,"100%","center");
 FormTable=t;
 t.addColumn("ID","String",0,0,"left nowrap","MaintenanceIcon.gif","","10%")
 t.addColumn("Start","DateTime",20,20,"left nowrap","","","15%")
 t.addColumn("End","DateTime",21,21,"left nowrap","","","15%")
 t.addColumn("Description","String",4,4,"left nowrap","","","20%")
 t.addColumn("Location","String",5,5,"left nowrap","","","20%")
 t.addColumn("Status","String",22,22,"left nowrap","","","10%")
 t.addColumn("Created By","String",11,11,"left nowrap","","","10%")
 OrderColumn=1; 
<?php     
   ListSortTable($rs);
?>
 TableOutput(OrderColumn,AscDsc);
}
function rowOnclick(rowNo) {
	theURL="EventUpdate.php?EventID="+FormTable.rows[rowNo][0] 
 location.href=theURL;
}
function AddEvent() {
	theURL="EventUpdate.php"
 location.href=theURL;
}
</script>
</HEAD>
<body onload='PageLoad();SetFormList();'>
<table width=100% cellspacing=0 cellpadding=0 border=0>
<tr><td colspan=2 style='padding:5px 10px;'>
    <span class=textHeading 
    style='font-size:17px;color:darkblue;'>
    <?php echo $PageHeading; ?></span>
    </td>
<td style='text-align:right;padding-right:15px;'>
<input type=button class=button value="Add Event" onclick='AddEvent();'>
</td>
</tr>
<tr><td colspan=2 style='padding:5px 10px;'>
<form name=SelectPeriod action=FutureEvents.php method=get>
<input type=hidden name=EventTypeID value="<?php echo $EventTypeID; ?>">
<table class=FilterTable>
<tr><td class=FilterLabel>Status: </td>
<td><select name=EventStatusID class=Select200 onchange="SelectPeriod.submit();">
<option value="">All Event Status</option>
<?php EventStatusOptionList($EventStatusID);?>
</select></td>
</tr></table>
</td>
</form>
</td></tr>
</TABLE>
<div id=TableLocation></div>
<div name="PopUpScreen" id="PopUpScreen" style="display: none;">
<iframe scrolling="no" width="100%" height="100%" name="PopUpFrame" id="PopUpFrame"></iframe>
<iframe scrolling="no" style="display: none;" name="PopUpFrame1" id="PopUpFrame1"></iframe>
</div>
<div id=PopUpDiv style="display:none;position:absolute"></div>
</BODY>
</HTML>

