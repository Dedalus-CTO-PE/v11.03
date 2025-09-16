<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalcases.php
.
. Function      : ICS Theatre Cases Calendar Subscription
.
. Modifications :
. V10.06.01 03.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.----------------------------------------------------------------------
PRGID     INIT      "icalcases.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Theatre Cases Calendar Subscription"
.----------------------------------------------------------------------
*/
 header('Content-type: text/calendar; charset=utf-8'); 
 header('Content-Disposition: inline; filename="calendar.ics"');
 require "setup.php";
 $cases_past_mth     = $ini['theatre_cases_past_mth'];
 $cases_future_mth   = $ini['theatre_cases_future_mth'];
 $summary_name       = $ini['theatre_summary_name'];
 $calendar_name      = $ini['theatre_case_calendar_name'];
 $organiser_name     = $ini['theatre_organiser_name'];
 $organiser_email    = $ini['theatre_organiser_email'];
 $refresh_time       = $ini['theatre_refresh_time'];
 $description_line   = $ini['theatre_description_line'];
 $description_line   = "Please email or call the theatre booking\n  office for any changes or updates.";
 $description_link   = $ini['theatre_description_link'];
 $url_href           = $ini['theatre_url_href'];
 $hostname           = $ini['theatre_hostname'];
 $secureid = $_SERVER['REMOTE_USER'];
 if (isset($_GET['reportno'])) $rept = $_GET['reportno']; 
 $reply = "";
 $tz = date_default_timezone_get();
 $fromdate = mktime(0, 0, 0, date("m")-$cases_past_mth, "01",   date("Y"));
 $todate = mktime(0, 0, 0, date("m")+$cases_future_mth, "01",   date("Y"));
 $fromdate = date("Ymd",$fromdate);
 $todate = date("Ymd",$todate);
 $qry = "select 
         'unq'||lpad(trim(opdauniq),10,'+') eventuid
        ,opsedate evntdate
        ,opdaexps evntstim
        ,trim(opdaexpd) evntedur
        ,initcap(p.ptitl)|| ' ' || substr(initcap(p.pgname),1,1) || ' ' || initcap(p.psname)  ||
         ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' evntnam1
        ,'Session - '||nvl(trim(opcldesc),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) evntnam2
        ,'Location - ' || oprmdesc evntnam3
        ,'Anaesthetist - '||initcap(a.dsname) || ', ' || initcap(a.dtitl) || ' ' || initcap(a.dgname) evntnam4
        ,'Operation - '||initcap(opdades1) evntnam5
        ,'Anaesthetic - '||(select tdesc from patcodes where tcode='OA' and acode=opdaanae) anaetype
        ,a.ptdoseml
        ,initcap(a.dtitl) || ' ' || substr(initcap(a.dgname),1,1) || ' ' || initcap(a.dsname) 
        ,s.ptdoseml
        ,initcap(s.dtitl) || ' ' || substr(initcap(s.dgname),1,1) || ' ' || initcap(s.dsname) 
        ,oprmdesc Location
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
      and   dopdasta in ('0','1','2','4')
      and   opsestat > 0
      and ( opcldoct=(select wbsedoc from websecaf where wbselogn='".$secureid."')
            or opseclin=(select wbsedoc from websecaf where wbselogn='$secureid')
            or opseanae=(select wbsedoc from websecaf where wbselogn='".$secureid."')
            or opdauniq in (select optsunid
                            from   oprtsmaf
                            where  optsunid=opdauniq
                            and    doptssin in (' 0',' 1',' 3')
                            and    optsscde=(select wbsedoc
                                             from websecaf
                                             where wbselogn='".$secureid."')))";
 $reply .= "BEGIN:VCALENDAR".
           "\nVERSION:2.0".
           "\nPRODID:-//CSC Healthcare//NONSGML webPAS//EN".
           "\nX-WR-CALNAME;VALUE=TEXT:$calendar_name".
           "\nX-PUBLISHED-TTL:$refresh_time";
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
        $reply .= "\nDTSTAMP:".$dtstart;
        $reply .= "\nDTSTART:".$dtstart;
        $reply .= "\nDURATION:".$duration;
        $reply .= "\nSUMMARY:".$row[4];
        $reply .= "\nLOCATION:".$row[14];
        $reply .= "\nORGANIZER;CN=$organiser_name";
        $reply .= "\n :MAILTO:$organiser_email";
        $participant=trim($row[11]);
        $mailto=trim($row[10]);
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
        $participant=trim($row[13]);
        $mailto=trim($row[12]);
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
        $reply .= "\n ".$row[8]."\\n";
        $reply .= "\n ".$row[5]."\\n";
        $reply .= "\n ".$row[6]."\\n";
        $reply .= "\n ".$row[7]."\\n";
        $reply .= "\n ".$row[9]."\\n";
        $reply .= "\n $description_line\\n";
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
