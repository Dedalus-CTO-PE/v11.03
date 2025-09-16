<?php
/*
.----------------------------------------------------------------------
. Program       : patweb93.php
.
. Function      : Ward Patient Information Service
.
. Modifications :
. V10.06.01 04.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
. V10.03.01  14.11.2013  B.G.Ackland
.                        Changes to use bind in SQL to aviod SQL Injection
.----------------------------------------------------------------------
PRGID     INIT      "patweb93.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Ward Patient Information Service"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $wardcode = (isset($_REQUEST["wardcode"])) ? $_REQUEST["wardcode"] : null;
 $currentDate = getDate();
 $currentMonth = date("m");
 $currentYear = $currentDate['year'];
 $previousYear = $currentDate['year'] - 1;
 $reply = "";
 $dl    = "\",\"";
switch($reportno) {
/* Current Admissions by Ward */
 case 1:
 $qry = "select distinct p.purno urnumber
          ,daadmno  admissno
          ,nvl((select replace(tcindc1,' ','0') 
                from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
          nvl((select replace(tcindc1,' ','0') 
               from patcodes where tcode='T' and acode=p.ptype),'0')||
          nvl((select replace(tcindc1,' ','0') 
               from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
          ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
          ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
          ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2)
          ,trim(mi1.adate) || trim(mi1.atime)
          ,pmwoedat ,pmwowdi1 ,pmwowdi2 ,pmwowdi3 ,pcease ,lpconam
          ,(select tdesc from patcodes where tcode='CO' and acode=lpcondc and acode>' ') conddesc
          ,(select tcindc1 from patcodes where tcode='CO' and acode=lpcondc and acode>' ') condind1
          ,(select tdesc from patcodes where tcode='DC' and acode=pdiet and acode<>' ') dietdesc
          ,trim(mi1.abed)
          ,(select tdesc from patcodes where tcode='AC' and acode=mi1.aclssft) unitdesc
          ,initcap(a.dsname) || ', ' || initcap(a.dtitl) || ' ' || initcap(a.dgname) doctname
          ,p.psname||p.pgname
          ,mi1.adocta
          ,lpcdate
          ,lpctime
         from patmi1af mi1
          join patma1af p on p.purno=mi1.aurno
          left join pmsworaf on pmwoadmn=mi1.daadmno
          left join pmspx2af px2 on px2.pmpxurno=p.purno
          left join patlocaf on dladmno=mi1.daadmno and lsname=p.PTMASNAM and lgname=px2.PMPXFNAM
          left join patdo1af a on a.dcode=mi1.adocta
          where daadmno in (
             select DWADMNO from patwr1af 
             where wward = (select wward from patwr1af where wward=:wardcode
                            and wbed=' ' and winput<>1) 
             and wbed > ' '
             and wactive<>1
            union
             select DWSTBY from patwr1af 
             where wward = (select wward from patwr1af where wward=:wardcode
                            and wbed=' ' and winput<>1) 
             and wbed > ' '
             and dwstby >'       0'
            union
             select DNBADMNO from patnobef 
             where nbward = (select wward from patwr1af where wward=:wardcode and wbed=' ' )
            union
             select doadmno from patonlvf
             where oward = :wardcode
             and doadmno > '        0')";
   $reply .= "function AddRows() {";
   $stmt = oci_parse($conn,$qry) or die('cant parse query');
   oci_bind_by_name($stmt, ':wardcode', $wardcode);
   break;

/* Ward Orders Patient List */
 case 2:
 if ($currentMonth>1) {
   $getcnt =",(select count(*) from reha".$currentYear."  cy
            where cy.rehapid=mi1.aurno and cy.reharst='S' and cy.rehacdt<'1') orders";
 }
 else {
   $getcnt =",(select count(*) from reha".$currentYear."  cy
            where cy.rehapid=mi1.aurno and cy.reharst='S' and cy.rehacdt<'1') +
           (select count(*) from reha".$previousYear." py
            where py.rehapid=mi1.aurno and py.reharst='S' and py.rehacdt<'1') orders";
 }
 $qry = "select distinct p.purno urnumber
        ,daadmno   admissno
        ,nvl((select replace(tcindc1,' ','0') 
              from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
         nvl((select replace(tcindc1,' ','0') 
              from patcodes where tcode='T' and acode=p.ptype),'0')||
         nvl((select replace(tcindc1,' ','0') 
              from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
        ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
         ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
        ,trim(mi1.abed)
        ,trim(mi1.adate) || trim(mi1.atime)
        ,pmwoedat
        ,(select tdesc from patcodes where tcode='AC' and acode=mi1.aclssft) unitdesc
        ,initcap(a.dsname) || ', ' || initcap(a.dgname) || ', ' || a.dtitl doctor
        ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2)
       ".$getcnt."
      from patmi1af mi1
      join pmsworaf on pmwoadmn=mi1.daadmno
      join patma1af p on p.purno=mi1.aurno
      left join patdo1af a on a.dcode=mi1.adocta
      left join pmspx2af px2 on px2.pmpxurno=mi1.aurno
      where mi1.dastat in ('2','4')
      and   mi1.award = :wardcode
      ";
  $reply .= "function AddRows() {";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':wardcode', $wardcode);
  break;

/* Hospital in the Home Current Admissions */
 case 3:
 $qry = "select distinct p.purno urnumber
               ,daadmno  admissno
               ,nvl((select replace(tcindc1,' ','0') 
                     from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
                nvl((select replace(tcindc1,' ','0') 
                     from patcodes where tcode='T' and acode=p.ptype),'0')||
                nvl((select replace(tcindc1,' ','0') 
                     from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
               ,'<b>'||initcap(p.psname) || '</b>, ' || 
                       initcap(p.ptitl) || ' ' || 
                       initcap(p.pgname)  ||
                ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
               ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2)
               ,trim(mi1.adate) || trim(mi1.atime)
               ,pmwoedat
               ,pmwowdi1 
               ,pmwowdi2 
               ,pmwowdi3
               ,pcease
               ,lpconam
               ,(select tdesc from patcodes 
                 where tcode='CO' and acode=lpcondc and acode>' ') conddesc
               ,(select tcindc1 from patcodes 
                 where tcode='CO' and acode=lpcondc and acode>' ') condind1
               ,(select tdesc from patcodes 
                 where tcode='DC' and acode=pdiet and acode<>' ') dietdesc
               ,trim(mi1.abed)
               ,(select tdesc from patcodes where tcode='AC' and acode=mi1.aclssft) unitdesc
               ,initcap(a.dsname) || ', ' || initcap(a.dtitl) || ' ' || initcap(a.dgname) doctname
               ,p.psname||p.pgname
               ,mi1.adocta
               ,lpcdate
               ,lpctime
               ,trim(psubrb)
               ,trim(ppost)
               ,trim(p.padd1)||' '||trim(padd2)||' '||trim(psubrb)||' '||trim(padd4)||' '||trim(ppost)
             from patmi1af mi1
             join pmsworaf on pmwoadmn=mi1.daadmno
             join patma1af p on p.purno=mi1.aurno
             left join patlocaf on dladmno=mi1.daadmno and lsname=p.psname and lgname=p.pgname
             left join pmspx2af px2 on px2.pmpxurno=p.purno
             left join patdo1af a on a.dcode=mi1.adocta
             where daadmno in (
                     select DWADMNO from patwr1af 
                     where wward = (select wward from patwr1af 
                                    where wward=:wardcode and wbed=' ' and winput<>1) 
                     and wbed > ' '
                     and wactive<>1
                     union
                     select DWSTBY from patwr1af 
                     where wward = (select wward from patwr1af 
                                    where wward=:wardcode and wbed=' ' and winput<>1) 
                     and wbed > ' '
                     and dwstby >'       0'
                     union
                     select DNBADMNO from patnobef 
                     where nbward = (select wward from patwr1af where wward=:wardcode and wbed=' ' )
                     union
                     select doadmno from patonlvf
                     where oward = :wardcode
                     and doadmno > '        0')";
   $reply .= "function AddRows() {";
   $stmt = oci_parse($conn,$qry) or die('cant parse query');
   oci_bind_by_name($stmt, ':wardcode', $wardcode);
   break;

/* Consultant Current Admissions */
 case 4:
 $qry = "select a.adocta doctcode
               ,initcap(d.dsname) || ', ' || initcap(d.dtitl) || ' ' || initcap(d.dgname) doctname
               ,d.ptdomobl
               ,count(*)
         from patmi1af a
         join patdo1af d on d.dcode=a.adocta
         join patwr1af w on w.wward=a.award and w.wbed=' '
         where (a.dastat = '2' or a.dastat = '4')
         and (select wbsehosp from websecaf where wbselogn = :secureid ) in (w.ptwdhosn,' ')
         group by initcap(d.dsname) || ', ' || initcap(d.dtitl) || ' ' || initcap(d.dgname),
                  d.ptdomobl,
                  a.adocta
         order by 2";
   $reply .= "function AddRows() {";
   $stmt = oci_parse($conn,$qry) or die('cant parse query');
   oci_bind_by_name($stmt, ':secureid', $secureid);
   break;

/* Ward Current Admissions */
 case 5:
 $qry = "select w.wward wardcode
               ,initcap(w.wbdesc)||' (' ||h.pthssnam||')' wardname
               ,w.wextn
               ,h.pthssnam||w.wbdesc
               ,count(*)
         from patmi1af a
         join patwr1af w on w.wward=a.award and w.wbed=' '
         join pathspaf h on h.pthshosp=w.ptwdhosn
         where (a.dastat = '2' or a.dastat = '4')
         and (select wbsehosp from websecaf where wbselogn = :secureid ) in (h.pthshosp,' ')
         group by w.wward, h.pthssnam, w.wbdesc, w.wextn
         order by 2";
   $reply .= "function AddRows() {";
   $stmt = oci_parse($conn,$qry) or die('cant parse query');
   oci_bind_by_name($stmt, ':secureid', $secureid);
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
  $reply .= "}";
  echo $reply;
  oci_close($conn); 
?>
