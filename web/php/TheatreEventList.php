<?php
/*
.----------------------------------------------------------------------
. Program       : ThatreEventList.php
.
. Function      : Mobility Theatre Event List 
.
. Modifications :
.
. V10.12.01  15.02.2018 B.G.Ackland
.            Fixed for Multi Hospital Configuration.
.
.  15.07.2015 B.G.Ackland
.             Fix From Email Address
.  19.06.2015 B.G.Ackland
.             Fix references to users email address
.----------------------------------------------------------------------
PRGID     INIT      "TheatreEventList.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Mobility Theatre Event List"
.----------------------------------------------------------------------
*/

  header("cache-control:no-cache");
  require "setup.php";
  require "include/security.php";
  require "include/standard.php";
  require "include/events.php";

  $wbseemai=$rsUserProfile["WBSEEMAI"];
  if (isset($_POST["cmdEmail"])) {
    $messageSubject="Theatre Availability Query - ".$wbsenam;
    $messageText=(isset($_REQUEST["messageText"])) ? $_REQUEST["messageText"] : null;
    $messageText="<hr><br>
                  Query by : <b>$wbsenam </b><br><br>
                  Message:<b> $messageText</b><br><br><hr>
                  <p style='text-align:center;font-size:10pt;font-style:italic'>
                  ".$ini['MessageFromTextLine']."<br>Created: ".date("l jS \of F Y h:i:s A");
    $header  = "MIME-Version: 1.0\n";
    $header .= "Content-type: text/html; charset=iso-8859-1\n";
    $header .= "From: '$wbsenam'  <$wbseemai>\n"; //optional headerfields 
    mail($ini['TheatreBookingsEmail'], $messageSubject, $messageText, $header); //mail command
    echo "<script type=text/javascript>";
    echo "location.href='TheatreEventList.php?EventTypeID=1000&EventStatusID=1000';";
    echo "</script>";
    exit();
  }
  $EventTypeID = (isset($_REQUEST["EventTypeID"])) ? $_REQUEST["EventTypeID"] : null;
  $EventStatusID = (isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;
  $SQL="SELECT * FROM ICS_EventTypes WHERE EVENTTYPEID=:EventTypeID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':EventTypeID', $EventTypeID);
  oci_execute($rs);
  $rsEventTypes=oci_fetch_array($rs, OCI_BOTH+OCI_RETURN_NULLS);
  $PageHeading=$rsEventTypes["DESCRIPTION"];
  $SQL="select a.*
              ,TO_CHAR(a.dtStart,'YYYYMMDDHH24:MI')
              ,TO_CHAR(a.dtEnd,'YYYYMMDDHH24:MI')
              ,b.Description StatusName
              ,c.Description TypeName
     from ICS_Events a
     JOIN ICS_EventStatus b on b.EventStatusID=a.EventStatusID
     JOIN ICS_EventTypes c on c.EventTypeID=a.EventTypeID ";
  if ($ibcnmhos=="1") {
    $SQL.=" JOIN opropraf d on d.oprmroom=a.LocationCode  and d.oprmhosp=:HOSPITAL ";
  }
  $SQL.="WHERE 1=1  ";
  if ($EventTypeID!=null) {
    $SQL.=" AND   a.EventTypeID=:EventTypeID";
  }
  if ($EventStatusID!=null) {
    $SQL.=" AND   a.EventStatusID=:EventStatusID";
  }
  $SQL.=" AND   a.dtStart>=SYSDATE-1 ";

  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':EventTypeID', $EventTypeID);
  if ($ibcnmhos=="1")     { oci_bind_by_name($rs, ':HOSPITAL', $wbsehosp); }
  if ($EventStatusID!="") { oci_bind_by_name($rs, ':EventStatusID', $EventStatusID); }
  if (!oci_execute($rs)) {echo $SQL;echo oci_error($rs);exit();}
?>
<HTML>
<HEAD>
  <meta name="Author"          content="B.G.Ackland">
  <meta name="Title"           content="Patient Event List">
  <meta name="ServerID"        content="TheatreEventList.php">
  <meta name="ServerVersion"   content="V11.03.00">
  <meta name="ServerName"      content="Patient Events">
  <meta name="ServerOption"    content="N/A">
  <meta name="ServerTemplate"  content="N/A">
  <meta name="TemplateFile"    content="TheatreEventList.php">
  <meta name="TemplateVersion" content="V11.03.00">
  <meta name="TemplateHome"    content="EventsToolkit">
