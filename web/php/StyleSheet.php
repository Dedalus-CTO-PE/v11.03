<?php
/*
.----------------------------------------------------------------------
. Program       : StyleSheet.php
.
. Function      : Return Site Configured Style Sheet
.
. Modifications :
. V10.05.01 08.08.2014 B.G.Ackland CAR 300303
.           General Utility to return and save CSS configuration by Page
. V10.05.00 17.07.2014 B.G.Ackland
.           New
.
.----------------------------------------------------------------------
PRGID     INIT      "StyleSheet.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Site Defined Dynamic Style Sheet"
.----------------------------------------------------------------------
*/
//
 require "setup.php";
 $secureid = (isset($_SERVER["REMOTE_USER"])) ? $_SERVER["REMOTE_USER"] : null;
 if ($secureid==null) { echo "ERROR:  Invalid Security"; exit(); }
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $pagekey  = (isset($_REQUEST["pagekey"]))  ? $_REQUEST["pagekey"] : null;
 $classkey = (isset($_REQUEST["classkey"])) ? $_REQUEST["classkey"] : null;
 $classval = (isset($_REQUEST["classval"])) ? $_REQUEST["classval"] : null;
 switch($reportno) {
  case 1: // return a Style Sheet Content for teh Page Key
    header("Content-type: text/css");
    $qry = 'SELECT wbpccls, wbpcval FROM webpclaf WHERE wbpcpag=:pagekey';
    $stmt = oci_parse($conn,$qry) or die('cant parse query');
    oci_bind_by_name($stmt, ':pagekey', $pagekey );
    if (!oci_execute($stmt)) {echo "ERROR:".oci_error($stmt);exit();}
    $reply = "";
    while ($row  = oci_fetch_row($stmt)) {
      $classnam=$row[0];
      $classval=$row[1];
      $reply .= ".$classnam { $classval }\n";
    }
    echo $reply;
    break;
  case 2: // insert/update class for a page
    $qry = 'SELECT wbpccls, wbpcval FROM webpclaf WHERE wbpcpag=:pagekey AND wbpccls=:classkey';
    $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':pagekey',  $pagekey);
    oci_bind_by_name($rs, ':classkey', $classkey);
    if (!oci_execute($rs)) {echo "ERROR:".oci_error($rs);exit();}
    oci_fetch($rs);
    if (oci_num_rows($rs)==0) {
      if ($classval=="") {  echo 'UPDATED';exit(); }
      $qry="INSERT INTO webpclaf
            ( wbpcpag, wbpccls, wbpcval, 
              wbpccby, wbpccdt, wbpcctm,
              wbpcuby, wbpcudt, wbpcutm, wbpcspa )
            Values (:pagekey,:classkey,:classval,
                    :secureid, to_char(sysdate,'YYYYMMDD'), to_char(sysdate,'HH24:MI'),
                    :secureid, to_char(sysdate,'YYYYMMDD'), to_char(sysdate,'HH24:MI'),' ')";
        $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
        oci_bind_by_name($rs, ':pagekey',  $pagekey);
        oci_bind_by_name($rs, ':classkey', $classkey);
        oci_bind_by_name($rs, ':classval', $classval);
        oci_bind_by_name($rs, ':secureid', $secureid);
    } else {
      if ($classval=="") {
        $qry="DELETE from webpclaf 
              WHERE wbpcpag=:pagekey
              AND   wbpccls=:classkey";
        $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
        oci_bind_by_name($rs, ':pagekey',  $pagekey);
        oci_bind_by_name($rs, ':classkey', $classkey);
      } else {
        $qry="UPDATE webpclaf SET
                wbpcval = :classval,
                wbpcuby = :secureid, 
                wbpcudt = to_char(sysdate,'YYYYMMDD'), 
                wbpcutm = to_char(sysdate,'HH24:MI')
              WHERE wbpcpag=:pagekey
              AND   wbpccls=:classkey";
        $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
        oci_bind_by_name($rs, ':pagekey',  $pagekey);
        oci_bind_by_name($rs, ':classkey', $classkey);
        oci_bind_by_name($rs, ':classval', $classval);
        oci_bind_by_name($rs, ':secureid', $secureid);
     }
    }
    if (!oci_execute($rs)) {echo "ERROR:".oci_error($rs);exit();}
    echo 'UPDATED';
    break;
  default:
    echo 'ERROR: Invalid Option.';
    break;
 }
 oci_close($conn); 
?>
