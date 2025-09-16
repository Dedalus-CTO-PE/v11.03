<?php
/*
.----------------------------------------------------------------------
. Program       : ical.php
.
. Function      : ICS Theatre Calendar Subscription
.
. Modifications :  ltz = Local Time Zone
. V10.06.01 03.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.  V10.04.01 B.G.Ackland  
.            Fixed Parameters for Hospital Access
.----------------------------------------------------------------------
PRGID     INIT      "ical.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Theatre Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reply = "";
 $tz = date_default_timezone_get();
 $past_mth   = $ini['theatre_session_past_mth'];
 $future_mth = $ini['theatre_session_future_mth'];
 $fromdate   = mktime(0, 0, 0, date("m")-$past_mth, "01",   date("Y"));
 $todate     = mktime(0, 0, 0, date("m")+$future_mth, "01",   date("Y"));
 $fromdate   = date("Ymd",$fromdate);
 $todate     = date("Ymd",$todate);
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
      from oprsesaf
      left join oprcliaf on opclclin=opseclin
      left join opropraf on oprmroom=opsethet
      left join patdo1af s on s.dcode=opseclin
      left join patdo1af a on a.dcode=opseanae
      where opsedate > '$fromdate'
      and   opsedate < '$todate'
      and ( opcldoct=(select wbsedoc from websecaf where wbselogn='$secureid')
            or opseclin=(select wbsedoc from websecaf where wbselogn='$secureid'))
union all
select
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
 $reply .= "BEGIN:VCALENDAR\n";
 $reply .= "VERSION:2.0\n";
 $reply .= "PRODID:-//CSC HealthCare//NONSGML webPAS//EN\n";
 $reply .= "X-WR-CALNAME;VALUE=TEXT:".$ini['theatre_calendar_name']."\n";
 $reply .= "X-PUBLISHED-TTL:PT00H30M00S\n";
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
        $reply .="BEGIN:VEVENT\n".
                 "UID:".$row[0]."@".$ini['diary_hostname']."\n".
                 "DTSTAMP:".$dtstart."\n".
                 "DTSTART:".$dtstart."\n".
                 "DTEND:".$dtend."\n".
                 "LOCATION:".$row[5]."\n";
        if (preg_match("/opr/i",$row[0] )) {
          $reply .= "ORGANIZER;CN=".$ini['theatre_organiser_name'].
                    ":MAILTO:".$ini['theatre_organiser_email']."\n".
                    "SUMMARY:".$ini['theatre_summary_name']."\n".
                    "ATTENDEE;ATTSTAT=ACCEPTED;TYPE=REQ-PARTICIPANT;CN=".
                    $row[10].":MAILTO:".$row[9]."\n". 
                    "ATTENDEE;ATTSTAT=ACCEPTED;TYPE=REQ-PARTICIPANT;CN=".
                    $row[12].":MAILTO:".$row[11]."\n"; 
        } else {
          $reply .= "ORGANIZER;CN=".$ini['diary_organiser_name'].
                    ":MAILTO:".$ini['diary_organiser_email']."\n".
                    "SUMMARY:".$ini['diary_summary_name']."\n";
        }
        $reply .= "DESCRIPTION:".$row[4]."\\n".$row[6]."\\n".$row[7]."\\n".$row[8]."\\n".
                  "\\nPlease email or call the booking office for any changes or updates.\\n";
/* $reply .= "\\nFollow Link to View Details\\n".$ini['theatre_url_href'].$row[0]."\n"; 
   $reply .= "URL;VALUE=URI:".$ini['theatre_url_href'].$row[0]."\n"; */
        $reply .= "BEGIN:VALARM\n".
                  "ACTION:DISPLAY\n".
                  "DESCRIPTION:REMINDER\n".
                  "TRIGGER;RELATED=START:-PT00H30M00S\n".
                  "END:VALARM\n".
                  "END:VEVENT\n";
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
