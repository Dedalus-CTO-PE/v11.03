<?php
/*
.----------------------------------------------------------------------
. Program       : events.php
.
. Function      : Common Event Functions Include
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "events.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Common Event Functions"
.----------------------------------------------------------------------
*/
function EventTypeOptionList($SelectedEventType)
{
  $SQL="Select * from ICS_EventTypes WHERE Active='T'";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["EVENTTYPEID"];
    if (trim($row["EVENTTYPEID"])==trim($SelectedEventType)) { print " selected>"; }
      else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function EventStatusOptionList($SelectedEventStatus)
{
  $SQL="Select * from ICS_EventStatus WHERE Active='T'";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["EVENTSTATUSID"];
    if (trim($row["EVENTSTATUSID"])==trim($SelectedEventStatus)) { print " selected>"; }
      else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
?>
