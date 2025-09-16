<?php
/*
.----------------------------------------------------------------------
. Program       : EventUpdate.php
.
. Function      : Add/Update Event
.
. Modifications :
. V11.03.02  26.07.2023 DA Sarkies 
.            Changed the class of Allocated To to required so that it will
.            not submit if the field is blank
. V11.03.01  17.07.2023 DA Sarkies 
.            Updated code so that Allocated to is made mandatory if 
.            Status is changed to allocated
. V11.01.01  16.06.2021 DA Sarkies       TSK 0906883
.            Added onclick event to calendar and clock images starting
.            at line 333
. V10.14.01  15.04.2019 B.G.Ackland
.            Clear AllocatedToHCP when AllocatedToName is empty
. V10.12.01  15.02.2018 B.G.Ackland
.            Fixed for Multi Hospital Configuration.
.----------------------------------------------------------------------
PRGID     INIT      "EventUpdate.php"
VERSION   INIT      "V11.03.02"
PRGNAM    INIT      "Add/Update Event"
.----------------------------------------------------------------------
*/
  header("cache-control:no-cache");
  require "setup.php";
  require "include/security.php";
  require "include/standard.php";
  require "include/events.php";
  require "include/functions.php";
  $MandateLocationCode=$ibcnmhos;
  if ($ibcnmhos=="1") { $MandateLocationCode="class=Mandatory"; }
  $ListURL=(isset($_REQUEST["ListURL"])) ? $_REQUEST["ListURL"] : $_SERVER['HTTP_REFERER'];
  $SessionURL="";
  if (isset($_POST["cmdCancel"])) {
   header("Location: $ListURL");
   exit();
  } 
 
  if (isset($_POST["cmdUpdate"])) {
    $EventID=(isset($_REQUEST["EventID"])) ? $_REQUEST["EventID"] : null;
    $Description=(isset($_REQUEST["Description"])) ? $_REQUEST["Description"] : null;  
    $EventStatusID=(isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;  
    $EventTypeID=(isset($_REQUEST["EventTypeID"])) ? $_REQUEST["EventTypeID"] : null;  
    $Summary=(isset($_REQUEST["Summary"])) ? $_REQUEST["Summary"] : null;  
    $AllocatedComments=(isset($_REQUEST["AllocatedComments"])) ? $_REQUEST["AllocatedComments"] : null;  
    $AllocatedToHCP=(isset($_REQUEST["AllocatedToHCP"])) ? $_REQUEST["AllocatedToHCP"] : null;  
    $AllocatedToName=(isset($_REQUEST["AllocatedToName"])) ? $_REQUEST["AllocatedToName"] : null;  
    $StartDate=(isset($_REQUEST["StartDate"])) ? $_REQUEST["StartDate"] : null;  
    $StartTime=(isset($_REQUEST["StartTime"])) ? $_REQUEST["StartTime"] : null;  
    $EndDate=(isset($_REQUEST["EndDate"])) ? $_REQUEST["EndDate"] : null;  
    $EndTime=(isset($_REQUEST["EndTime"])) ? $_REQUEST["EndTime"] : null;  
    $Location=(isset($_REQUEST["Location"])) ? $_REQUEST["Location"] : null;  
    $LocationCode=(isset($_REQUEST["LocationCode"])) ? $_REQUEST["LocationCode"] : null;  
    $OrganiserID=(isset($_REQUEST["OrganiserID"])) ? $_REQUEST["OrganiserID"] : null;  
    $OrganiserName=(isset($_REQUEST["OrganiserName"])) ? $_REQUEST["OrganiserName"] : null;  
    $dtStart=$StartDate.$StartTime;
    $dtEnd=$EndDate.$EndTime;
    if (empty($AllocatedToName)) {
      $AllocatedToHCP="";
    }

    $SQL="UPDATE ICS_Events SET  
             Summary=:Summary,
             AllocatedComments=:AllocatedComments,
             AllocatedToHCP=:AllocatedToHCP,
             AllocatedToName=:AllocatedToName,
             EventStatusID=:EventStatusID,
             EventTypeID=:EventTypeID,
             dtStart=TO_DATE(:dTStart,'DD MON YYYYHH24:MI'),
             dtEnd=TO_DATE(:dtEnd,'DD MON YYYYHH24:MI'),
             Location=:Location,
             LocationCode=:LocationCode,
             OrganiserID=:OrganiserID,
             OrganiserName=:OrganiserName,
             LastUpdatedByUser=:LastUpdatedByUser,
             LastUpdatedByUserName=:LastUpdatedByUserName,
             LastUpdatedDateTime=SYSDATE
          WHERE EventID=:EventID";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':dtStart', $dtStart);
   oci_bind_by_name($rs, ':dtEnd', $dtEnd);
   oci_bind_by_name($rs, ':Description', $Description);
   oci_bind_by_name($rs, ':Summary', $Summary);
   oci_bind_by_name($rs, ':AllocatedComments', $AllocatedComments);
   oci_bind_by_name($rs, ':AllocatedToHCP', $AllocatedToHCP);
   oci_bind_by_name($rs, ':AllocatedToName', $AllocatedToName);
   oci_bind_by_name($rs, ':Location', $Location);
   oci_bind_by_name($rs, ':LocationCode', $LocationCode);
   oci_bind_by_name($rs, ':OrganiserID', $OrganiserID);
   oci_bind_by_name($rs, ':OrganiserName', $OrganiserName);
   oci_bind_by_name($rs, ':EventTypeID', $EventTypeID);
   oci_bind_by_name($rs, ':EventStatusID', $EventStatusID);
   oci_bind_by_name($rs, ':LastUpdatedByUser', $wbseuid);
   oci_bind_by_name($rs, ':LastUpdatedByUserName', $wbsenam);
   oci_bind_by_name($rs, ':EventID', $EventID);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   if ($EventTypeID==1000&&$AllocatedToHCP!=null&&$EventStatusID==1002) {
       $SessionURL="oprweb05.pbl?reportno=2&template=2&opses003=$AllocatedToHCP".
                   "&opses001=20140101&opses002=12:00";
   } else {
     header("Location: $ListURL");
     exit();
   }
  } 
  if (isset($_POST["cmdCreate"])) {
    $Description=(isset($_REQUEST["Description"])) ? $_REQUEST["Description"] : null;  
    $EventStatusID=(isset($_REQUEST["EventStatusID"])) ? $_REQUEST["EventStatusID"] : null;  
    $EventTypeID=(isset($_REQUEST["EventTypeID"])) ? $_REQUEST["EventTypeID"] : null;  
    $Summary=(isset($_REQUEST["Summary"])) ? $_REQUEST["Summary"] : null;  
    $AllocatedComments=(isset($_REQUEST["AllocatedComments"])) ? $_REQUEST["AllocatedComments"] : null;  
    $AllocatedToName=(isset($_REQUEST["AllocatedToName"])) ? $_REQUEST["AllocatedToName"] : null;  
    $AllocatedToHCP=(isset($_REQUEST["AllocatedToHCP"])) ? $_REQUEST["AllocatedToHCP"] : null;  
    $StartDate=(isset($_REQUEST["StartDate"])) ? $_REQUEST["StartDate"] : null;  
    $StartTime=(isset($_REQUEST["StartTime"])) ? $_REQUEST["StartTime"] : null;  
    $EndDate=(isset($_REQUEST["EndDate"])) ? $_REQUEST["EndDate"] : null;  
    $EndTime=(isset($_REQUEST["EndTime"])) ? $_REQUEST["EndTime"] : null;  
    $Location=(isset($_REQUEST["Location"])) ? $_REQUEST["Location"] : null;  
    $LocationCode=(isset($_REQUEST["LocationCode"])) ? $_REQUEST["LocationCode"] : null;  
    $OrganiserID=(isset($_REQUEST["OrganiserID"])) ? $_REQUEST["OrganiserID"] : null;  
    $OrganiserName=(isset($_REQUEST["OrganiserName"])) ? $_REQUEST["OrganiserName"] : null;  
    $dtStart=$StartDate.$StartTime;
    $dtEnd=$EndDate.$EndTime;
    $SQL="INSERT INTO ICS_Events
          ( DTSTART, DTEND, 
            SUMMARY, DESCRIPTION, LOCATION, LOCATIONCODE,
            ORGANISERID, ORGANISERNAME, EventTypeID, EventStatusID, 
            CreatedByUser, CreatedByUserName, CreationDateTime, 
            LastUpdatedDateTime, LastUpdatedByUser, LastUpdatedByUserName,
            AllocatedComments, AllocatedToHCP, AllocatedToName)
     Values (TO_DATE(:DTSTART,'DD MON YYYYHH24:MI'),TO_DATE(:DTEND,'DD MON YYYYHH24:MI'),
            :SUMMARY,:DESCRIPTION,:LOCATION,:LOCATIONCODE,
            :ORGANISERID,:ORGANISERNAME,:EventTypeID,:EventStatusID, 
            :CreatedByUser,:CreatedByUserName,SYSDATE,
            SYSDATE,:LastUpdatedByUser,:LastUpdatedByUserName,
            :AllocatedComments,:AllocatedToHCP,:AllocatedToName)";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':DTSTART', $dtStart);
    oci_bind_by_name($rs, ':DTEND', $dtEnd);
    oci_bind_by_name($rs, ':DESCRIPTION', $Description);
    oci_bind_by_name($rs, ':SUMMARY', $Summary);
    oci_bind_by_name($rs, ':LOCATION', $Location);
    oci_bind_by_name($rs, ':LOCATIONCODE', $LocationCode);
    oci_bind_by_name($rs, ':ORGANISERID', $OrganiserID);
    oci_bind_by_name($rs, ':ORGANISERNAME', $OrganiserName);
    oci_bind_by_name($rs, ':EventTypeID', $EventTypeID);
    oci_bind_by_name($rs, ':EventStatusID', $EventStatusID);
    oci_bind_by_name($rs, ':AllocatedComments', $AllocatedComments);
    oci_bind_by_name($rs, ':AllocatedToName', $AllocatedCToName);
    oci_bind_by_name($rs, ':AllocatedToHCP', $AllocatedCToHCP);
    oci_bind_by_name($rs, ':CreatedByUser', $wbseuid);
    oci_bind_by_name($rs, ':CreatedByUserName', $wbsenam);
    oci_bind_by_name($rs, ':LastUpdatedByUser', $wbseuid);
    oci_bind_by_name($rs, ':LastUpdatedByUserName', $wbsenam);
    if (!oci_execute($rs)) {echo oci_error($rs);exit();}
    header("Location: $ListURL");
    exit();
  }

  $EventID=(isset($_REQUEST["EventID"])) ? $_REQUEST["EventID"] : null;
  if ($EventID != null) {
    $SQL="select a.* 
          ,TO_CHAR(a.dtStart,'DD MON YYYY') STARTDATE
          ,TO_CHAR(a.dtStart,'HH24:MI') STARTTIME
          ,TO_CHAR(a.dtEnd,'DD MON YYYY') ENDDATE
          ,TO_CHAR(a.dtEnd,'HH24:MI') ENDTIME
          ,TO_CHAR(a.CreationDateTime,'DD MON YYYY HH24:MI') DTCREATED
          ,TO_CHAR(a.LastUpdatedDateTime,'DD MON YYYY HH24:MI') DTUPDATED
         from ICS_Events a Where a.EventID=:EventID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':EventID', $EventID);
    if (!oci_execute($rs)) {echo oci_error($rs);exit();}
    $tblCode=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    $EventID=$tblCode["EVENTID"];
    $Description=$tblCode["DESCRIPTION"];
    $Summary=$tblCode["SUMMARY"];
    $AllocatedComments=$tblCode["ALLOCATEDCOMMENTS"];
    $AllocatedToName=$tblCode["ALLOCATEDTONAME"];
    $AllocatedToHCP=$tblCode["ALLOCATEDTOHCP"];
    $dtStart=$tblCode["DTSTART"];
    $dtEnd=$tblCode["DTEND"];
    $StartDate=$tblCode["STARTDATE"];
    $StartTime=$tblCode["STARTTIME"];
    $EndDate=$tblCode["ENDDATE"];
    $EndTime=$tblCode["ENDTIME"];
    $Location=$tblCode["LOCATION"];
    $LocationCode=$tblCode["LOCATIONCODE"];
    $EventTypeID=$tblCode["EVENTTYPEID"];
    $EventStatusID=$tblCode["EVENTSTATUSID"];
    $OrganiserID=$tblCode["ORGANISERID"];
    $OrganiserName=$tblCode["ORGANISERNAME"];
    $CreatedByUserName=$tblCode["CREATEDBYUSERNAME"];
    $LastUpdatedByUserName=$tblCode["LASTUPDATEDBYUSERNAME"];
    $dtCreated=$tblCode["DTCREATED"];
    $dtUpdated=$tblCode["DTUPDATED"];
  }
  else {
    $Description="";
    $Summary="";
    $AllocatedComments="";
    $AllocatedToName="";
    $AllocatedToHCP="";
    $dtStart="";
    $dtEnd="";
    $StartDate="";
    $StartTime="";
    $EndDate="";
    $EndTime="";
    $Location="";
    $LocationCode="";
    $EventTypeID="";
    $OrganiserID="";
    $OrganiserName="";
    $CreatedByUserName="";
    $LastUpdatedByUserName="";
    $dtCreated="";
    $dtUpdated="";
  } 