<Title>Events</Title>
<link rel="stylesheet" href="../html/ipad/ipad.css" type="text/css">
<link rel="stylesheet" href="../html/ipadforms.css" type="text/css">
<script type=text/javascript src="../html/ipad/ipad.js"></script>
<script type=text/javascript src="../js/FormStandards.js"></script>
<script type=text/javascript src="../js/AutoDateTime.js"></script>
<script type=text/javascript>
var t;
var EventRecords;
function EventList() {
<?php ListSortTable($rs); ?>
}
function rowOnclick(rowNo) {
  var LinkToUrl="TheatreEventView.php?reportno=1&EventID="+EventRecords.rows[rowNo][0];
  openDocumentNonZoomable(CGIPath+LinkToUrl,"Send Session Request");
}
function SortEvents(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 EventRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowEventList();
 RemovePatDiv();
}
function InitTable() {
 EventRecords = new Table("patient-list","patient-item");
 t=EventRecords;
 EventList();
 SortOrderBy=21;
 EventRecords.rows.sort(StringSort);
 ShowEventList(1);
 MaxRowNo=t.rows.length;
}
function ShowEventList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < EventRecords.rows.length; i++) {
   OS += "<li class=sectionItem onclick='rowOnclick(\""+i+"\");'>" +
         "<span class=showFormListIcon></span><b>"+EventRecords.rows[i][4] + "</b>" +
         "<span style='float:right' class=subscriptRight>"+
         EventRecords.rows[i][5]+  "</span><br>"+
         "<span class=ntText>"+EventRecords.rows[i][3]+ "</span><br>"+
         "<span class=ntText>Organiser : "+EventRecords.rows[i][7]+
         "<span class=stdButton style='float:right'>Request</span></span><br>"+
         "<span class=ntTimeframe>Session Start : "+FormatDateTime(EventRecords.rows[i][20])+ "</span>" +
         "<span class=ntWhen>Session End : "+FormatDateTime(EventRecords.rows[i][21]) + "</span>" +
         "</li>";
 }
 if (EventRecords.rows.length<1) {
   OS += "<li class=sectionItem style='text-align:center;font-weight:bold;'>"+
         "No Free Sessions Currently Available</li>";
 }
 OS += "</ul>"+
  "<form method=post name=SendMessage action='TheatreEventList.php'>"+
  "<input type=hidden name=cmdEmail value='Yes'>"+
  "<ul class=sectionList>"+
  "<li class='sectionItem' style='text-align:center;'>"+
  "Please Note: This is a <b>REQUEST ONLY</b>.  "+
  "Hospital Staff will be in contact regarding the allocation of this session.<br><br>"+
  "If you have not found session available please send a query to the booking office using the form below."+
  "</li>"+
  "<li class='sectionItem'>"+
  "<span class='labelText'>message to booking office</span>"+
  "<span class='sectionText'>"+
  "<textarea name='messageText' style='width:70%'  rows='5' cols='50'></textarea>"+
  "<span class=stdButton onclick='document.SendMessage.submit();'>Send</span>"+
  "</span></li>"+
  "</ul>"+
  "</form>"+
  "<div>";
/* 
  Potential Enhancement idea for email subscription.

  "<form method=post name=SendMessage action='TheatreEventList.php'>"+
  "<input type=hidden name=cmdSubscribe value='Yes'>"+
  "<ul class=sectionList>"+
  "<li class='sectionItem' style='text-align:center;'>"+
  "If you would like to receive a weekly email update of available sessions enter your email address below."+
  "</li>"+
  "<li class='sectionItem'>"+
  "<span class='labelText'>email address</span>"+
  "<span class='sectionText'>"+
  "<input name='emailAddress' size=50 value='<?php echo $wbseemai;?>'></textarea>"+
  "<span class=stdButton onclick='document.Subscribe.submit();'>Subscribe</span>"+
  "</span></li>"+
  "</ul>"+
  "</form>"+
  "<div>";
*/
 el=document.getElementById("ListLocation");
 el.innerHTML=OS;
}
</script>
</HEAD>
<body onload="InitTable();">
<div class=subMenu>
<form name=SelectPeriod action=ListEventsByType.php method=get>
<input type=hidden name=EventTypeID value='<php $EventTypeID?>'>
   <select onchange='SortEvents(this);'
   class=selectMenu title='Sort Order' id=sortOrder>
   <option value=22>Sort By Date </option>
   <option value=5 >Sort By Location </option>
   <option value=4 >Sort By Name </option>
   </select>
   <span class=MenuLogo></span>
</div>
<div id=ListLocation></div>
</BODY>
</HTML>
