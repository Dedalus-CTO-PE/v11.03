<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalclin.php
.
. Function      : ICS Clinic Calendar Subscription
.
. Modifications :
. V10.06.01 03.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.----------------------------------------------------------------------
PRGID     INIT      "icalclin.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Clinic Calendar Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $session_past_mth   = $ini['clinic_session_past_mth'];
 $session_future_mth = $ini['clinic_session_future_mth'];
 $summary_name       = $ini['clinic_summary_name'];
 $calendar_name      = $ini['clinic_calendar_name'];
 $organiser_name     = $ini['clinic_organiser_name'];
 $organiser_email    = $ini['clinic_organiser_email'];
 $refresh_time       = $ini['clinic_refresh_time'];
 $description_line   = $ini['clinic_description_line'];
 $description_link   = $ini['clinic_description_link'];
 $url_href           = $ini['clinic_url_href'];
 $hostname           = $ini['clinic_hostname'];
 $secureid = $_SERVER['REMOTE_USER'];
 $reply = "";
 $tz = date_default_timezone_get();
 $fromdate = mktime(0, 0, 0, date("m")-$session_past_mth, "01",   date("Y"));
 $todate = mktime(0, 0, 0, date("m")+$session_future_mth, "01",   date("Y"));
 $fromdate = date("Ymd",$fromdate);
 $todate = date("Ymd",$todate);
 $qry = "select
        'out'||rpad(osesite,6,'+')||rpad(oseclin,6,'+')||osedate||osestrt eventuid
        ,osedate evntdate
        ,omastart evntstim
        ,omaend evntetim
        ,'Clinic - '||nvl(trim(ocadesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam1
        ,'Location - '|| (select tdesc from patcodes where tcode='CT' and acode=otmaltyp) evntnam2
        ,'Comments - '|| omacom1  evntnam3
        ,(select octdesc from outctyaf where octsite=omasite and octctyp=omatyp) evntnam4
        ,'Patient Bookings - '|| oseslotb evntcnt 
        ,' ' ,' ' ,' ' ,' '
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
        $reply .= "\nSUMMARY:".$row[7];
        $reply .= "\nDESCRIPTION:".$row[4]."\\n";
        $reply .= "\n ".$row[6]."\\n";
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
