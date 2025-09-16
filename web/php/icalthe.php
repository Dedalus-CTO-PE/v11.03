<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalthe.php
.
. Function      : ICS Theatre Calendar Subscription
.
. Modifications :  
. V10.06.01 03.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.----------------------------------------------------------------------
PRGID     INIT      "icalthe.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Theatre Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $session_past_mth   = $ini['theatre_session_past_mth'];
 $session_future_mth = $ini['theatre_session_future_mth'];
 $summary_name       = $ini['theatre_summary_name'];
 $calendar_name      = $ini['theatre_calendar_name'];
 $organiser_name     = $ini['theatre_organiser_name'];
 $organiser_email    = $ini['theatre_organiser_email'];
 $refresh_time       = $ini['theatre_refresh_time'];
 $description_line   = $ini['theatre_description_line'];
 $description_link   = $ini['theatre_description_link'];
 $url_href           = $ini['theatre_url_href'];
 $hostname           = $ini['theatre_hostname'];
 $secureid = $_SERVER['REMOTE_USER'];
 $reply = "";
 $tz = date_default_timezone_get();
 $fromdate = mktime(0, 0, 0, date("m")-$session_past_mth, "01",   date("Y"));
 $todate = mktime(0, 0, 0, date("m")+$session_future_mth, "01",   date("Y"));
 $fromdate = date("Ymd",$fromdate);
 $todate = date("Ymd",$todate);
 $qry = "select
         'opr'||opsedate||opsetime||rpad(opseclin,6,'+') eventuid
        ,opsedate evntdate
        ,opsetime evntstim
        ,opseendt evntetim
        ,'Session - '||nvl(trim(opcldesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam1
        ,'Location - ' || oprmdesc evntnam2
        ,'Anaesthetist - '||initcap(a.dsname) || ', ' || initcap(a.dtitl) || ' ' || initcap(a.dgname) evntnam3
        ,'Speciality - '|| (select tdesc from patcodes where tcode='ST' and acode=opsetype) evntnam4
        ,'Patients - '|| (select count(*) from oprdetaf 
          where opdadate=opsedate and  opdatime=opsetime and  opdaclin=opseclin and  dopdasta<>'3') evntcnt 
        ,a.ptdoseml
        ,initcap(a.dtitl) || ' ' || substr(initcap(a.dgname),1,1) || ' ' || initcap(a.dsname) 
        ,s.ptdoseml
        ,initcap(s.dtitl) || ' ' || substr(initcap(s.dgname),1,1) || ' ' || initcap(s.dsname) 
      from oprsesaf
      left join oprcliaf on opclclin=opseclin
      left join opropraf on oprmroom=opsethet
      left join patdo1af s on s.dcode=opseclin
      left join patdo1af a on a.dcode=opseanae
      where opsedate > '$fromdate'
      and   opsedate < '$todate'
      and ( opcldoct=(select wbsedoc from websecaf where wbselogn='$secureid')
            or opseclin=(select wbsedoc from websecaf where wbselogn='$secureid')
            or opseanae=(select wbsedoc from websecaf where wbselogn='".$secureid."'))";
 $reply .= "BEGIN:VCALENDAR";
 $reply .= "\nVERSION:2.0";
 $reply .= "\nPRODID:-//CSC Healthcare//NONSGML webPAS//EN";
 $reply .= "\nX-WR-CALNAME;VALUE=TEXT:$calendar_name";
 $reply .= "\nX-PUBLISHED-TTL:$refresh_time";
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
        $reply .= "\nBEGIN:VEVENT";
        $reply .= "\nUID:".$row[0]."@$hostname";
        $reply .= "\nDTSTAMP:".$dtstart;
        $reply .= "\nDTSTART:".$dtstart;
        $reply .= "\nDTEND:".$dtend;
        $reply .= "\nLOCATION:".$row[5];
        $reply .= "\nORGANIZER;CN=$organiser_name";
        $reply .= "\n :MAILTO:$organiser_email";
        $reply .= "\nSUMMARY:$summary_name";
        $participant=trim($row[10]);
        $mailto=trim($row[9]);
        if (!empty($participant)) {
          $reply .= "\nATTENDEE;ATTSTAT=ACCEPTED;";
          $reply .= "\n TYPE=REQ-PARTICIPANT;";
          $reply .= "\n CN=".$participant;
          if (!empty($mailto)) {
            $reply .= "\n :MAILTO:".$mailto;
          } else {
            $reply .= "\n :MAILTO:unknown@$hostname";
          }
        }
        $participant=trim($row[12]);
        $mailto=trim($row[11]);
        if (!empty($participant)) {
          $reply .= "\nATTENDEE;ATTSTAT=ACCEPTED;";
          $reply .= "\n TYPE=REQ-PARTICIPANT;";
          $reply .= "\n CN=".$participant;
          if (!empty($mailto)) {
            $reply .= "\n :MAILTO:".$mailto;
          } else {
            $reply .= "\n :MAILTO:unknown@$hostname";
          }
        }
        $reply .= "\nDESCRIPTION:".$row[4]."\\n";
        $reply .= "\n ".$row[6]."\\n";
        $reply .= "\n ".$row[7]."\\n";
        $reply .= "\n ".$row[8]."\\n";
        $reply .= "\n ".$description_line."\\n";
        $reply .= "\n ".$description_link."\\n";
        $reply .= "\n ".$url_href;
        $reply .= "\nBEGIN:VALARM";
        $reply .= "\nACTION:DISPLAY";
        $reply .= "\nDESCRIPTION:REMINDER";
        $reply .= "\nTRIGGER;RELATED=START:-PT00H30M00S";
        $reply .= "\nEND:VALARM";
        $reply .= "\nEND:VEVENT";
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
  $reply .= "\nEND:VCALENDAR\n";
  echo $reply;
  oci_close($conn); 
?>
