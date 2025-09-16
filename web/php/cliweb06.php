<?php
/*
.----------------------------------------------------------------------
. Program       : cliweb06.php
.
. Function      : Discharge Summary Services
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "cliweb06.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Discharge Summary Services"
.----------------------------------------------------------------------
*/
  require "setup.php";
  $banlist = array("'","\"","|","||"); //basic prevention from sql injection
  $uid = $_SERVER['REMOTE_USER'];
  $qry = "";
  $ICD_version = "7"; //replace this a with current version
  $ICD_standard = "10"; //replace this a with current version
  $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
  $urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
  $admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
  $notetype = (isset($_REQUEST["notetype"])) ? $_REQUEST["notetype"] : null;
  $drugcode = (isset($_REQUEST["drugcode"])) ? $_REQUEST["drugcode"] : null;
  $search = (isset($_REQUEST["search"])) ? $_REQUEST["search"] : null;
  switch($reportno) {
    case 1:
      $qry = "SELECT mcharge, mdesc FROM patmchgf 
              WHERE upper(mdesc) LIKE upper(:search||'%') AND ROWNUM <= 10"; 
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      oci_bind_by_name($stmt, ':search', $search);
      getJSON($stmt,$conn);
      break;
    case 2:
      $qry = "SELECT mcharge, mdesc FROM patmchgf  
              WHERE upper(mdesc) LIKE upper(:search||'%')";
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      oci_bind_by_name($stmt, ':search', $search);
      getJSON($stmt,$conn);
      break;
    case 3:
      $qry = "SELECT mcharge, mdesc FROM patmchgf";
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      getJSON($stmt,$conn);
      break;
    case 4:
      $qry = "SELECT obmecntr, obmedrug, obmedosf, obmedose, obmefreq,"
             ." obmedura, obmequan, obmeinst, obmemcod, obmereas, obmechgd,"
             ." obmechgr, obmenote  FROM obsmedaf WHERE obmevisn = :admissno ";
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      oci_bind_by_name($stmt, ':admissno', $admissno);
      getMedication($stmt,$conn);
      break;
    case 5:
      $qry = "SELECT count(*) FROM obscnaaf WHERE obcavis = :admissno "
            ." AND obcatyp = :notetype ";
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      oci_bind_by_name($stmt, ':admissno', $admissno);
      oci_bind_by_name($stmt, ':notetype', $notetype);
      doesNoteTypeExist($stmt,$conn);       
      break;
    case 6:
      $qry = "SELECT opcode, odesc FROM pat{$ICD_standard}o{$ICD_version}f 
              WHERE odesc LIKE upper(:search||'%') AND ROWNUM <= 10";
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      oci_bind_by_name($stmt, ':search', $search);
      getJSON($stmt,$conn);
      break;
    case 7:
      $qry = "SELECT dpcode, ddesc FROM pat{$ICD_standard}d{$ICD_version}f 
              WHERE ddesc LIKE upper(:search||'%') AND ROWNUM <= 10";
      $stmt = oci_parse($conn,$qry) or die('cant parse query');
      oci_bind_by_name($stmt, ':search', $search);
      getJSON($stmt,$conn);
      break;
    default:
      oci_close($conn);
      break;
  }

  function doesNoteTypeExist($stmt,$conn) {
    if ($stmt) {
      if ( oci_execute($stmt) ) {
        $row = oci_fetch_row($stmt); 
        echo $row[0];       
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
    oci_close($conn);
  }

  function getJSON($stmt,$conn) {
    $reply = "";
    $i = 0;
    if ($stmt) {
      if ( oci_execute($stmt) ) {
        $reply .= "[";
        while ($row = oci_fetch_row($stmt)) {
          $code = (string)str_replace(array("'", "\""), '', $row[0]);
          $name = (string)str_replace(array("'", "\""), '', $row[1]);
          $reply .= "{\"code\":\"".$code."\","
                   ." \"name\":\"".$name."\"},";
          $i++;
        }
        if ($i > 0 ) {
          $reply = substr_replace($reply,"",-1);
          $reply .= "]";
        } else {
	         $reply = "";
          oci_close($conn);
          return;
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $reply;
    oci_close($conn);
 }

 function getMedication($stmt,$conn) {
    $reply = "";
    $i = 0;
    if ($stmt) {
      if ( oci_execute($stmt) ) {
        $reply .= "[";
        while ($row = oci_fetch_row($stmt)) {
         $cntr = (string)str_replace(array("'", "\""), '', $row[0]);
         $drug_dscription = (string)str_replace(array("'", "\""), '', $row[1]);
         $dosf = (string)str_replace(array("'", "\""), '', $row[2]);
         $dose = (string)str_replace(array("'", "\""), '', $row[3]);
         $freq = (string)str_replace(array("'", "\""), '', $row[4]);
         $dura = (string)str_replace(array("'", "\""), '', $row[5]);
         $quan = (string)str_replace(array("'", "\""), '', $row[6]);
         $inst = (string)str_replace(array("'", "\""), '', $row[7]);
         $drug_code = (string)str_replace(array("'", "\""), '', $row[8]);
         $reas = (string)str_replace(array("'", "\""), '', $row[9]);
         $chgd = (string)str_replace(array("'", "\""), '', $row[10]);
         $chgr = (string)str_replace(array("'", "\""), '', $row[11]);
         $note = (string)str_replace(array("'", "\""), '', $row[12]);
         $reply .= "{\"cntr\":\"".$cntr."\","
                   ."\"mcode\":\"".$drug_code."\","
                   ."\"drugs\":\"".$drug_dscription."\","
                   ."\"dosef\":\"".$dosf."\","
                   ."\"dosea\":\"".$dose."\","
                   ."\"frequ\":\"".$freq."\","
                   ."\"durat\":\"".$dura."\","
                   ."\"quant\":\"".$quan."\","
                   ."\"instr\":\"".$inst."\"},";
         $i++;
        }
        if ($i > 0 ) {
          $reply = substr_replace($reply,"",-1);
          $reply .= "]";
        } else {
          $reply = "";
          oci_close($conn);
          return;
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $reply;
    oci_close($conn);
 }
?>
