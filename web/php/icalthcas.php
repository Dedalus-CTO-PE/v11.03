<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalthcas.php
.
. Function      : ICS Theatre Calendar Subscription
.
. Modifications :  ltz = Local Time Zone
.----------------------------------------------------------------------
PRGID     INIT      "icalthcas.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Theatre Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 if (isset($_GET['opsethet'])) $opsethet = $_GET['opsethet']; 
 $reply = "";
 $tz = date_default_timezone_get();
 $fromdate = mktime(0, 0, 0, date("m")-1, "01",   date("Y"));
 $todate = mktime(0, 0, 0, date("m")+3, "01",   date("Y"));
 $fromdate = date("Ymd",$fromdate);
 $todate = date("Ymd",$todate);
 $qry = "select 
         'cas'||lpad(trim(opdaadmn),8,'+') eventuid
        ,opsedate evntdate
        ,opdaexps evntstim
        ,trim(opdaexpd) evntedur
        ,initcap(p.ptitl)|| ' ' || substr(initcap(p.pgname),1,1) || ' ' || initcap(p.psname)  ||
         ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' evntnam1
        ,'Session - '||nvl(trim(opcldesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam2
        ,'Location - ' || oprmdesc evntnam3
        ,'Anaesthetist - '||initcap(a.dsname) || ', ' || initcap(a.dgname) || ', ' || a.dtitl evntnam4
        , initcap(opdades1) evntnam5
        ,'Anaesthetic - '||(select tdesc from patcodes where tcode='OA' and acode=opdaanae) anaetype
        ,a.ptdoseml
        ,a.dtitl || ' ' || substr(initcap(a.dgname),1,1) || ' ' || initcap(a.dsname) 
        ,s.ptdoseml
        ,s.dtitl || ' ' || substr(initcap(s.dgname),1,1) || ' ' || initcap(s.dsname) 
      from oprdetaf
      join oprsesaf on opsedate=opdadate and opsetime=opdatime and opseclin=opdaclin
      join patma1af p on p.purno=opdaurno
      left join patmi1af mi1 on mi1.daadmno=opdaadmn
      left join pmspx2af px2 on px2.pmpxurno=opdaurno
      left join oprcliaf on opclclin=opdaclin
      left join opropraf on oprmroom=opsethet
      left join patdo1af s on s.dcode=opdaclin
      left join patdo1af a on a.dcode=opseanae
      where opdadate > '".$fromdate."'
      and   opdadate < '".$todate."'
      and   opsestat>0
      and   opsethet = :opsethet ";
 $reply .= "BEGIN:VCALENDAR\n";
 $reply .= "VERSION:2.0\n";
 $reply .= "PRODID:-//iSOFT LIMITED//NONSGML webPAS//EN\n";
 $reply .= "X-WR-CALNAME;VALUE=TEXT:Theatre ".$opsethet."\n";
# $reply .= "X-PUBLISHED-TTL:PT00H30M00S\n";
 $stmt = oci_parse($conn,$qry) or die('cant parse query');
 oci_bind_by_name($stmt, ':opsethet', $opsethet );
  if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        date_default_timezone_set($tz);
        $dtstart= strtotime($row[1]." ".$row[2].":00");
        $duration = "PT00H".$row[3]."M00S";
        date_default_timezone_set("UTC");
        $dtstart= date("Ymd\THis\Z", $dtstart);
        $reply .= "BEGIN:VEVENT\n";
        $reply .= "UID:".$row[0]."@test.com\n";
        $reply .= "DTSTAMP:".$dtstart."\n";
        $reply .= "DTSTART:".$dtstart."\n";
        $reply .= "DURATION:".$duration."\n";
        $reply .= "SUMMARY:".$row[4]."\n";
        $reply .= "LOCATION:".$row[8]."\n";
        $reply .= "ORGANIZER;CN=".$row[13].":MAILTO:".$row[12]."\n"; 
        $reply .= "ATTENDEE;ATTSTAT=ACCEPTED;TYPE=REQ-PARTICIPANT;CN=".$row[11].":MAILTO:".$row[10]."\n"; 
        $reply .= "ATTENDEE;ATTSTAT=ACCEPTED;TYPE=REQ-PARTICIPANT;CN=".$row[13].":MAILTO:".$row[12]."\n"; 
        $reply .= "DESCRIPTION:".$row[5]."\\n".$row[6]."\\n".$row[7]."\\n".$row[9]."\\n";
        $reply .= "\\nLink\\nhttps://webpasdemo.healthhost.net/v9.12/cgi-bin/icalview.php?linkstr=".$row[0]."\n";
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
