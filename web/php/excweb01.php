<?php
/*
.----------------------------------------------------------------------
. Program       : excweb01.php
.
. Function      : Executive View Web Services
.
. Modifications :
. V10.06.01 04.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
.
.----------------------------------------------------------------------
PRGID     INIT      "excweb01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      " Executive View Web Services"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $wardcode = (isset($_REQUEST["wardcode"])) ? $_REQUEST["wardcode"] : null;
 $stmt=false;
 $reply = "";
 $dl    = "\",\"";
 
switch($reportno) {
/* Consultant Admissions */
 case 1:
 $qry = "select a.adocta doctcode
               ,initcap(d.dsname) || ', ' || initcap(d.dtitl) || ' ' || initcap(d.dgname) doctname
               ,d.ptdomobl
               ,count(*)
         from patmi1af a
         join patdo1af d on d.dcode=a.adocta
         join patwr1af w on w.wward=a.award and w.wbed=' '
         where (a.dastat = '2' or a.dastat = '4')
         and (select wbsehosp from websecaf where wbselogn= :secureid) in (w.ptwdhosn,' ')
         group by initcap(d.dsname) || ', ' || initcap(d.dtitl) || ' ' || initcap(d.dgname),
                  d.ptdomobl,
                  a.adocta
         order by 2";
   $stmt = oci_parse($conn,$qry) or die('cant parse query');
   oci_bind_by_name($stmt, ':secureid', $secureid);
   $reply .= "function AddRows() {";
   break;

/* Ward Current Admissions */
 case 2:
 $qry = "select w.wward wardcode
               ,initcap(w.wbdesc)||' (' ||h.pthssnam||')' wardname
               ,w.wextn
               ,h.pthssnam||w.wbdesc
               ,count(*)
         from patmi1af a
         join patwr1af w on w.wward=a.award and w.wbed=' '
         join pathspaf h on h.pthshosp=w.ptwdhosn
         where (a.dastat = '2' or a.dastat = '4')
         and (select wbsehosp from websecaf where wbselogn= :secureid ) in (h.pthshosp,' ')
         group by w.wward, h.pthssnam, w.wbdesc, w.wextn
         order by 2";
   $stmt = oci_parse($conn,$qry) or die('cant parse query');
   oci_bind_by_name($stmt, ':secureid', $secureid);
   $reply .= "function AddRows() {";
   break;

 }
  if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        $reply .= "t.addRow(\"".$row[0];
        for ($i = 1; $i < $numcols; $i++) {
          $reply .= $dl.str_replace('"','&quot;',$row[$i]);
        }
        $reply .= "\");\n";
      }
    } else {
      #$e = oci_error($stmt);
      #echo $e['message'];
      oci_close($conn); 
      exit();
    }
    $reply .= "}";
    echo $reply;
    oci_close($conn); 
  }
?>