?>
<HTML>
<HEAD>
<TITLE>Publish Theatre Availability</TITLE>
  <meta name="Author"          content="B.G.Ackland">
  <meta name="Company"         content="Dedalus">
  <meta name="ServerID"        content="EventUpdate.php">
  <meta name="ServerVersion"   content="V11.03.01">
  <meta name="ServerName"      content="Event Maintenance">
  <meta name="ServerOption"    content="N/A">
  <meta name="ServerTemplate"  content="N/A">
  <meta name="TemplateFile"    content="EventUpdate.php">
  <meta name="TemplateVersion" content="V11.03.01">
  <meta name="TemplateHome"    content="php/event">
<link rel="stylesheet" href="../html/standard.css" type="text/css">
<link rel="stylesheet" href="../html/forms.css" type="text/css">
<link rel="stylesheet" href="../html/custom.css" type="text/css">
<script type=text/javascript src="../js/Standard.js"></script>
<script type=text/javascript src="../js/Custom.js"></script>
<script type=text/javascript src="../js/FormStandards.js"></script>
<script type=text/javascript src="../js/AutoDateTime.js"></script>
<script type=text/javascript src="../js/AutoSuggestionPopup.class.js"></script>
<script type=text/javascript >
function setHCP(hcp) {
  document.getElementById("AllocatedToHCP").value=hcp.split("|")[0];
  document.getElementById("AllocatedToName").value=hcp.split("|")[1];
  setStatus();
}
function setStatus() {
  allocID=document.getElementById("AllocatedToHCP");
  statusID=document.getElementById("EventStatusID");
  for (i=0;i<statusID.options.length;i++) {
    if (!isWhitespace(allocID.value)) {
      if (statusID.options[i].value=='1002') { statusID.selectedIndex=i; }
    }
  }
}
function SetLocationName() {
  var el=document.getElementById("LocationCode");
  document.getElementById("Location").value=el.options[el.selectedIndex].text;
}
function OpenSession() {
<?php if ($SessionURL!="") { ?>
  LinkUrl="<?php echo $SessionURL; ?>";
  Left=(document.body.clientWidth-800)/2;
  DFrameLink(LinkUrl,0,Left,800,600);
<?php } ?>

}
function checkEventStatus(eventStatus) {

  var allocToName = document.getElementById("AllocatedToName");

  if (eventStatus.value == "1002") {
    allocToName.className += " Required";
  } else {
    allocToName.className = "CodeSearch ";
  }
}
</script>
</HEAD>
<body leftmargin=0 rightmargin=0 topmargin=0 bottommargin=0 onload='BodyOnLoad();OpenSession();'>
<table width=100% cellspacing=0 cellpadding=0 border=0>
<tr><td style='padding:10px;'>
<?php  if ($EventID != null) { ?>
    <span class=textHeading style='font-size:17px;color:#666;'>
    Update Event
    </td><td style='text-align:right;padding-right:10px;'>
   </td></tr>
<?php } else { ?>
    <span class=textHeading style='font-size:17px;color:#666;'>
    New Event
    </td><td style='text-align:right;padding-right:10px;'>
   </td></tr>
<?php }  ?>
<tr><td colspan=2 style='padding:10px;'>
<TABLE class=FormTable  cellspacing=1 cellpadding=0>
<form name="InputForm" id="InputForm" target=_self  Action="EventUpdate.php" method=post>
<input type=hidden id=EventID name=EventID value="<?php echo $EventID; ?>">
<?php if ($EventID==null) { ?>
<input type=hidden name=EventStatusID value='1000'>
<TR><TD class=Label>Event Type</TD>
<TD><select name=EventTypeID class='Mandatory Select200'>
    <?php EventTypeOptionList($EventTypeID);?>
    </select>
    </TD></TR>
<?php } else { ?>
<TR><TD class=Label>Event Type</TD>
<TD><select name=EventTypeID class='Mandatory Select200'>
    <?php EventTypeOptionList($EventTypeID);?>
    </select>
    </TD></TR>
<TR><TD class=Label>Created</TD>
<TD><input type=text name=dum1 size=60 class=readonly
      readonly value='<?php echo $CreatedByUserName; ?> on <?php echo $dtCreated; ?>'>
</TD></TR>

<TR><TD class=Label>Last Update</TD>
<TD><input type=text name=dum2 size=60 class=readonly
     readonly value='<?php echo $LastUpdatedByUserName; ?> on <?php echo $dtUpdated; ?>'>
</TD></TR>

<TR><TD class=Label>Status</TD>
<TD><select name=EventStatusID class='Mandatory Select200'
            onchange="checkEventStatus(this)">
    <?php EventStatusOptionList($EventStatusID);?>
    </select>
    </TD></TR>
<TR valign=top><TD class=Label>Allocated To</TD>
<TD><input type=search id=AllocatedToName name=AllocatedToName 
           title='Doctor' style='width:250px;' returnFn='setStatus()' 
           returnId='AllocatedToHCP' returnCode='AllocatedToName' searchCat='' 
           searchType='3' searchLen='0'  onclick="this.value='';" 
           onkeyup="AutoSuggest();" class='CodeSearch ' 
           ralue="<?php echo $AllocatedToName; ?>">
    <input type=hidden id=AllocatedToHCP name=AllocatedToHCP  
           value="<?php echo $AllocatedToHCP; ?>">
</TD></TR>

<TR valign=top><TD class=Label>Allocation Comments</TD>
<TD><textarea rows=5 cols=50 name=AllocatedComments><?php echo $AllocatedComments; ?></textarea>
</TD></TR>

<?php }  ?>
<TR><TD class=Label>Start Date/Time</TD>
<TD><input type=text id=StartDate name=StartDate 
     value='<?php echo $StartDate; ?>' title='Start Date' size=12 datevalidation=2 
     comparetodate1=document.InputForm.Input0 
     comparetodate2=document.InputForm.Input0 
     class='Date  Required'  required="required">
    <img src='../images/FormCalendar.png'  alt='Date Selection' 
     class=DateIcon date='document.InputForm.StartDate'
     onclick='ImageClickHandler(window.event.srcElement)'>
    <input type=text id=StartTime name=StartTime value='<?php echo $StartTime; ?>'
     title='Start Time' size=12 timevalidation=0 
     comparetotime1=document.InputForm.Input0 
     comparetotime2=document.InputForm.Input0 
     class='Time  Required'  required="required">
    <img src='../images/FormClock.png' alt='Time Selection'
     id=TimeIcon class=TimeIcon time='document.InputForm.StartTime'
     onclick='ImageClickHandler(window.event.srcElement)'>
    </TD></TR>

