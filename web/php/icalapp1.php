<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalapp1.php
.
. Function      : ICS Calendar Subscription
.
. Modifications :
. V10.06.01 03.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.----------------------------------------------------------------------
PRGID     INIT      "icalapp1.php"
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
 $fromdate = mktime(0, 0, 0, date("m")-1, "01",   date("Y"));
 $todate = mktime(0, 0, 0, date("m")+1, "01",   date("Y"));
 $fromdate = date("Ymd",$fromdate);
 $todate = date("Ymd",$todate);
 $reply .= "BEGIN:VCALENDAR\n";
 $reply .= "VERSION:2.0\n";
 $reply .= "PRODID:-//iSOFT LIMITED//NONSGML webPAS//EN\n";
 $reply .= "X-WR-CALNAME;VALUE=TEXT:Melbourne Clinic List\n";
# $reply .= "X-PUBLISHED-TTL:PT00H30M00S\n";
 $qry = "select
        'out'||rpad(osesite,6,'+')||rpad(oseclin,6,'+')||osedate||osestrt eventuid
        ,osedate evntdate
        ,omastart evntstim
        ,omaend evntetim
        ,'Clinic - '||nvl(trim(ocadesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam1
        ,'Location - '|| (select tdesc from patcodes where tcode='CT' and acode=otmaltyp) evntnam2
        ,'Comments - '|| omacom1  evntnam3
        ,'Type     - '|| (select octdesc from outctyaf where octsite=omasite and octctyp=omatyp) evntnam4
        ,'Patients - '|| oseslotb evntcnt 
        ,' '
        ,' '
        ,' '
        ,' '
      from outsesaf
      left join outma1af on omasite=osesite and omaclin=oseclin and domaday=doseday  and omastart=osestrt
      left join outcliaf on ocasite=osesite and ocaclin=oseclin
      left join patdo1af s on s.dcode=oseclin
                           or s.dcode=ocadoct
                           or s.dcode=ocaccons
      where osedate > '$fromdate'
      and   osedate < '$todate'
      and ( ocadoct=(select wbsedoc from websecaf where wbselogn='$secureid')
            or ocaccons=(select wbsedoc from websecaf where wbselogn='$secureid')
            or oseclin=(select wbsedoc from websecaf where wbselogn='$secureid'))";

 $stmt = oci_parse($conn,$qry) or die('cant parse query');
 if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        date_default_timezone_set($tz);
        $dtstart= strtotime($row[1]." ".$row[2].":00");
        $dtend  = strtotime($row[1]." ".$row[3].":00");
        date_default_timezone_set("UTC");
        $dtstart= date("Ymd\THis\Z", $dtstart);
        $dtend  = date("Ymd\THis\Z", $dtend);
        $reply .="BEGIN:VEVENT\n";
        $reply .= "UID:".$row[0]."@test.com\n";
        $reply .= "DTSTAMP:".$dtstart."\n";
        $reply .= "DTSTART:".$dtstart."\n";
        $reply .= "DTEND:".$dtend."\n";
        $reply .= "LOCATION:".$row[5]."\n";
        $reply .= "ORGANIZER;CN=Outpatient Office:MAILTO:outpatient@elthamhospital.com\n";
        $reply .= "SUMMARY:Clinic Eltham\n";
        $reply .= "DESCRIPTION;ALTREP=\"http://www.google.com\":".$row[4]."\\n".$row[6]."\\n".$row[7]."\\n".$row[8]."\\n";
        $reply .= "\\nPlease email or call the booking office for any changes or updates.\\n";
        $reply .= "\\nFollow Link to View Details\\nhttps://webpasdemo.healthhost.net/v9.12/cgi-bin/icalview.php?linkstr=".$row[0]."\n";
        $reply .= "URL;VALUE=URI:https://webpasdemo.healthhost.net/v9.12/cgi-bin/icalview.php?linkstr=".$row[0]."\n";
        $reply .= "BEGIN:VALARM\n";
        $reply .= "ACTION:DISPLAY\n";
        $reply .= "DESCRIPTION:REMINDER\n";
        $reply .= "TRIGGER;RELATED=START:-PT00H30M00S\n";
        $reply .= "END:VALARM\n";
        $reply .= "END:VEVENT\n";
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
 $qry = "select
        'slt'||rpad(trim(obasite),6,'+')||rpad(trim(obaclin),6,'+')||obadate||lpad(trim(dobaslot),3,'+') eventuid
        ,obadate evntdate
        ,obatime evntstim
        ,omadurn evntdurn
        ,initcap(p.ptitl)|| ' ' || substr(initcap(p.pgname),1,1) || ' ' || initcap(p.psname)  ||
         ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' evntnam1
        ,'Clinic - '||nvl(trim(ocadesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam2
        ,'Location - '|| (select tdesc from patcodes where tcode='CT' and acode=otmaltyp) evntnam3
        ,'Comments - '|| omacom1  evntnam4
        ,'Type     - '|| (select octdesc from outctyaf where octsite=omasite and octctyp=omatyp) evntnam5
        ,' ' ,' ' ,' ' ,' '
        ,'out'||rpad(osesite,6,'+')||rpad(oseclin,6,'+')||osedate||osestrt relateduid
      from outbokaf
      left join outsesaf on osesite=obasite and oseclin=obaclin and osedate=obadate  and osestrt=obastrt
      left join outma1af on omasite=osesite and omaclin=oseclin and domaday=doseday  and omastart=osestrt
      left join outcliaf on ocasite=osesite and ocaclin=oseclin
      left join patdo1af s on s.dcode=oseclin
                           or s.dcode=ocadoct
                           or s.dcode=ocaccons
      join patma1af p on p.purno=obaurno
      left join patmi1af mi1 on mi1.daadmno=dobaoutn
      left join pmspx2af px2 on px2.pmpxurno=obaurno
      where obadate > '$fromdate'
      and   obadate < '$todate'
      and   dobastat not in ('3','7')
      and ( ocadoct=(select wbsedoc from websecaf where wbselogn='$secureid')
            or ocaccons=(select wbsedoc from websecaf where wbselogn='$secureid')
            or oseclin=(select wbsedoc from websecaf where wbselogn='$secureid'))";

  $stmt = oci_parse($conn,$qry) or die('cant parse query');
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
        $reply .= "RELATED-TO:".$row[13]."@test.com\n";
        $reply .= "DTSTAMP:".$dtstart."\n";
        $reply .= "DTSTART:".$dtstart."\n";
        $reply .= "DURATION:".$duration."\n";
        $reply .= "SUMMARY:".$row[4]."\n";
        $reply .= "LOCATION:".$row[8]."\n";
        $reply .= "ORGANIZER;CN=Outpatient Booking Office:MAILTO:outpatient@elthamhospital.com\n";
        $reply .= "DESCRIPTION:".$row[5]."\\n".$row[6]."\\n".$row[7]."\\n".$row[9]."\\n";
        $reply .= "\\nPlease email or call the booking office for any changes or updates.\\n";
        $reply .= "\\nFollow link to view details.\\nhttps://webpasdemo.healthhost.net/v9.12/cgi-bin/icalview.php?linkstr=".$row[0]."\n";
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
