<?php
/*
.----------------------------------------------------------------------
. Program       : EventStatus.php
.
. Function      : Event Status Maintenance
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "EventStatus.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Event Status Maintenance"
.----------------------------------------------------------------------
*/
  header("cache-control:no-cache");
  require "setup.php";
  require "include/security.php";
  require "include/standard.php";
  require "include/functions.php";
  
  $EventStatusID = (isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;
  if (isset($_POST["cmdCancel"])) {
   header("Location: EventStatus.php");
   exit();
  } 
 
  if (isset($_POST["cmdDelete"])) {
    $EventStatusID=(isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;
    $Active='F';  
    $SQL="UPDATE ICS_EventStatus SET  
             Active=:Active
          WHERE EventStatusID=:EventStatusID";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':EventStatusID', $EventStatusID);
   oci_bind_by_name($rs, ':Active', $Active);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   header("Location: EventStatus.php");
   exit();
  } 
  if (isset($_POST["cmdUpdate"])) {
    $EventStatusID=(isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;
    $Description=(isset($_REQUEST["Description"])) ? $_REQUEST["Description"] : null;  
    $SQL="UPDATE ICS_EventStatus SET  
             Description=:Description,
          WHERE EventStatusID=:EventStatusID";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':Description', $Description);
   oci_bind_by_name($rs, ':EventStatusID', $EventStatusID);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   header("Location: EventStatus.php");
   exit();
  } 
  if (isset($_POST["cmdCreate"])) {
    $Description=(isset($_REQUEST["Description"])) ? $_REQUEST["Description"] : null;  
    $Active=(isset($_REQUEST["Active"])) ? $_REQUEST["Active"] : 'T';  
    $SQL="INSERT INTO ICS_EventStatus 
            ( Description, Active)
     Values (:Description,:Active)";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':Description', $Description);
    oci_bind_by_name($rs, ':Active', $Active);
    if (!oci_execute($rs)) {echo oci_error($rs);exit();}
    header("Location: EventStatus.php");
    exit();
  }
?>
<HTML>
<HEAD>
  <meta name="Author"          content="B.G.Ackland">
  <meta name="Company"         content="Dedalus">
  <meta name="ServerID"        content="EventStatus.php">
  <meta name="ServerVersion"   content="V11.03.00">
  <meta name="ServerName"      content="Event Status Maintenance">
  <meta name="ServerOption"    content="N/A">
  <meta name="ServerTemplate"  content="N/A">
  <meta name="TemplateFile"    content="EventStatus.php">
  <meta name="TemplateVersion" content="V11.03.00">
  <meta name="TemplateHome"    content="php/event">
  <meta name="Title"           content="Event Status Maintenance">

<Title>Event Status Maintenance</Title>
<link rel="stylesheet" href="../html/standard.css" type="text/css">
<link rel="stylesheet" href="../html/forms.css" type="text/css">
<link rel="stylesheet" href="../html/custom.css" type="text/css">
<script type=text/javascript src="../js/Standard.js"></script>
<script type=text/javascript src="../js/Custom.js"></script>
<script type=text/javascript src="../js/FormTableSort.js"></script>
<script type=text/javascript src="../js/AutoSuggestionPopup.class.js"></script>
<script type=text/javascript>
var t;
function init() {
 t = new Table(1,0,1,"100%","center");
 t.addColumn("ID","String",0,0,"left","DeleteIcon.gif","","5%")
 t.addColumn("Event Status ","String",1,1,"left nowrap","","","50%")
 t.addColumn("Active","String",3,3,"left nowrap","","","25%")
 OrderColumn=1; 
<?php  
   $SQL="select a.EventStatusID, a.Description, a.Active
         ,CASE a.Active WHEN 'T' THEN 'Yes' ELSE 'No' END showActive
        from ICS_EventStatus a ";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
   AddSortTable($rs);
?>
   t.addRow("<i>Insert</i>","<input type=text id=Description name=Description size=50 onblur=AddEventStatus();>","<input type=hidden id=Description name=Description>","","","");
 <?php
   echo " TableOutput(OrderColumn,AscDsc);";
?>
}
function rowOnclick(rowNo) {
 if (event.srcElement.className=="DeleteIcon") {
  if (t.rows[rowNo][0]=="") return;
  if (confirm("Click Ok to Delete EventStatus")){ 
    document.form2.EventStatusID.value=t.rows[rowNo][0];
    document.getElementById("form2cmd").name="cmdDelete";
    document.form2.submit();
  }
 }
}
function AddEventStatus() {
  if (document.getElementById("Description").value=="") return;
  document.form2.Description.value=document.getElementById("Description").value;
  document.getElementById("form2cmd").name="cmdCreate";
  document.form2.submit();
}
</script>
</HEAD>
<body leftmargin=0 rightmargin=0 topmargin=0 bottommargin=0 onload='PageLoad();'>
<table width=100% cellspacing=0 cellpadding=0 border=0>
<tr><td style='padding:10px;'>
    <span class=textHeading 
    style='font-size:17px;color:#666;'>
    Event Status</span>
</td></tr>
</TABLE>
<div id=TableLocation></div>
<form id=form2 name=form2 target=_self action=EventStatus.php method=POST>
<input type=hidden name=EventStatusID value="">
<input type=hidden name=Description value="">
<input type=hidden name=Active value="T">
<input type=hidden id=form2cmd name=cmd value="SET">
</form>
<div id='-suggestion-panel-wrapper' style='position:absolute;display:none; '>
  <div id='-suggestion-panel-wrapper' style='width:100%'>
   <ul id='-suggestion-table' style='width:100%'></ul>
  </div>
</div>
<div name="PopUpScreen" id="PopUpScreen" style="display: none;">
<iframe scrolling="no" width="100%" height="100%" name="PopUpFrame" id="PopUpFrame"></iframe>
<iframe scrolling="no" style="display: none;" name="PopUpFrame1" id="PopUpFrame1"></iframe>
</div>
</BODY>
</HTML>