<TR><TD class=Label>End Date/Time</TD>
<TD><input type=text id=EndDate name=EndDate 
     value='<?php echo $StartDate; ?>' title='End Date' size=12 datevalidation=2 
     comparetodate1=document.InputForm.StartDate 
     comparetodate2=document.InputForm.Input0 
     onfocus='if (isWhitespace(this.value)) this.value=document.InputForm.StartDate.value;'
     class='Date  Required'  required="required">
    <img src='../images/FormCalendar.png'  alt='Date Selection' 
     class=DateIcon date='document.InputForm.EndDate'
     onclick='ImageClickHandler(window.event.srcElement)'>
    <input type=text id=EndTime name=EndTime value='<?php echo $EndTime; ?>'
     title='End Time' size=12 timevalidation=2 
     comparetotime1=document.InputForm.StartTime 
     comparetotime2=document.InputForm.Input0 
     class='Time  Required'  required="required">
    <img src='../images/FormClock.png' alt='Time Selection'
     class=TimeIcon time='document.InputForm.EndTime'
     onclick='ImageClickHandler(window.event.srcElement)'>
    </TD></TR>

<TR><TD class=Label>Description</TD>
<TD><input type=text size=50 maxlength=50 id=Description name=Description  
     class='Required' value="<?php echo $Description; ?>">
