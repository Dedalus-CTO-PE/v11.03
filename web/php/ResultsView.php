<?php
/*
.----------------------------------------------------------------------
. Program       : ResultsView.php
.
. Function      : AJAX Result Statistics for Dashboard Components
.
. Modifications :
. V10.07.01 08.01.2016 B.G.Ackland
.           Trim ED Site Code 
. V10.06.01 15.09.2016 B.G.Ackland
.           Remove traling comma in Result JSON set
. V10.05.00 08.10.2014 B.G.Ackland
.           New
.
.----------------------------------------------------------------------
PRGID     INIT      "ResultsView.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Clinical Results AJAX Statistics"
.----------------------------------------------------------------------
*/
//
 require "setup.php";
 $secureid = (isset($_SERVER["REMOTE_USER"])) ? $_SERVER["REMOTE_USER"] : null;
 if ($secureid==null) { echo "ERROR:  Invalid Security"; exit(); }
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $template = (isset($_REQUEST["template"])) ? $_REQUEST["template"] : null;
 $sitecode = (isset($_REQUEST["sitecode"])) ? trim($_REQUEST["sitecode"]) : null;
 $agehours = (isset($_REQUEST["agehours"])) ? $_REQUEST["agehours"] : 12;
 $norecord = (isset($_REQUEST["norecord"])) ? $_REQUEST["norecord"] : 20;
 $marked = (isset($_REQUEST["marked"])) ? $_REQUEST["marked"] : '0';
 $fname = (isset($_REQUEST["fname"])) ? $_REQUEST["fname"] : null;
 $aname = (isset($_REQUEST["aname"])) ? $_REQUEST["aname"] : 'resultArray';
 switch($reportno) {
  case 1: // Emergency Department Results Statistics
    header("Content-type: application/javascript"); 
    $YYYY=date('Y');
    $qry = "SELECT relndss, hlcodes, relnmsn, count(*) FROM reln$YYYY 
            left join hl7codaf on hlcotid='0074' and hlcocod=relndss
            WHERE relnlty='09' and relnrst in ('F','C')
            AND relnlky=:sitecode
            AND relnrdt||relnrtm>=to_char(SYSDATE-:agehours/24,'YYYYMMDDHH:MI')
            group by relndss, hlcodes, relnmsn
            order by relndss, hlcodes, relnmsn
          ";
    $stmt = oci_parse($conn,$qry) or die('cant parse query');
    oci_bind_by_name($stmt, ':sitecode', $sitecode );
    oci_bind_by_name($stmt, ':agehours', $agehours );
    if (!oci_execute($stmt)) {echo "ERROR:".oci_error($stmt);exit();}
    $reply = "";
    if ($fname!=null) $reply .= "function $fname() {\n";
    while ($row  = oci_fetch_row($stmt)) {
      $reply .= $aname."[".$aname.".length\]= ['$row[0]','$row[1]','$row[2]','$row[3]']; \n";
    }
    if ($fname!=null) $reply .= "}\n";
    echo $reply;
    break;
  case 2: // Emergency Department Recent Results JSON Output
    header("Content-type: application/javascript"); 
    $YYYY=date('Y');
    $qry = "SELECT * FROM 
           (SELECT relnrdt, relnrtm, psname, pgname, hlcodes, 
                   rectdes, relnnor, relnrst,relndss, purno,
                   demviadm
            FROM reln$YYYY 
            join patma1af on purno=relnpid
            join emrvisaf on emviurno=purno and demvista in ('1','2') 
            left join hl7codaf on hlcotid='0074' and hlcocod=relndss
            left join resctaaf on rectlab=relnlab and rectseg='OBR' and rectfld='04'  
                              and rectsys=relnucs and rectcod=relnusc
            WHERE relnlty='09' and relnrst in ('F','C')
            AND   relnlky=:sitecode ";
    if ($marked=='0') { $qry.= " AND   relnmsn='0'"; }
    $qry.= " AND   relnrdt||relnrtm>=to_char(SYSDATE-:agehours/24,'YYYYMMDDHH:MI')
             order by relnrdt||relnrtm desc)
             WHERE ROWNUM <= :norecord
          ";
    $stmt = oci_parse($conn,$qry) or die('cant parse query');
    oci_bind_by_name($stmt, ':sitecode', $sitecode );
    oci_bind_by_name($stmt, ':agehours', $agehours );
    oci_bind_by_name($stmt, ':norecord', $norecord );
    if (!oci_execute($stmt)) {echo "ERROR:".oci_error($stmt);exit();}
    $rowCount=0;
    $reply = "[";
    while ($row  = oci_fetch_row($stmt)) {
        if ($rowCount>0) { $reply .= ","; }
        $reply .= "{\"date\":\"$row[0]\",";
        $reply .= "\"time\":\"$row[1]\",";
        $reply .= "\"surname\":\"$row[2]\",";
        $reply .= "\"given\":\"$row[3]\",";
        $reply .= "\"service\":\"$row[4]\",";
        $reply .= "\"test\":\"$row[5]\",";
        $reply .= "\"normal\":\"$row[6]\",";
        $reply .= "\"status\":\"$row[7]\",";
        $reply .= "\"code\":\"$row[8]\",";
        $reply .= "\"urnumber\":\"$row[9]\",";
        $reply .= "\"admissno\":\"$row[10]\"}\n";
        $rowCount++;
    }
    $reply .= "]";
    echo $reply;
    break;
  default:
    echo 'ERROR: Invalid Option.';
    break;
 }
 oci_close($conn); 
?>
