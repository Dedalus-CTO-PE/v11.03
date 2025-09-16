<?php
/*
.----------------------------------------------------------------------
. Program       : outweb01.php
.
. Function      : Outpatient Web Services
.
. Modifications :
. V10.06.01 04.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
. V10.03.01 22.08.2013 B.G.Ackland
.                      SQl Injection Review
. V10.03.00 22.08.2013 B.G.Ackland
.                      New Mapping Functions
.----------------------------------------------------------------------
PRGID     INIT      "outweb01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Outpatient Web Services"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $frstdate = (isset($_REQUEST["frstdate"])) ? $_REQUEST["frstdate"] : null;
 $lastdate = (isset($_REQUEST["lastdate"])) ? $_REQUEST["lastdate"] : null;
 $urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
 $admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
 $doctcode = (isset($_REQUEST["doctcode"])) ? $_REQUEST["doctcode"] : null;
 $deptcode = (isset($_REQUEST["deptcode"])) ? $_REQUEST["deptcode"] : null;
 $sesskeys = (isset($_REQUEST["sesskeys"])) ? $_REQUEST["sesskeys"] : null;
 $reply = "";
 $dl    = "\",\"";
switch($reportno) {
/* Appointments by Clinician */
 case 1:
   $cfilepre='out';
   $outpsite=substr($sesskeys,0,6);
   $outpclin=substr($sesskeys,6,6);
   $outpdate=substr($sesskeys,12,8);
   $outpstrt=substr($sesskeys,20,5);
   $SQL = "select ostfile from outsitaf 
           where ostsite=(select wbsesit from websecaf where wbselogn=:secureid)";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':secureid', $secureid);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   $row=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
   $cfilepre=$row["OSTFILE"];
   if (trim($cfilepre)=='') $cfilepre='out';
   $qry = "select bk.obaurno urnumber
       ,bk.dobaoutn  admissno
       ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
       ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
       ,trim(p.padd1)||' '||trim(padd2)||' '||trim(psubrb)||' '||trim(padd4)||' '||trim(ppost) address
       ,(select tdesc from patcodes where tcode='CV' and acode=bk.obavisit) visittyp
       ,bk.obatime
       ,ct.octdesc
       ,pmvxudf1
       ,(select tdesc from patcodes where tcode='SA' and acode=bb.otbbspca and acode<>' ') specdesc
       ,RPAD(bk.obasite,6)||RPAD(bk.obaclin,6)||bk.obadate||bk.obastrt||bk.dobaslot
       ,CASE bk.dobastat
          WHEN '1' THEN 'Booked'
          WHEN '4' THEN 'Attended'
          WHEN '5' THEN 'DNA'
          ELSE ' '
        END SlotStatus
       ,bb.otbbcitm
       ,bb.otbbastm
       ,bb.otbbdptm
       ,(select pcline from patcmntf where dpcadmn=bk.dobaoutn and rownum=1) tcomment
       ,di.opdidesc||','||di.opdides2
      from ".$cfilepre."cliaf cl, ".$cfilepre."bokaf bk
      join patma1af p on p.purno = bk.obaurno
      join ".$cfilepre."bb1af bb on bb.dobaoutn=bk.dobaoutn
      join ".$cfilepre."ctyaf ct on ct.octsite=bk.obasite and ct.octctyp=bk.obactyp
      left join ".$cfilepre."diagf di on di.dopdiout= bk.obaurno
      left join pmsvx1af vx on vx.pmvxvisn= bk.dobaoutn
      where bk.obadate = :THISDATE
      and   bk.dobastat in ('1','4')
      and   bk.obasite = cl.ocasite
      and   bk.obaclin = cl.ocaclin
      and  ( 
         (cl.ocadoct = (select wbsedoc from websecaf where wbsedoc<>' ' and wbselogn = :secureid))
      or (cl.ocaclin = (select wbsecli from websecaf where wbsecli<>' ' and wbselogn = :secureid)) )
      and   cl.ocadate = 
         (SELECT MAX(B_ED.ocadate) 
          FROM ".$cfilepre."cliaf B_ED 
          WHERE cl.ocasite = B_ED.ocasite 
          AND cl.ocaclin   = B_ED.ocaclin 
          AND B_ED.ocadate <= bk.obadate) 
      order by bk.obatime 
     ";
  $reply .= "function AddRows() {\n";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':THISDATE', $frstdate);
  oci_bind_by_name($stmt, ':secureid', $secureid);
  break;

 case 2:
   $cfilepre='out';
   $outpsite=substr($sesskeys,0,6);
   $outpclin=substr($sesskeys,6,6);
   $outpdate=substr($sesskeys,12,8);
   $outpstrt=substr($sesskeys,20,5);
   $SQL = "select ostfile from outsitaf 
           where ostsite=(select wbsesit from websecaf where wbselogn=:secureid)";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':secureid', $secureid);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   $row=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
   $cfilepre=$row["OSTFILE"];
   if (trim($cfilepre)=='') $cfilepre='out';
   $qry = "select bk.obadate,count(*)
      from ".$cfilepre."cliaf cl, ".$cfilepre."bokaf bk
      where bk.obadate < :LASTDATE
      and   bk.obadate > :FRSTDATE
      and   bk.dobastat in ('1','4')
      and   bk.obasite = cl.ocasite
      and   bk.obaclin = cl.ocaclin
      and  ( 
         (cl.ocadoct = (select wbsedoc from websecaf where wbsedoc<>' ' and wbselogn = :secureid))
      or (cl.ocaclin = (select wbsecli from websecaf where wbsecli<>' ' and wbselogn = :secureid)) )
      and   cl.ocadate = 
         (SELECT MAX(B_ED.ocadate) 
          FROM ".$cfilepre."cliaf B_ED 
          WHERE cl.ocasite = B_ED.ocasite 
          AND cl.ocaclin   = B_ED.ocaclin 
          AND B_ED.ocadate <= bk.obadate) 
      group by bk.obadate 
      order by bk.obadate 
     ";
  $reply .= "function SelectElements() {\n";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':FRSTDATE', $frstdate);
  oci_bind_by_name($stmt, ':LASTDATE', $lastdate);
  oci_bind_by_name($stmt, ':secureid', $secureid);
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
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
  $reply .= "}\n";
  echo $reply;
  oci_close($conn); 
?>