</TD></TR>

<TR valign=top><TD class=Label>Summary of Event</TD>
<TD><textarea rows=5 cols=50 name=Summary><?php echo $Summary; ?></textarea>
</TD></TR>

<TR><TD class=Label>Location</TD>
<TD>
<?php 
  if ($EventTypeCode=1000) {
    echo "<input type=hidden id=Location name=Location value='$Location'>";
    echo "<select id=LocationCode name=LocationCode onchange='SetLocationName()' $MandateLocationCode>";
    echo "<option value=''></option>>";
    oprSelectOptionList($LocationCode);
    echo "</select>";
  } else {
    echo "<input type=hidden name=LocationCode value=''>";
    echo "<input type=text size=50 maxlength=50 id=Location name=Location  value='$Location'>";
  }
?>
</TD></TR>

<TR><TD class=Label>Organiser</TD>
<TD>
 <input type=hidden id=OrganiserID name=OrganiserID value='<?php echo $OrganiserID; ?>'>
 <input type=text id=OrganiserName name=OrganiserName title='User' style='width:250px;'
  value='<?php usrCodeDescription($OrganiserID);?>'
  returnId='OrganiserID' returnCode='OrganiserName' searchType='7' searchLen='0'
  onclick="this.value='';" onkeyup="AutoSuggest();" class='CodeSearch ' >
