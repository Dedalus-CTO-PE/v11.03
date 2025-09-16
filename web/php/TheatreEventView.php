<?php
/*
.----------------------------------------------------------------------
. Program       : TheatreEventView.php
.
. Function      : Mobility View and Request Theatre Event
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "TheatreEventView.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Mobility View and Request Theatre Event"
.----------------------------------------------------------------------
*/
  header("cache-control:no-cache");
  require "setup.php";
  require "include/security.php";
  require "include/standard.php";
  require "include/events.php";

  if (isset($_POST["cmdUpdate"])) {
    $EventID=(isset($_REQUEST["EventID"])) ? $_REQUEST["EventID"] : null;
    $messageSubject=(isset($_REQUEST["messageSubject"])) ? $_REQUEST["messageSubject"] : null;
    $messageText=(isset($_REQUEST["messageText"])) ? $_REQUEST["messageText"] : null;
    $RequestComments=(isset($_REQUEST["RequestComments"])) ? $_REQUEST["RequestComments"] : null;  
    $messageText="<hr><br>
                  Requested by : <b>$wbsenam </b><br><br>
                  Published Session :<b> $messageText</b> <br><br>
                  Notes:<b> $RequestComments</b><br><br><hr>
                  <p style='text-align:center;font-size:10pt;font-style:italic'>
                  ".$ini['MessageFromTextLine']."<br>Created: ".date("l jS \of F Y h:i:s A");
    $SQL="INSERT INTO ICS_EventRequests
                 ( EventID, 
                   RequestedDateTime, RequestedByUser, RequestedByUserName,
                   LastUpdatedDateTime, LastUpdatedByUser, LastUpdatedByUserName,
                   RequestComments, Outcome)
          VALUES (:EventID, 
                   SYSDATE, :wbseuid, :wbsenam,
                   SYSDATE, :wbseuid, :wbsenam,
                  :RequestComments, '0') ";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':EventID', $EventID);
    oci_bind_by_name($rs, ':RequestComments', $RequestComments);
    oci_bind_by_name($rs, ':wbseuid', $wbseuid);
    oci_bind_by_name($rs, ':wbsenam', $wbsenam);
    if (!oci_execute($rs)) {echo oci_error($rs);exit();}
    $SQL="UPDATE ICS_Events
          SET EventStatusId='1001',
              LastUpdatedDateTime = SYSDATE,
              LastUpdatedByUser = :wbseuid,
              LastUpdatedByUserName = :wbsenam
          WHERE EventID=:EventID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':EventID', $EventID);
    oci_bind_by_name($rs, ':wbseuid', $wbseuid);
    oci_bind_by_name($rs, ':wbsenam', $wbsenam);
    if (!oci_execute($rs)) {echo oci_error($rs);exit();}

    $header  = "MIME-Version: 1.0\n";
    $header .= "Content-type: text/html; charset=iso-8859-1\n";
    $header .= "From: '$wbsenam'  <noreply@noserver.com>\n"; //optional headerfields 
    mail($ini['TheatreBookingsEmail'], $messageSubject, $messageText, $header); //mail command
    echo "<script type=text/javascript>";
    echo "top.CloseDocument();";
    echo "parent.frames['iphone-frame'].frames['content'].location.reload();";
    echo "</script>";
    exit();
  } 
  $EventID=(isset($_REQUEST["EventID"])) ? $_REQUEST["EventID"] : null;
  $SQL="SELECT a.* 
          ,INITCAP(TO_CHAR(a.dtStart,'DD MON YYYY')) STARTDATE
          ,TO_CHAR(a.dtStart,'HH24:MI') STARTTIME
          ,INITCAP(TO_CHAR(a.dtEnd,'DD MON YYYY')) ENDDATE
          ,TO_CHAR(a.dtEnd,'HH24:MI') ENDTIME
          ,INITCAP(TO_CHAR(a.CreationDateTime,'DD MON YYYY HH24:MI')) DTCREATED
          ,INITCAP(TO_CHAR(a.LastUpdatedDateTime,'DD MON YYYY HH24:MI')) DTUPDATED
          ,b.Description StatusName
          ,c.Description TypeName
         FROM ICS_Events a 
         JOIN ICS_EventStatus b ON b.EventStatusID=a.EventStatusID
         JOIN ICS_EventTypes c ON c.EventTypeID=a.EventTypeID
         WHERE a.EventID=:EventID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':EventID', $EventID);
  if (!oci_execute($rs)) {echo oci_error($rs);exit();}
  $rsEvent=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  $EventID=$rsEvent["EVENTID"];
  $Description=$rsEvent["DESCRIPTION"];
  $StatusName=$rsEvent["STATUSNAME"];
  $TypeName=$rsEvent["TYPENAME"];
  $Summary=$rsEvent["SUMMARY"];
  $AllocatedComments=$rsEvent["ALLOCATEDCOMMENTS"];
  $AllocatedToName=$rsEvent["ALLOCATEDTONAME"];
  $AllocatedToHCP=$rsEvent["ALLOCATEDTOHCP"];
  $dtStart=$rsEvent["DTSTART"];
  $dtEnd=$rsEvent["DTEND"];
  $StartDate=$rsEvent["STARTDATE"];
  $StartTime=$rsEvent["STARTTIME"];
  $EndDate=$rsEvent["ENDDATE"];
  $EndTime=$rsEvent["ENDTIME"];
  $Location=$rsEvent["LOCATION"];
  $EventTypeID=$rsEvent["EVENTTYPEID"];
  $EventStatusID=$rsEvent["EVENTSTATUSID"];
  $OrganiserID=$rsEvent["ORGANISERID"];
  $OrganiserName=$rsEvent["ORGANISERNAME"];
  $CreatedByUserName=$rsEvent["CREATEDBYUSERNAME"];
  $LastUpdatedByUserName=$rsEvent["LASTUPDATEDBYUSERNAME"];
  $dtCreated=$rsEvent["DTCREATED"];
  $dtUpdated=$rsEvent["DTUPDATED"];
  $rsUserProfile["WBSEDOC"];
  $messageSubject="Theatre Session request. $Description on $StartDate from $StartTime to $EndTime";
