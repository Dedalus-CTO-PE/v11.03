<?php
/*
.----------------------------------------------------------------------
. Program       : patweb02.php
.
. Function      : Favourite Patient Lists Web Service
.
. Modifications :
. V10.03.04  29/10/2013  B.G.Ackland
.                        Changes to use bind in SQL to aviod SQL Injection
. V10.03.03  18.08.2013  B.G.Ackland CAR
.                        Revised Current Inpatients to mean Currently in Hospital
.                        ie Include Current Emergency Visits.
. V10.03.03  07.08.2013  B.G.Ackland CAR
.                        Change Delimited to have " so that ' in names 
.                        does not break the list
. V10.03.01  21.07.2013  B.G.Ackland CAR
.                        Fix Inpatient Favourite Delete
.                        Add Consultant as a new Column
. V10.03.00  13/04/2012  Version change
.----------------------------------------------------------------------
PRGID     INIT      "patweb02.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Favourite Patient Lists"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $webpd002 = (isset($_REQUEST["webpd002"])) ? $_REQUEST["webpd002"] : null;
 $reply = '';
 $dl    = '","';
switch($reportno)
{
/* Favorite Current Inpatients */
 case 1:
/* Set visit to blank if discharged inpatient or emergency visit */
  $qry = "update webpataf set wbptvnum=' '
          where wbptwuid = :secureid and   wbptlnum = '999'
          and nvl((select dastat from patmi1af where daadmno=wbptvnum),'1') in ('3', '5')
         ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  if ($stmt) oci_execute($stmt) ;
  $qry = "update webpataf set wbptvnum=' '
          where wbptwuid = :secureid and   wbptlnum = '999'
          and nvl((select demvista from emrvisaf where demviadm=wbptvnum),'1') in ('2','3','4')
         ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  if ($stmt) oci_execute($stmt) ;

/* Set visit to current inptaient visit if available */
  $qry = "update webpataf 
          set wbptvnum=nvl((select daadmno from patmi1af where aurno=wbpturno and dastat ='2'),' ')
          where wbptwuid = :secureid
          and   wbptlnum = '999'
          and   nvl(wbptvnum,' ') = ' '
         ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  if ($stmt) oci_execute($stmt) ;

/* Set visit to current emergency visit if available */
  $qry = "update webpataf 
          set wbptvnum=nvl((select demviadm from emrvisaf where emviurno=wbpturno and demvista = '1'),' ')
          where wbptwuid = :secureid
          and   wbptlnum = '999'
          and   nvl(wbptvnum,' ') = ' '
         ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  if ($stmt) oci_execute($stmt) ;

/* Delete any remaining patients that do not have a visit no */
  $qry = "delete from webpataf where wbptwuid = :secureid
          and   wbptlnum = '999'
          and    nvl(wbptvnum,' ') = ' '";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  if ($stmt) oci_execute($stmt) ;

  $qry = "select distinct p.purno urnumber
        ,wbptvnum  admissno
        ,pcease||pcase||ptmxsin1||ptmxsin2||ptmxsin3||ptmxsin4||ptmxsin5 ind
        ,'<b>'||p.psname || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
         ' ( ' || floor(round(sysdate-to_date(p.pbdate,'YYYYMMDD'))/365)
         || 'y ,' || p.psex || ',' || p.purno ||')' patfname
        ,case 
           when nvl(emg.emvilocn,' ')<>' ' 
              then 'Emergency/ '||(select emlodesc from emrlocaf where emloloca=emg.emvilocn)
           when nvl(mi1.award,' ')<>' ' 
              then trim(mi1.award)||'/'|| trim(mi1.abed)
           else ' '
         end Location
        ,trim(mi1.adate) || trim(mi1.atime)
        ,p.psex
        ,floor(round(sysdate-to_date(p.pbdate,'YYYYMMDD'))/365)||'y'
        ,case 
           when nvl(emg.emvilocn,' ')<>' ' 
              then trim(emg.emvicom1) || ' ' || trim(emg.emvicom2)
           when nvl(mi1.award,' ')<>' ' 
              then trim(mi1.adiag1) || ' ' || trim(mi1.adiag2)
           else ' '
         end Diagnosis
        ,(select tdesc from patcodes where tcode='AC' and acode=mi1.aclssft) unitdesc
        ,case
         when nvl(pmwoedat,' ')=' ' then ' '
         else to_char(to_date(pmwoedat,'yyyymmdd'),'DD MON YYYY')
         end expdate
        ,(select tdesc from patcodes where tcode='CL' and acode=mi1.aclaim) clamdesc
        ,ptmxsin1
        ,(select tdesc from patcodes where tcode='A ' and acode=mi1.atype) atypdesc
        ,nvl((select replace(tcindc1,' ','0') from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
         nvl((select replace(tcindc1,' ','0') from patcodes where tcode='T' and acode=p.ptype),'0')||
         nvl((select replace(tcindc1,' ','0') from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
        ,' ' tba1
        ,' ' tba2
        ,initcap(a.dsname) || ', ' || initcap(a.dtitl) || ' ' || initcap(a.dgname) doctname
      from webpataf
      join patma1af p        on p.purno=wbpturno
      left join pmsworaf     on pmwoadmn=wbptvnum
      left join patmi1af mi1 on mi1.daadmno=wbptvnum and mi1.dastat='2'
      left join emrvisaf emg on emg.demviadm=wbptvnum and emg.demvista='1'
      left join patdo1af a   on a.dcode=mi1.adocta
      left join patmx1af mx1 on mx1.purno=wbpturno
      left join pmspx2af px2 on px2.pmpxurno=wbpturno
      where wbptwuid = :secureid
      and   wbptlnum = :webpd002 ";
  $reply .= "function AddRows() {\n";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_bind_by_name($stmt, ':webpd002', $webpd002);
 break;

 default:
  oci_close($conn); 
  exit();
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
