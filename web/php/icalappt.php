<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalappt.php
.
. Function      : ICS Calendar Subscription
.
. Modifications :
. V10.06.01 03.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.----------------------------------------------------------------------
PRGID     INIT      "icalappt.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Calendar Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $session_past_mth   = $ini['clinic_session_past_mth'];
 $session_future_mth = $ini['clinic_session_future_mth'];
 $summary_name       = $ini['clinic_summary_name'];
 $calendar_name      = $ini['clinic_appt_calendar_name'];
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
        'slt'||rpad(trim(boa.obasite),6,'+')||
               rpad(trim(boa.obaclin),6,'+')||
               boa.obadate||
               lpad(trim(boa.dobaslot),3,'+') eventuid
        ,boa.obadate evntdate
        ,boa.obatime evntstim
        ,omadurn evntdurn
        ,initcap(p.ptitl)||
          ' ' || substr(initcap(p.pgname),1,1) ||
          ' ' || initcap(p.psname)  ||
          ' (' || p.psage || 'y , ' || p.psex || ', ' ||
         trim(p.purno) ||')' evntnam1
        ,'Clinic - '||nvl(trim(ocadesc),initcap(s.dsname)||
           ', '|| substr(s.dgname,1,1)) evntnam2
        ,'Location - '|| 
           (select tdesc from patcodes 
            where tcode='CT' and acode=otmaltyp) evntnam3
        ,'Presenting Complaint - '|| vx1.pmvxudf1  evntnam4
        ,'Clinic Type - '|| 
           (select octdesc from outctyaf 
            where octsite=omasite and octctyp=omatyp) evntnam5
        ,opdidesc
        ,opdides2
        ,opdides3
        ,opdides4
        ,'out'||rpad(osesite,6,'+')||
         rpad(oseclin,6,'+')||
         osedate||osestrt relateduid
        ,(select tdesc from patcodes 
         where tcode='CT' and acode=otmaltyp) location
      from outbokaf boa
      left join outsesaf on osesite=boa.obasite  
                         and oseclin=boa.obaclin  
                         and osedate=boa.obadate   
                         and osestrt=boa.obastrt
      left join outma1af on omasite=osesite  
                         and omaclin=oseclin  
                         and domaday=doseday   
                         and omastart=osestrt
      left join outcliaf on ocasite=osesite  
                         and ocaclin=oseclin
      left join patdo1af s on s.dcode=oseclin
                           or s.dcode=ocadoct
                           or s.dcode=ocaccons
      join patma1af p on p.purno=boa.obaurno
      join outbb1af bb1 on bb1.dobaoutn=boa.dobaoutn
      left join pmspx2af px2 on px2.pmpxurno=boa.obaurno
      left join outdiagf dia on dia.dopdiout=boa.dobaoutn
      left join pmsvx1af vx1 on vx1.pmvxvisn=boa.dobaoutn
      where boa.obadate > '$fromdate'
      and   boa.obadate < '$todate'
      and   boa.dobastat not in ('3','7')
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
        $duration = "PT00H".$row[3]."M00S";
        date_default_timezone_set("UTC");
        $dtstart= date("Ymd\THis\Z", $dtstart);
        $reply .= "\nBEGIN:VEVENT";
        $reply .= "\nUID:".$row[0]."@$hostname";
        $reply .= "\nRELATED-TO:".$row[13]."@".$ini['diary_hostname'];
        $reply .= "\nDTSTAMP:".$dtstart;
        $reply .= "\nDTSTART:".$dtstart;
        $reply .= "\nDURATION:".$duration;
        $reply .= "\nSUMMARY:".$row[4];
        $reply .= "\nLOCATION:".$row[14];
        $reply .= "\nORGANIZER;CN=$organiser_name";
        $reply .= "\n :MAILTO:$organiser_email";
        $reply .= "\nDESCRIPTION:".$row[4]."\\n";
        $reply .= "\n ".$row[5]."\\n";
        $reply .= "\n ".$row[6]."\\n";
        $reply .= "\n ".$row[7]."\\n";
        $reply .= "\n ".$row[8]."\\n";
        $diag = trim($row[9]);
        if (!empty($diag)) { 
          $reply .= "\n Diagnosis\\n";
          $reply .= $reply .= "\n ".$diag."\\n"; 
          $diag = trim($row[10]);
          if (!empty($diag)) { $reply .= $reply .= "\n ".$diag."\\n"; }
          $diag = trim($row[11]);
          if (!empty($diag)) { $reply .= $reply .= "\n ".$diag."\\n"; }
          $diag = trim($row[12]);
          if (!empty($diag)) { $reply .= $reply .= "\n ".$diag."\\n"; }
        }
        $reply .= "\n ".$description_line."\\n";
        $reply .= "\n ".$description_link."\\n";
        $reply .= "\n ".$url_href;
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
