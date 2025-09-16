<?php
/*
.----------------------------------------------------------------------
. Program       : Javascript.php
.
. Function      : Return Page Configured Javascript
.
. Modifications :
. V10.05.01 08.08.2014 B.G.Ackland CAR 300303
.           General Utility to return and save CSS configuration by Page
. V10.05.00 17.07.2014 B.G.Ackland
.           New
.
.----------------------------------------------------------------------
PRGID     INIT      "Javascript.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Site Defined Dynamic Javascript"
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
 $fname = (isset($_REQUEST["fname"])) ? $_REQUEST["fname"] : null;
 switch($reportno) {
  case 1: // return a Style Sheet Content for teh Page Key
    header("Content-type: application/javascript"); 
    $qry = 'SELECT wbpjcls, wbpjval FROM webpjvaf WHERE wbpjpag=:pagekey';
    $stmt = oci_parse($conn,$qry) or die('cant parse query');
    oci_bind_by_name($stmt, ':pagekey', $pagekey );
    if (!oci_execute($stmt)) {error_log( "ERROR:".oci_error($stmt));exit();}
    $reply = "";
    if ($fname!=null) $reply .= "function $fname() {\n";
    while ($row  = oci_fetch_row($stmt)) {
      $classnam=$row[0];
      $classval=$row[1];
      $reply .= "$classval /* $classnam */\n";
    }
    if ($fname!=null) $reply .= "}\n";
    echo $reply;
    break;
  case 2: // insert/update class for a page
    $qry = 'SELECT wbpjcls, wbpjval FROM webpjvaf WHERE wbpjpag=:pagekey AND wbpjcls=:classkey';
    $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':pagekey',  $pagekey);
    oci_bind_by_name($rs, ':classkey', $classkey);
    if (!oci_execute($rs)) {error_log("ERROR:".oci_error($rs));exit();}
    oci_fetch($rs);
    if (oci_num_rows($rs)==0) {
      if ($classval=="") {  echo 'UPDATED';exit(); }
      $qry="INSERT INTO webpjvaf
            ( wbpjpag, wbpjcls, wbpjval, 
              wbpjcby, wbpjcdt, wbpjctm,
              wbpjuby, wbpjudt, wbpjutm, wbpjspa )
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
        $qry="DELETE from webpjvaf 
              WHERE wbpjpag=:pagekey
              AND   wbpjcls=:classkey";
        $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
        oci_bind_by_name($rs, ':pagekey',  $pagekey);
        oci_bind_by_name($rs, ':classkey', $classkey);
      } else {
        $qry="UPDATE webpjvaf SET
                wbpjval = :classval,
                wbpjuby = :secureid, 
                wbpjudt = to_char(sysdate,'YYYYMMDD'), 
                wbpjutm = to_char(sysdate,'HH24:MI')
              WHERE wbpjpag=:pagekey
              AND   wbpjcls=:classkey";
        $rs=oci_parse($conn,$qry) or die ("Error Query [".$SQL."]");
        oci_bind_by_name($rs, ':pagekey',  $pagekey);
        oci_bind_by_name($rs, ':classkey', $classkey);
        oci_bind_by_name($rs, ':classval', $classval);
        oci_bind_by_name($rs, ':secureid', $secureid);
     }
    }
    if (!oci_execute($rs)) {error_log("ERROR:".oci_error($rs));exit();}
    echo 'UPDATED';
    break;
  default:
    echo 'ERROR: Invalid Option.';
    break;
 }
 oci_close($conn); 
?>