</TD></TR>
</TABLE>


<TABLE class=FormTable cellspacing=2 cellpadding=0 border=0 align=center>
<TR><TD align=center>
<input type=hidden id=ListURL name=ListURL value='<?php echo $ListURL; ?>'>
<?php
 if ($EventID==null) {
   echo "<input type=Submit class=button name=\"cmdCreate\" id=\"cmdCreate\" value=\"Create\" >";	 
 }	
 else {
   echo "<input type=Submit class=button name=\"cmdUpdate\" id=\"cmdUpdate\" value=\"Update\" >";
}
?>
	<input type=button class=button name="cmdCancel" 
  onclick='location.href="<?php echo $_SERVER['HTTP_REFERER']; ?>";' id="cmdCancel" Value="Cancel">
</TD></TR>
<?php  if ($EventID>0) { ?>
<TR><TD align=center>
<table border=0 cellspacing=0 cellpadding=1 width="98%" align="center">
        <tr><td class=HeadingCell>Date Time</td>
            <td class=HeadingCell>Requested By</td>
            <td class=HeadingCell>Email Address</td>
            <td class=HeadingCell>Comments</td></tr>
<?php
  $SQL="SELECT wbsedoc||'|'||pmhcsnam||', '||pmhctitl||' '||pmhcgnam
             ,INITCAP(TO_CHAR(RequestedDateTime,'DD MON YYYY HH24:MI'))
             ,wbsenam
             ,NVL(WBSEEMAI,PMHCSEML)
             ,RequestComments
        from ICS_EventRequests 
        left join websecaf on wbseuid=RequestedByUser
        left join pmshcpaf on pmhchcpc=wbsedoc
        where EventID=:EventID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':EventID', $EventID);
  if (!oci_execute($rs)) {echo oci_error($rs);exit();}
  $lineBreaks = array("\r","\r\n","\n");
  $lineBR="<br>";
  $reply="";
  oci_execute($rs);
  $rowClass="TableRowEven";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($rowClass=="TableRowEven") $rowClass="TableRowOdd";
    else $rowClass="TableRowEven";
    $reply .= "<tr class='$rowClass'>".
              "<td>".htmlspecialchars($row[1],ENT_QUOTES)."</td>".
              "<td>".htmlspecialchars($row[2],ENT_QUOTES)."</td>".
              "<td><a href='mailto:".htmlspecialchars($row[3],ENT_QUOTES).
                     "?Body=".htmlspecialchars($row[2],ENT_QUOTES)."%0A%0A%0A".
                     "&Subject=".$StartDate." ".htmlspecialchars($Description,ENT_QUOTES).
                     " in ".htmlspecialchars($Location,ENT_QUOTES)."'>".
                     htmlspecialchars($row[3],ENT_QUOTES)."</a></td>".
              "<td>".htmlspecialchars($row[4],ENT_QUOTES)."</td>".
              "</tr>";
   }
   echo "$reply";
?>
</table>
</TD></TR>
<?php } ?>
</TABLE>						
</Form>
 <div id='-suggestion-panel-wrapper' style='display:none; '>
  <div id='-suggestion-panel-wrapper2' style='width:100%'>
   <ul id='-suggestion-table' style='width:100%'></ul>
  </div>
 </div>
<script>

if (document.InputForm.EventStatusID.value == "1002") {
  document.getElementById("AllocatedToName").className += " Mandatory";
}

</script>
<div id=PopUpDiv style="display:none;position:absolute"></div>
<div name='PopUpScreen' id='PopUpScreen' style='display: none;'>
<iframe scrolling='no' width='100%' height='100%' name='PopUpFrame' id='PopUpFrame'></iframe>
<iframe scrolling='no' style='display: none;' name='PopUpFrame1' id='PopUpFrame1'></iframe>
</div>
<div id=HiddenDivision style='display:none;'></div>
<span id=DisplaySaving class=SavingData>
<img class=SavingImage src=../images/FormSave.gif>
<p id=SaveText>Saving Form Data</p></span><hr><br>
</body></html>