/*  $messageSubject="Theatre Availability Query - $wbsenam ";*/
  $messageText="$Description on $StartDate from $StartTime to $EndTime";

?>
<HTML>
<HEAD>
  <meta name="Auhor"          content="B.G.Ackland">
  <meta name="Title"           content="Event View">
  <meta name="ServerID"        content="TheatreEventView.php">
  <meta name="ServerVersion"   content="V11.03.00">
  <meta name="ServerName"      content="Theatre Published Event View">
  <meta name="ServerOption"    content="N/A">
  <meta name="ServerTemplate"  content="N/A">
  <meta name="TemplateFile"    content="TheatreEventView.php">
  <meta name="TemplateVersion" content="V11.03.00">
  <meta name="TemplateHome"    content="EventsToolkit">
<Title>Events</Title>
<link rel="stylesheet" href="../html/ipad/ipad.css" type="text/css">
<link rel="stylesheet" href="../html/ipadforms.css" type="text/css">
<script type=text/javascript src="../html/ipad/ipad.js"></script>
<script type=text/javascript src="../js/FormStandards.js"></script>
<script type=text/javascript src="../js/AutoDateTime.js"></script>
<script type=text/javascript>
function NoLink() {
}
function setButton() {
 var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Request";
    actionBtn.onclick = function() {
      SendRequest();
    }
  }
}
function SendRequest() {
 document.InputForm.submit();
}
</script>
</HEAD>
<body onload="setButton();">
<form name="InputForm" id="InputForm" target=_self  Action="TheatreEventView.php" method=post>
<input type=hidden id=EventID name=EventID value="<?php echo $EventID; ?>">
<input type=hidden id=cmdUpdate name=cmdUpdate value="<?php echo $EventID; ?>">
<input type=hidden id=messageSubject name=messageSubject value="<?php echo $messageSubject; ?>">
<input type=hidden id=messageText name=messageText value="<?php echo $messageText; ?>">
<ul class=sectionList>

<li class=sectionItem>
<span class='labelText'>Description</span>
<span class='sectionText'><?php echo $Description; ?></span>
</li>

<li class=sectionItem>
<span class='labelText'>Notes</span>
<span class='sectionText'><?php echo $Summary; ?></span>
</li>

<li class=sectionItem>
<span class='labelText'>Status</span>
<span class='sectionText'><?php echo $StatusName; ?></span>
</li>

<li class=sectionItem>
<span class='labelText'>Session Date/Time</span>
<span class='sectionText'><?php echo $StartDate; ?> <?php echo $StartTime; ?> to <?php echo $EndTime; ?></span>
</li>

<li class=sectionItem>
<span class='labelText'>Location</span>
<span class='sectionText'><?php echo $Location; ?></span>
</li>
<li class=sectionItem>
<span class='labelText'>Organiser</span>
<span class='sectionText'><?php echo $OrganiserName; ?></span>
</li>

<li class=sectionItem>
<span class='labelText'>Requested by</span>
<span class='sectionText'><?php echo $rsUserProfile["WBSENAM"]; ?></span>
</li>

<li class=sectionItem>
<span class='labelText'>Comments</span>
<span class='sectionText'>
<textarea id=RequestComments name=RequestComments title='Comments' rows='4' 
cols='40' class=''></textarea></span></li>

<li class=sectionItem style='text-align:center;'>
Please Note: This is a <b>REQUEST ONLY</b>.  Hospital Staff will be in contact regarding the allocation of this session.
</li>
<li class=sectionItem style='text-align:center;'>
<table border=0 cellspacing=0 cellpadding=2 width="98%" align="center">
        <tr><td class=HeadingCell>Date Time</td>
            <td class=HeadingCell>Requested By</td>
            <td class=HeadingCell>Comments</td></tr>
<?php
  $SQL="SELECT EventRequestID
             ,INITCAP(TO_CHAR(RequestedDateTime,'DD MON YYYY HH24:MI')) 
             ,RequestedByUserName
             ,RequestComments
        from ICS_EventRequests where EventID=:EventID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':EventID', $EventID);
  if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   $reply="";
   oci_execute($rs);
   $rowClass="TableRowEven";
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $numcols = oci_num_fields($rs);
     if ($rowClass=="TableRowEven") $rowClass="TableRowOdd";
     else $rowClass="TableRowEven";
     $reply .= "<tr class='$rowClass' valign=top><td nowrap>$row[1]</td>";
     $reply .= "<td nowrap>$row[2]</td>";
     $reply .= "<td>".$row[3]."</td>";
     $reply .= "</tr>";
   }
   echo $reply;
?>
</table>
</ul>
</form>
</BODY>
</HTML>
