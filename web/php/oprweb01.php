<?php
/*
.----------------------------------------------------------------------
. Program       : oprweb01.php
.
. Function      : Theatre Web Services
.
. Modifications :
. V10.11.01 16.10.2017 B.G.Ackland CAR 289943
.                      Join operating surgeon on opcldoct or opdaclin if Null.
. V10.07.01 01.12.2015 Peter Vela CAR 322118
.                      Changed > first date to >= first date in case 1
. V10.06.01 31.07.2015 Peter Vela CAR 320105
.                      Changed wbseuid to wbselogn
. V10.03.05 29.10.2013 B.G.Ackland
.                      Changes to use bind in SQL to aviod SQL Injection
. V10.03.04 13.09.2013 B.G.Ackland CAR 289943
.                      Change order of Consultant Select list to Surname
. V10.03.03 12.08.2013 B.G.Ackland CAR 289943
.                      Extend Anaethestist List
. V10.03.03 12.08.2013 B.G.Ackland CAR 289943
.                      Join operating surgeon on opcldoct and not opdaclin
. V10.03.02 07.08.2013 B.G.Ackland CAR 289943
.                      Only Show Bookings with Status of 0 in Expected List
. V10.03.01 29.07.2013 B.G.Ackland CAR 288223
.                      Return Surgeon in Separate Field
. V10.03.00 13/04/2012 Version change
. V10.01.00 13/04/2012 Version change
. V10.00.00 13/04/2012 Created for Mobility Suite
.----------------------------------------------------------------------
PRGID     INIT      "oprweb01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "AJAX Select List"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $frstdate = (isset($_REQUEST["frstdate"])) ? $_REQUEST["frstdate"] : null;
 $lastdate = (isset($_REQUEST["lastdate"])) ? $_REQUEST["lastdate"] : null;
 $reply = "";
 $dl    = "\",\"";
 
switch($reportno) {
/* Theatre Cases by Surgeon */
 case 1:
 $qry = "select p.purno urnumber
        ,opdaadmn  admissno
        ,nvl((select replace(tcindc1,' ','0') from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
         nvl((select replace(tcindc1,' ','0') from patcodes where tcode='T' and acode=p.ptype),'0')||
         nvl((select replace(tcindc1,' ','0') from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
        ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.pgname) || ', ' || initcap(p.ptitl)  ||
         ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
        ,opdadate sessdate 
        ,opdatime sesstime
        ,opdaclin clinic
        ,dopdasta status
        ,opdacase caseno
        ,opdades1 opdesc1
        ,opdades2 opdesc2
        ,opdades3 opdesc3
        ,opdacomm opcomm
        ,nvl(trim(initcap(opcldesc)),initcap(s.dsname)||', '|| substr(s.dgname,1,1)) sessname
        ,initcap(a.dsname) || ', ' || initcap(a.dgname) || ', ' || a.dtitl anaename
        ,trim(mi1.award)
        ,trim(mi1.abed)
        ,(select tdesc from patcodes where tcode='OA' and acode=opdaanae and opdaanae<>' ') anaetype 
        ,opdadate || opdatime || opdacase sortord1
        ,opdadate || p.psname || p.pgname sortord2
        ,initcap(s.dsname) || ', ' || initcap(s.dgname) || ', ' || s.dtitl surgname
      from oprdetaf
      join oprsesaf on opsedate=opdadate and opsetime=opdatime and opseclin=opdaclin
      join patma1af p on p.purno=opdaurno
      join opropraf on oprmroom=opsethet 
          and oprmhosp=(select wbsehosp from websecaf where wbselogn = :secureid )
      left join patmi1af mi1 on mi1.daadmno=opdaadmn
      left join pmspx2af px2 on px2.pmpxurno=opdaurno
      left join oprcliaf on opclclin=opdaclin
      left join patdo1af s on s.dcode=nvl(opcldoct,opseclin)
      left join patdo1af a on a.dcode=opseanae
      where opdadate >= :frstdate
      and   opdadate < :lastdate
      and   opsestat > 0
      and   dopdasta <> '3'
      and ( opcldoct=(select wbsedoc from websecaf where wbselogn= :secureid )
            or opdaclin=(select wbsedoc from websecaf where wbselogn= :secureid )
            or opseanae=(select wbsedoc from websecaf where wbselogn= :secureid )
            or opdauniq in (select optsunid
                            from   oprtsmaf
                            where  optsunid=opdauniq
                            and    doptssin in (' 0',' 1',' 3')
                            and    optsscde=(select wbsedoc
                                             from websecaf
                                             where wbselogn = :secureid )))
      order by opdadate,opdatime,opdacase";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_bind_by_name($stmt, ':lastdate', $lastdate);
  oci_bind_by_name($stmt, ':frstdate', $frstdate);
  $reply .= "function AddRows() {";
 break;

/* Current Admissions for Doctors Associated with Operation    */
 case 2:
 $qry = "select distinct p.purno urnumber
        ,opdaadmn  admissno
        ,nvl((select replace(tcindc1,' ','0') from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
         nvl((select replace(tcindc1,' ','0') from patcodes where tcode='T' and acode=p.ptype),'0')||
         nvl((select replace(tcindc1,' ','0') from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
        ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
         ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
        ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2)
        ,trim(mi1.adate) || trim(mi1.atime)
        ,pmwoedat
        ,trim(mi1.award)||'/'|| trim(mi1.abed)
   ,(select tdesc from patcodes where tcode='AC' and acode=mi1.aclssft and mi1.aclssft<>' ') unitdesc
        ,(select tdesc from patcodes where tcode='DC' and acode=p.pdiet and p.pdiet<>' ') dietdesc
        ,opdadate
        ,opdatime
        ,opdaclin
        ,dopdasta
        ,opdacase
        ,opdades1
        ,opdades2
        ,opdades3
        ,opdacomm
        ,initcap(s.dsname) || ', ' || initcap(s.dgname) || ', ' || s.dtitl surfname
        ,initcap(a.dsname) || ', ' || initcap(a.dgname) || ', ' || a.dtitl anaename
        ,mi1.award
        ,mi1.abed
        ,(select tdesc from patcodes where tcode='OA' and acode=opdaanae and opdaanae<>' ') oadesc
        ,opdadate||opdatime||opdacase casekeys
      from patmi1af mi1
      join pmsworaf on pmwoadmn=mi1.daadmno
      join oprdetaf on opdaadmn=mi1.daadmno
      join oprsesaf on opsedate=opdadate and opsetime=opdatime and opseclin=opdaclin
      join patma1af p on p.purno=opdaurno
      join opropraf on oprmroom=opsethet 
              and oprmhosp=(select wbsehosp from websecaf where wbselogn=:secureid)
      left join pmspx2af px2 on px2.pmpxurno=opdaurno
      left join oprcliaf on opclclin=opdaclin
      left join patdo1af s on s.dcode=nvl(opcldoct,opseclin)
      left join patdo1af a on a.dcode=opseanae
      where mi1.dastat in ('2','4')
      and   opsestat > 0
      and   dopdasta <> '3'
      and ( opcldoct=(select wbsedoc from websecaf where wbselogn=:secureid)
            or opdaclin=(select wbsedoc from websecaf where wbselogn=:secureid)
            or opseanae=(select wbsedoc from websecaf where wbselogn=:secureid)
            or   opdauniq in (select optsunid
                              from   oprtsmaf
                              where  optsunid=opdauniq
                              and    doptssin in (' 0',' 1',' 3')
                              and    optsscde=(select wbsedoc
                                               from websecaf
                                               where wbselogn=:secureid)))
      ";
  $reply .= "function AddRows() {";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  break;

 case 4:
  $qry = "select mi1.adocta
              , do1.dsname||', '||do1.dtitl||' '||do1.dgname||' ('|| count(*) ||')'
          from patmi1af mi1
          join patdo1af do1 on do1.dcode=mi1.adocta
          join patwr1af w on w.wward=mi1.award and w.wbed=' '
          where mi1.dastat in ('2','4')
          and (select wbsehosp from websecaf where wbselogn=:secureid) in (w.ptwdhosn,' ')
          group by  mi1.adocta, do1.dsname, do1.dtitl, do1.dgname
          order by 2
      ";
  $reply .= "function consultantList() {";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  break;

  case 5:
   $qry = "select bkreurno
                 ,dbkreboo
                 ,nvl((select replace(tcindc1,' ','0') from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
                  nvl((select replace(tcindc1,' ','0') from patcodes where tcode='T'  and acode=p.ptype),'0')||
                  nvl((select replace(tcindc1,' ','0') from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
                 ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
                  ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
                 ,bkreedat
                 ,'Booked'
                 ,bkrxuff1||' '|| bkrxuff2||' '||bkrxuff3 operation 
                 ,(select tdesc from patcodes where tcode='AC' and acode=bkredept and acode<>' ') unitdesc
                 ,(select wbdesc from patwr1af where wward=bkreward and wbed=' ') warddesc
           from bokrc1af
           join patma1af p on p.purno=bkreurno
           left join pmspx2af px2 on px2.pmpxurno=bkreurno
           join bokrx1af on bkrxbnum=dbkreboo
           where bkreadoc=(select wbsedoc from websecaf where wbselogn=:secureid)
           and bkreedat > :frstdate
           and bkreedat < :lastdate
           and bkrestat = 0
           union
           select aurno
                 ,daadmno
                 ,nvl((select replace(tcindc1,' ','0') from patcodes where tcode='FS' and acode=px2.pmpxfldr),'0')||
                  nvl((select replace(tcindc1,' ','0') from patcodes where tcode='T' and acode=p.ptype),'0')||
                  nvl((select replace(tcindc1,' ','0') from patcodes where tcode='PV' and acode=px2.pmpxprvi),'0')  folder
                 ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
                  ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' patfname
                 ,adate
                 ,'Pre-Admitted'
                 ,bkrxuff1 || ', ' || bkrxuff2|| ', ' || bkrxuff3 operation
                 ,(select tdesc from patcodes where tcode='AC' and acode=aclssft) unitdesc
                 ,(select wbdesc from patwr1af where wward=award and wbed=' ') warddesc
           from patmi1af
           join patma1af p on p.purno=aurno
           left join pmspx2af px2 on px2.pmpxurno=aurno
           left join bokrx1af on bkrxbnum=daadmno
           where adocta=(select wbsedoc from websecaf where wbselogn=:secureid)
           and adate > :frstdate
           and adate < :lastdate
           and dastat = '1'
           ";
  $reply .= "function AddRows() {";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_bind_by_name($stmt, ':lastdate', $lastdate);
  oci_bind_by_name($stmt, ':frstdate', $frstdate);
  break;

   default:
     echo "invalid";
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
