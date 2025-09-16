<?php
/*  *****  NOT PRODUCTION READY ******
.----------------------------------------------------------------------
. Program       : icalview.php
.
. Function      : ICS Theatre Calendar Subscription
.
. Modifications :  ltz = Local Time Zone
.----------------------------------------------------------------------
PRGID     INIT      "icalview.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "ICS Theatre Subscription"
.----------------------------------------------------------------------
*/
 $secureid = $_SERVER['REMOTE_USER'];
 if (isset($_GET['linkstr'])) $linkstr = $_GET['linkstr']; 
 $option  = substr($linkstr,0,3);
 $link    = "ABC";
 $link    = substr($linkstr,3);
 $browser = $_SERVER['HTTP_USER_AGENT'];
 $reply = "";
 switch ($option) {
 case "unq":
  $urnumber="";
  $admissno="";
  getTheatrePatient($link,$urnumber,$admissno);
  $reply .= "<head><title>Calendar Event View</title>";
  $reply .= "<meta id='viewport' name='viewport' content='width=device-width' />";
  $reply .= "<link rel='stylesheet' href='../html/public/iCalSummary.css' type='text/css'>";
  $reply .= "</head><body>";
  $reply .= "<iframe name='menu'    id='menu' src='../html/public/iCalSummaryMenu.html' class='MenuiFrame'></iframe>";
  $reply .= "<iframe name='content' id='content'";
  $reply .= " src='patweb98.pbl?reportno=1&template=921&urnumber=$urnumber&admissno=$admissno' ";
  $reply .= " class='ContentiFrame'></iframe></body>";
  break;
 case "opr":
  $reply .= "<head><title>Calendar Event View</title>";
  $reply .= "<link rel='stylesheet' href='../html/public/iCalSummary.css' type='text/css'>";
  $reply .= "</head><body>";
  $reply .= "<iframe name='menu'    id='menu' src='../html/public/iCalSummaryMenu.html' class='MenuiFrame'></iframe>";
  $reply .= "<iframe name='content' id='content'";
  $reply .= " src='oprweb01.pbl?reportno=2&template=6&sesskeys=$link' ";
  $reply .= " class='ContentiFrame'></iframe></body>";
  break;
 case "out":
  $reply .= "<head><title>Calendar Event View</title>";
  $reply .= "<link rel='stylesheet' href='../html/public/iCalSummary.css' type='text/css'>";
  $reply .= "</head><body>";
  $reply .= "<iframe name='menu'    id='menu' src='../html/public/iCalSummaryMenu.html' class='MenuiFrame'></iframe>";
  $reply .= "<iframe name='content' id='content'";
  $reply .= " src='outweb02.pbl?reportno=2&template=4&sesskeys=$link' ";
  $reply .= " class='ContentiFrame'></iframe></body>";
  break;
 }
  echo $reply;

function getTheatrePatient($opdauniq,&$urnumber,&$admissno) {
 $conn = oci_connect('paspub','paspub','PAS') or die('Cant Connect to Oracle');
 $qry = "select opdaurno,opdaadmn from oprdetaf 
         where  opdauniq = '$opdauniq'";
 $stmt = oci_parse($conn,$qry) or die('cant parse query');
 if ($stmt) {
    if (oci_execute($stmt)) { 
      $row  = oci_fetch_row($stmt);
      $urnumber = $row[0];
      $admissno = $row[1];
      return;
    } else {
      $e = oci_error($stmt);
      echo $qry;
      echo $e['message'];
    }
  }
  oci_close($conn);
}
?>
