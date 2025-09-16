<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : ical02_ltz.php
.
. Function      : ICS Calendar Subscription
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "ical02_ltz.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Calendar Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reply = "";
 $tz = date_default_timezone_get();
 $fromdate = mktime(0, 0, 0, date("m")-3, "01",   date("Y"));
 $todate = mktime(0, 0, 0, date("m")+9, "01",   date("Y"));
 $fromdate = date("Ymd",$fromdate);
 $todate = date("Ymd",$todate);
 $qry = "select
         'opr'||opsedate||opsetime||rpad(opseclin,6,'+') eventuid
        ,opsedate evntdate
        ,opsetime evntstim
        ,opseendt evntetim
        ,'Session - '||nvl(trim(opcldesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam1
        ,'Location - ' || oprmdesc evntnam2
        ,'Anaesthetist - '||initcap(a.dsname) || ', ' || initcap(a.dgname) || ', ' || a.dtitl evntnam3
        ,'Speciality - '|| (select tdesc from patcodes where tcode='ST' and acode=opsetype) evntnam4
        ,'Patients - '|| (select count(*) from oprdetaf 
          where opdadate=opsedate and  opdatime=opsetime and  opdaclin=opseclin and  dopdasta<>'3') evntcnt 
        ,a.ptdoseml
        ,a.dtitl || ' ' || substr(initcap(a.dgname),1,1) || ' ' || initcap(a.dsname) 
        ,s.ptdoseml
        ,s.dtitl || ' ' || substr(initcap(s.dgname),1,1) || ' ' || initcap(s.dsname) 
        ,'../../cgi-bin/oprweb01.pbl?reportno=03&template=003&sesskeys='||opsedate||opsetime||rpad(opseclin,6,'+') eventlink
        ,opsethet
      from oprsesaf
      left join oprcliaf on opclclin=opseclin
      left join opropraf on oprmroom=opsethet
      left join patdo1af s on s.dcode=opseclin
      left join patdo1af a on a.dcode=opseanae
      where opsedate > '$fromdate'
      and   opsedate < '$todate'
";
 $reply .= "BEGIN:VCALENDAR\n";
 $reply .= "VERSION:2.0\n";
 $reply .= "PRODID:-//iSOFT LIMITED//NONSGML webPAS//EN\n";
 $reply .= "X-WR-CALNAME;VALUE=TEXT:Canterbury Healthcare\n";
 $reply .= "X-PUBLISHED-TTL:PT00H30M00S\n";
 $stmt = oci_parse($conn,$qry) or die('cant parse query');
 if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        date_default_timezone_set($tz);
        $dtstart= strtotime($row[1]." ".$row[2].":00");
        $dtend  = strtotime($row[1]." ".$row[3].":00");
#        date_default_timezone_set("UTC");
        $dtstart= date("Ymd\THis\Z", $dtstart);
        $dtend  = date("Ymd\THis\Z", $dtend);
        $reply .="BEGIN:VEVENT
UID:".$row[0]."@test.com
DTSTAMP:".$dtstart."
DTSTART:".$dtstart."
DTEND:".$dtend."\n";
$reply .= "LOCATION:".$row[5]."\n";
# $reply .= "GEO:37.386013;-122.082932\n";
  $reply .= "ORGANIZER;CN=Theatre Booking Office:MAILTO:theatre@elthamhospital.com\n";
# $reply .= "SUMMARY:".$row[4].", ".$row[5]."\n";
$reply .= "SUMMARY:<a href='".$row[13]."'>".$row[4]."</a><br>".$row[5]."\n";
$reply .= "SECTION_ID:".$row[14]."\n";
$reply .= "ATTENDEE;ATTSTAT=ACCEPTED;TYPE=REQ-PARTICIPANT;CN=".$row[10].":MAILTO:".$row[9]."\n"; 
$reply .= "ATTENDEE;ATTSTAT=ACCEPTED;TYPE=REQ-PARTICIPANT;CN=".$row[12].":MAILTO:".$row[11]."\n"; 
$reply .= "DESCRIPTION:".$row[4]."<br>".$row[6]."<br>".$row[7]."<br>".$row[8]." ";
$reply .= "<br><a href='".$row[13]."'>Click to View Details</a>\n";
$reply .= "URL;VALUE=URI:https://webpasdemo.healthhost.net/v9.12/cgi-bin/icalview.php?linkstr=".$row[0]."\n";
$reply .= "END:VEVENT\n";
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
  $reply .= "END:VCALENDAR\n";
  echo $reply;
  oci_close($conn); 
?>
