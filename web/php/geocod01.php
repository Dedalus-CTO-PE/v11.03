<?php
/*
.----------------------------------------------------------------------
. Program       : geocod01.php
.
. Function      : List Patients with GEO Codes Locations using Google Maps API
.
. Options      : 1 - Ward List
.                2 - Favourites List
.                3 - Single Patient (TBC)
.                4 - Referrals
.                5 - Outpatient Clinics
.                6 - Outpatient Clinics
.                7 - Outpatient Clinics & Ward for HIH
.                8 - Move Carer Allocation
.                9 - Outpatient Clinics & Ward for HIH
.
. Modifications :
.------------------------------------------------------------------------------
. V10.06.01 04.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
. V10.03.07 28.03.2014 B.G.Ackland
.                      Return Referral No If Available for Visit
. V10.03.06 26.03.2014 B.G.Ackland
.                      Remove Cancelled Appointment in Favorites Map View
. V10.03.05 21.03.2014 B.G.Ackland
.                      Remove Allocation Favorite in iPad Map View Call
.                      to ensure patients allocated in the previous week are
.                      removed from the users favourites
. V10.03.04 19.03.2014 B.G.Ackland
.                      Use Booking Diagnosis for Appointments in Case 7
. V10.03.03 13.03.2014 B.G.Ackland
.                      Add Booking Time OBATIME Next to Visit Type
. V10.03.02 13.09.2013 B.G.Ackland
.                      Incorporate Pre-admissions
. V10.03.01 11.09.2013 B.G.Ackland
.                      New Facilities for Moving and Copying Allocation to Carer.
. V10.03.00 22.08.2013 B.G.Ackland
.                      New Mapping Functions
.----------------------------------------------------------------------
PRGID     INIT      "geocod01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "GEO Code Patient Locations"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $groupuid = (isset($_REQUEST["groupuid"])) ? $_REQUEST["groupuid"] : null;
 $listcode = (isset($_REQUEST["listcode"])) ? $_REQUEST["listcode"] : null;
 $listcopy = (isset($_REQUEST["listcopy"])) ? $_REQUEST["listcopy"] : null;
 $wardcode = (isset($_REQUEST["wardcode"])) ? $_REQUEST["wardcode"] : null;
 $webpd002 = (isset($_REQUEST["webpd002"])) ? $_REQUEST["webpd002"] : null;
 $urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
 $admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
 $doctcode = (isset($_REQUEST["doctcode"])) ? $_REQUEST["doctcode"] : null;
 $deptcode = (isset($_REQUEST["deptcode"])) ? $_REQUEST["deptcode"] : null;
 $filtclid = (isset($_REQUEST["filtclid"])) ? $_REQUEST["filtclid"] : null;
 $filtctyp = (isset($_REQUEST["filtctyp"])) ? $_REQUEST["filtctyp"] : null;
 $filtteam = (isset($_REQUEST["filtteam"])) ? $_REQUEST["filtteam"] : null;
 $filthosp = (isset($_REQUEST["filthosp"])) ? $_REQUEST["filthosp"] : null;
 $filtpsit = (isset($_REQUEST["filtpsit"])) ? $_REQUEST["filtpsit"] : null;
 $sesskeys = (isset($_REQUEST["sesskeys"])) ? $_REQUEST["sesskeys"] : null;
 $lastdate = (isset($_REQUEST["lastdate"])) ? $_REQUEST["lastdate"] : null;
 $carerfrm = (isset($_REQUEST["carerfrm"])) ? $_REQUEST["carerfrm"] : null;
 $carertoo = (isset($_REQUEST["carertoo"])) ? $_REQUEST["carertoo"] : null;
 $actionty = (isset($_REQUEST["actionty"])) ? $_REQUEST["actionty"] : null;
 $latitude = (isset($_REQUEST["latitude"])) ? $_REQUEST["latitude"] : null;
 $longtude = (isset($_REQUEST["longtude"])) ? $_REQUEST["longtude"] : null;
 
 $currentDate = getDate();
 $currentMonth = date("m");
 $currentYear = $currentDate['year'];
 $previousYear = $currentDate['year'] - 1;
 $Lat = "";
 $Lng = "";
 $PartialMatch = "";
 $FormattedAddress = "";
 $reply = "";
 $dl    = "\",\"";
 $SQL="DELETE FROM MAP_AddressCache WHERE CacheDateTime <= ADD_MONTHS(TRUNC(SYSDATE), -1)";
 $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
 if (!oci_execute($rs)) { echo oci_error($rs); exit();}

switch($reportno) {
/* Current Admissions by Ward */
 case 1:
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,Diagnosis
          ,AdmissionDateTime
          ,DoctorName
    FROM (select distinct p.purno urnumber
                ,daadmno  VisitNo
                ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
                 ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
                ,case
                 when nvl(c.pmcetype,' ') = ' ' then
                   trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
                 else
                   trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
                   trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
                 end TreatmentAddress
                ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
                ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2) Diagnosis
                ,trim(mi1.adate) || trim(mi1.atime) AdmissionDateTime
                ,initcap(a.dsname) || ', ' || initcap(a.dtitl) || ' ' || initcap(a.dgname) DoctorName
          from patmi1af mi1
          join patma1af p on p.purno=mi1.aurno
          left join patdo1af a on a.dcode=mi1.adocta
          left join pmscexaf c on c.PMCEURNO = p.purno 
               and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
          where daadmno in (
                 select DWADMNO from patwr1af 
                 where wward = (select wward from patwr1af where wward= :WARDCODE and wbed=' ' and winput<>1) 
                 and wbed > ' '
                 and wactive<>1
                 union
                 select DWSTBY from patwr1af 
                 where wward = (select wward from patwr1af where wward= :WARDCODE and wbed=' ' and winput<>1) 
                 and wbed > ' '
                 and dwstby >'       0'
                 union
                 select DNBADMNO from patnobef 
                 where nbward = (select wward from patwr1af where wward= :WARDCODE and wbed=' ' )
                 union
                 select doadmno from patonlvf
                 where oward =  :WARDCODE 
                 and doadmno > '        0')
                )
    left join Map_AddressCache on Address = TreatmentAddress
   ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':WARDCODE', $wardcode);
  $reply .= "function AddRows() {";
   break;
 case 2:
   $SQL = "DELETE from webpataf where WBPTLNUM in ('HV0','HV1','HV2','HV3','HV4','HV5','HV6')
           AND WBPTWUID = (select wbseuid from websecaf where wbselogn=:secureid)
           AND WBPTDATC < to_char(sysdate-6,'YYYYMMDD') ";
   $stmt=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($stmt, ':secureid', $secureid);
   if (!oci_execute($stmt)) {echo oci_error($stmt);exit();}
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,nvl(ReferralNo,VisitNo) VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,StatusName
          ,CarerComment1
          ,CarerComment2
          ,StatusCode
          ,ListDateTime
          ,FollowupDate
    FROM (SELECT distinct p.purno urnumber
                ,(select allnvisn from alllnkaf l where l.allnlnkv=wbptvnum) ReferralNo
                ,wbptvnum  VisitNo
                ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
                ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
               ,case
                when nvl(c.pmcetype,' ') = ' ' then
                  trim(p.padd1)||' '||trim(p.padd2)||' '||
                  trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
                else
                  trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
                  trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
                end TreatmentAddress
               ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
               ,(select tdesc from patcodes where tcode='wv' and acode=wbptstat and acode<>' ') StatusName
               ,wbptcom1  CarerComment1
               ,wbptcom2  CarerComment2
               ,wbptdatc||wbpttimc ListDateTime
               ,wbptrdat           FollowupDate
               ,wbptstat           StatusCode
          from webpataf
          join patma1af p on p.purno=wbpturno
          left join pmscexaf c on c.PMCEURNO = p.purno 
               and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
          where wbptwuid = (select wbseuid from websecaf where wbselogn=:secureid)
          and   wbptlnum = :WEBPD002
      )
      left join Map_AddressCache on Address = TreatmentAddress
      ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_bind_by_name($stmt, ':WEBPD002', $webpd002);
 $reply .= "function AddRows() {\n";
 break;

 case 3:
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,TypeCode
          ,RecordNo
    FROM (
      SELECT p.purno urnumber
            ,:ADMISSNO  VisitNo
            ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
             ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
            ,case
             when nvl(c.pmcetype,' ') = ' ' then
               trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
             else
               trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
             end TreatmentAddress
            ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
            ,c.pmcetype TypeCode
            ,c.pmcecntr RecordNo
      from patma1af p 
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where p.purno = :URNUMBER
      )
      left join Map_AddressCache on Address = TreatmentAddress
      ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':URNUMBER', $urnumber);
  oci_bind_by_name($stmt, ':ADMISSNO', $admissno);
 $reply .= "function AddRows() {\n";
 break;

 case 4:
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,Diagnosis
    FROM (SELECT distinct a.alreurno urnumber
            ,alrevisn  VisitNo
            ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
             ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
            ,case
             when nvl(c.pmcetype,' ') = ' ' then
               trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
             else
               trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
               trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
             end TreatmentAddress
            ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
            ,(select alprdesc from allprraf where alprdept=a.alredept and alprprob=a.alrepro1) Diagnosis
      from allrefaf a
      join patma1af p on p.purno = a.alreurno
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where a.alredept = :deptcode
      and   a.alrestat = '1' 
      and   (a.alrehcp  = :doctcode or ' '=nvl(trim(':doctcode'),' '))
      and   (a.alreclid = :filtclid or 'zzzzzz'=':filtclid')
      and   (a.alrectyp = :filtctyp or ' '=nvl(trim(':filtctyp'),' '))
      and   (a.alreuhc4 = :filtteam or ' '=nvl(trim(':filtteam'),' '))
      and   (a.alrehosn = :filthosp or ' '=nvl(trim(':filthosp'),' '))
      and   (a.alrepsit = :filtpsit or ' '=nvl(trim(':filtpsit'),' '))
      )
      left join Map_AddressCache on Address = TreatmentAddress
      ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':deptcode', $deptcode);
  oci_bind_by_name($stmt, ':doctcode', $doctcode);
  oci_bind_by_name($stmt, ':filtclid', $filtclid);
  oci_bind_by_name($stmt, ':filtctyp', $filtctyp);
  oci_bind_by_name($stmt, ':filtteam', $filtteam);
  oci_bind_by_name($stmt, ':filthosp', $filthosp);
  oci_bind_by_name($stmt, ':filtpsit', $filtpsit);
 $reply .= "function AddRows() {\n";
 break;

 case 5:
   $cfilepre='out';
   $outpsite=substr($sesskeys,0,6);
   $outpclin=substr($sesskeys,6,6);
   $outpdate=substr($sesskeys,12,8);
   $outpstrt=substr($sesskeys,20,5);
   $SQL = "select ostfile from outsitaf where ostsite=:OUTPSITE";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':OUTPSITE', $outpsite);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   $row=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
   $cfilepre=$row["OSTFILE"];
   if (trim($cfilepre)=='') $cfilepre='out';
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,AppointmentTime
          ,VisitType
    FROM (SELECT distinct o.obaurno urnumber
               ,o.dobaoutn  VisitNo
               ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
                ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
               ,case
                 when nvl(c.pmcetype,' ') = ' ' then
                   trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
                 else
                   trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
                   trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
                 end TreatmentAddress
                ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
            ,o.obatime AppointmentTime
            ,(select tdesc from patcodes where tcode='CV' and acode=o.obavisit)  VisitType
      from ".$cfilepre."bokaf o
      join patma1af p on p.purno = o.obaurno
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where o.obasite = :outpsite
      and   o.obaclin = :outpclin
      and   o.obadate = :outpdate 
      and   o.obastrt = :outpstrt
      and   o.dobastat in ('1','4')
      order by o.obatime 
      )
      left join Map_AddressCache on Address = TreatmentAddress
      ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':outpsite', $outpsite);
  oci_bind_by_name($stmt, ':outpclin', $outpclin);
  oci_bind_by_name($stmt, ':outpdate', $outpdate);
  oci_bind_by_name($stmt, ':outpstrt', $outpstrt);
 $reply .= "function AddRows() {\n";
 break;

 case 6:
/* Ward List for Home Care Ward and Active Referrals including Patient List Configuration */
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,VisitType
          ,Diagnosis
          ,CarerName
          ,CarerID
          ,StatusCode
          ,StatusName
          ,CarerComment1
          ,CarerComment2
          ,ListDateTime
          ,FollowupDate
    FROM (SELECT distinct a.alreurno urnumber
           ,alrevisn  VisitNo
           ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
            ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
           ,case
             when nvl(c.pmcetype,' ') = ' ' then
               trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
             else
               trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
               trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
             end TreatmentAddress
           ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
           ,'Referral Type:'||(select tdesc from patcodes where tcode='RI' and acode=a.alrertyp and acode<>' ') VisitType
           ,(select alprdesc from allprraf where alprdept=a.alredept and alprprob=a.alrepro1) Diagnosis
           ,ws.wbsenam CarerName
           ,ws.wbseuid CarerID
           ,(select tdesc from patcodes where tcode='wv' and acode=wbptstat and acode<>' ') StatusName
           ,wbptcom1  CarerComment1
           ,wbptcom2  CarerComment2
           ,wbptdatc||wbpttimc ListDateTime
           ,wbptrdat           FollowupDate
           ,wbptstat           StatusCode
      from allrefaf a
      join patma1af p on p.purno = a.alreurno
      left join webpataf wp on wp.wbpturno = a.alreurno and wbptlnum = :listcode
      left join websecaf ws on wp.wbptwuid = ws.wbseuid
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where a.alredept = :deptcode
      and   a.alrestat = '1'
      and   (a.alrehcp  = :doctcode or ' '=nvl(trim(':doctcode'),' '))
      and   (a.alreclid = :filtclid or 'zzzzzz'=':filtclid')
      and   (a.alrectyp = :filtctyp or ' '=nvl(trim(':filtctyp'),' '))
      and   (a.alreuhc4 = :filtteam or ' '=nvl(trim(':filtteam'),' '))
      and   (a.alrehosn = :filthosp or ' '=nvl(trim(':filthosp'),' '))
      and   (a.alrepsit = :filtpsit or ' '=nvl(trim(':filtpsit'),' '))
     UNION ALL
      select  distinct p.purno urnumber
           ,daadmno  VisitNo
           ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
            ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
           ,case
            when nvl(c.pmcetype,' ') = ' ' then
              trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
            else
              trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
              trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
            end TreatmentAddress
           ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
           ,'Ward :'||w.wbdesc VisitType
           ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2) Diagnosis
           ,ws.wbsenam CarerName
           ,ws.wbseuid CarerID
           ,(select tdesc from patcodes where tcode='wv' and acode=wbptstat and acode<>' ') StatusName
           ,wbptcom1  CarerComment1
           ,wbptcom2  CarerComment2
           ,wbptdatc||wbpttimc ListDateTime
           ,wbptrdat           FollowupDate
           ,wbptstat           StatusCode
      from patmi1af mi1
      join patma1af p on p.purno=mi1.aurno
      join patwr1af w on w.wward=mi1.award and w.wbed=' '
      left join webpataf wp on wp.wbpturno = mi1.aurno and wbptlnum = :listcode
      left join websecaf ws on wp.wbptwuid = ws.wbseuid
      left join patdo1af a on a.dcode=mi1.adocta
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where mi1.award = :wardcode
      and   mi1.dastat = '2'
      )
      left join Map_AddressCache on Address = TreatmentAddress
      ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':listcode', $listcode);
  oci_bind_by_name($stmt, ':wardcode', $wardcode);
  oci_bind_by_name($stmt, ':deptcode', $deptcode);
  oci_bind_by_name($stmt, ':doctcode', $doctcode);
  oci_bind_by_name($stmt, ':filtclid', $filtclid);
  oci_bind_by_name($stmt, ':filtctyp', $filtctyp);
  oci_bind_by_name($stmt, ':filtteam', $filtteam);
  oci_bind_by_name($stmt, ':filthosp', $filthosp);
  oci_bind_by_name($stmt, ':filtpsit', $filtpsit);
  $reply .= "function AddRows() {";
   break;

 case 7:
/* Ward List for Home Care Ward and Outpatient Appointments including Patient List Configuration */
   $cfilepre='out';
   $SQL = "select ostsite,ostfile 
           from outsitaf 
           where ostsite=(select wbsesit from websecaf where wbselogn = :secureid )";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':secureid', $secureid);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   $row=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
   $cfilepre=$row["OSTFILE"];
   $outpsite=$row["OSTSITE"];
   if (trim($cfilepre)=='') $cfilepre='out';

/* Remove old Allocations after 7 Days */
   $SQL = "DELETE from webpataf where WBPTLNUM in ('HV0','HV1','HV2','HV3','HV4','HV5','HV6')
           AND WBPTDATC < to_char(sysdate-6,'YYYYMMDD') ";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}

/* Get Mapping List */
   $qry = "
    SELECT urnumber ,Lat ,Lng, PartialMatch, FormattedAddress
          ,VisitNo
          ,PatientName
          ,TreatmentAddress
          ,AddressType
          ,VisitType
          ,Diagnosis
          ,ws.wbsenam         CarerName
          ,ws.wbseuid         CarerId
          ,wbptstat           StatusCode
          ,(select tdesc from patcodes where tcode='wv' and acode=wbptstat and acode<>' ') StatusName
          ,wbptcom1           CarerComment1
          ,wbptcom2           CarerComment2
          ,wbptdatc||wbpttimc ListDateTime
          ,wbptrdat           FollowupDate
    FROM (SELECT distinct o.obaurno urnumber
             ,o.dobaoutn  VisitNo
             ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
              ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
             ,case
               when nvl(c.pmcetype,' ') = ' ' then
                 trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
               else
                 trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
                 trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
               end TreatmentAddress
             ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
             ,'Type : '||(select tdesc from patcodes 
                          where tcode='CV' and acode=o.obavisit 
                          and acode<>' ')||' - '||obatime VisitType
             ,(select TRIM(a.OPDIDESC)||
                      decode(TRIM(a.OPDIDES2),'','',', '||a.OPDIDES2)||
                      decode(TRIM(a.OPDIDES3),'','',', '||a.OPDIDES3)||
                      decode(TRIM(a.OPDIDES4),'','',', '||a.OPDIDES4)||
                      decode(TRIM(a.OPDIDES5),'','',', '||a.OPDIDES5)
              from ".$cfilepre."diagf a where a.dopdiout=o.dobaoutn) Diagnosis
      from ".$cfilepre."bokaf o
      join ".$cfilepre."bb1af bb on bb.dobaoutn=o.dobaoutn
      join patma1af p on p.purno = o.obaurno
      left join alllnkaf l  on l.allnlnkv=o.dobaoutn
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where o.obasite = :outpsite
      and   o.obaclin = :filtclid
      and   o.obadate = :lastdate
      and   o.dobastat in ('1','4')
     UNION ALL
      select  distinct p.purno urnumber
             ,daadmno  VisitNo
             ,'<b>'||initcap(p.psname) || '</b>, ' || initcap(p.ptitl) || ' ' || initcap(p.pgname)  ||
             ' (' || p.psage || 'y , ' || p.psex || ', ' || trim(p.purno) ||')' PatientName
             ,case
               when nvl(c.pmcetype,' ') = ' ' then
                 trim(p.padd1)||' '||trim(p.padd2)||' '||trim(p.psubrb)||' '||trim(p.padd4)||' '||trim(p.ppost)
               else
                 trim(c.PMCEADD1)||' '||trim(c.PMCEADD2)||' '||
                 trim(c.PMCEADD3)||' '||trim(c.PMCEADD4)||' '||trim(c.PMCEPOST)
               end TreatmentAddress
             ,(select tdesc from patcodes where tcode='tc' and acode=c.pmcetype and acode<>' ') AddressType
             ,'Type : Inpatient' VisitType
             ,trim(mi1.adiag1) || ' ' || trim(mi1.adiag2) Diagnosis
      from patmi1af mi1
      join patma1af p on p.purno=mi1.aurno
      left join patdo1af a on a.dcode=mi1.adocta
      left join pmscexaf c on c.PMCEURNO = p.purno 
           and c.PMCETYPE in (select acode from patcodes where tcode='tc' and tcindc1='T')
      where (mi1.award = :wardcode and mi1.dastat = '2')
      or (mi1.ptmixwrd = :wardcode and mi1.dastat='1' and mi1.adate = :lastdate)
      )
      left join Map_AddressCache on Address = TreatmentAddress
      left join webpataf wp on wp.wbpturno = urnumber and wbptlnum = :listcode
      left join websecaf ws on wp.wbptwuid = ws.wbseuid
      ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':listcode', $listcode);
  oci_bind_by_name($stmt, ':wardcode', trim($wardcode));
  oci_bind_by_name($stmt, ':filtclid', trim($filtclid));
  oci_bind_by_name($stmt, ':lastdate', $lastdate);
  oci_bind_by_name($stmt, ':outpsite', trim($outpsite));
  $reply .= "function AddRows() {";
  break;

/* Move a Carer Allocations  */
  case 8:
     $SQL = "INSERT INTO WEBPATAF
             SELECT :CARERTOO
                   ,a.WBPTLNUM
                   ,a.WBPTURNO
                   ,a.WBPTVNUM
                   ,to_char(sysdate,'YYYYMMDD')
                   ,to_char(sysdate,'HH24:MI')
                   ,a.WBPTRDAT
                   ,a.WBPTSTAT
                   ,a.WBPTCOM1
                   ,a.WBPTCOM2
                   ,a.WBPTSPAR
                   ,a.LF
             FROM  WEBPATAF a 
             WHERE a.WBPTLNUM = :LISTCODE
             AND   a.WBPTWUID = :CARERFRM
             ";
     $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
     oci_bind_by_name($rs, ':CARERFRM', $carerfrm);
     oci_bind_by_name($rs, ':CARERTOO', $carertoo);
     oci_bind_by_name($rs, ':LISTCODE', $listcode);
     if (!oci_execute($rs)) {echo $SQL.oci_error($rs);exit();}
     $SQL = "DELETE FROM WEBPATAF
             WHERE WBPTLNUM = :LISTCODE
             AND   WBPTWUID = :CARERFRM
             ";
     $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
     oci_bind_by_name($rs, ':CARERFRM', $carerfrm);
     oci_bind_by_name($rs, ':LISTCODE', $listcode);
     if (oci_execute($rs)) {
       exit();
     } else {
       $e = oci_error($rs);
       echo $e['message'];
     }
     exit();
   break;

/* Copy List From Code       */
  case 9:
/* Ward List for Home Care Ward and Outpatient Appointments including Patient List Configuration */
   $cfilepre='out';
   $SQL = "select ostsite,ostfile
           from outsitaf
           where ostsite=(select wbsesit from websecaf where wbselogn = :secureid )";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':secureid', $secureid);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}
   $row=oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
   $cfilepre=$row["OSTFILE"];
   $outpsite=$row["OSTSITE"];
   if (trim($cfilepre)=='') $cfilepre='out';
   $SQL = "DELETE FROM WEBPATAF 
             WHERE  WBPTLNUM=:LISTCODE
             AND    WBPTURNO IN (
                SELECT distinct o.obaurno urnumber
                from ".$cfilepre."bokaf o
                where o.obasite = :OUTPSITE
                and   o.obaclin = :FILTCLID
                and   o.dobastat in ('1','4')
               UNION ALL
                select  distinct mi1.aurno urnumber
                from patmi1af mi1
                where mi1.award = :WARDCODE
            )";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':OUTPSITE', trim($outpsite));
   oci_bind_by_name($rs, ':FILTCLID', trim($filtclid));
   oci_bind_by_name($rs, ':WARDCODE', trim($wardcode));
   oci_bind_by_name($rs, ':LISTCODE', $listcode);
   if (!oci_execute($rs)) {
     $e = oci_error($rs);
     echo $e['message'];
   }

   $SQL = "
     INSERT INTO WEBPATAF
     SELECT wp.wbptwuid
                   ,:LISTCODE
                   ,wp.WBPTURNO
                   ,wp.WBPTVNUM
                   ,to_char(sysdate,'YYYYMMDD')
                   ,to_char(sysdate,'HH24:MI')
                   ,wp.WBPTRDAT
                   ,wp.WBPTSTAT
                   ,wp.WBPTCOM1
                   ,wp.WBPTCOM2
                   ,wp.WBPTSPAR
                   ,wp.LF
      FROM (SELECT distinct o.obaurno urnumber
            from ".$cfilepre."bokaf o
            where o.obasite = :OUTPSITE
            and   o.obaclin = :FILTCLID
            and   o.obadate = :LASTDATE 
            and   o.dobastat in ('1','4')
          UNION ALL
            select  distinct mi1.aurno urnumber
            from patmi1af mi1
            where mi1.award = :WARDCODE
            and   mi1.dastat = '2'
            )
     join webpataf wp on wp.wbpturno = urnumber and wbptlnum = :LISTCOPY  
    ";
   $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':OUTPSITE', trim($outpsite));
   oci_bind_by_name($rs, ':FILTCLID', trim($filtclid));
   oci_bind_by_name($rs, ':LASTDATE', $lastdate);
   oci_bind_by_name($rs, ':WARDCODE', trim($wardcode));
   oci_bind_by_name($rs, ':LISTCOPY', $listcopy);
   oci_bind_by_name($rs, ':LISTCODE', $listcode);
   if (oci_execute($rs)) {
     exit();
   } else {
     $e = oci_error($rs);
     echo $e['message'];
   }
   exit();
   break;
 }
  if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        $Lat=$row[1];
        $Lng=$row[2];
        $PartialMatch=$row[3];
        $FormattedAddress=$row[4];
        if ($Lat=="") { getLatLng($row[7]); }
        $reply .= "t.addRow(\"".$row[0];    /* 0-UR Number */
        $reply .= $dl.$row[5];              /* 1-Admission */
        $reply .= $dl.$row[6];              /* 2-Name      */
        $reply .= $dl.$row[7];              /* 3-Address   */
        $reply .= $dl.$Lat.$dl.$Lng;        /* 4/5-Lat/Lng   */
        $reply .= $dl.$PartialMatch;        /* 6-Partial Match   */
        $reply .= $dl.$FormattedAddress;    /* 7-Formatted Address   */
        for ($i = 8; $i < $numcols; $i++) {
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
 
function getLatLng($Address){
  global $Lat,$Lng;
  $url = "https://maps.googleapis.com/maps/api/geocode/json?address=".urlencode($Address)."&sensor=false";
  $ch = curl_init();
  curl_setopt($ch, CURLOPT_URL, $url);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
  if ( ! $response = curl_exec($ch) ) {
    sleep(1);
    $Lat="0";
    $Lng="0";
    $PartialMatch="";
  } else {
    $response=json_decode($response, true);
    if ($response['status'] != 'OK') {
      $Lat="0";
      $Lng="0";
      $PartialMatch="";
    } else {
      $geometry         = $response['results'][0]['geometry'];
      $Lat              = $geometry['location']['lat'];
      $Lng              = $geometry['location']['lng'];
      $FormattedAddress = $response['results'][0]['formatted_address'];
      $PartialMatch     = (isset($response['results'][0]['partial_match'])) ?  $response['results'][0]['partial_match'] : null;

      $SQL="INSERT INTO MAP_AddressCache 
      ( Address, Lat, Lng, FormattedAddress, PartialMatch, CacheDateTime)
      Values (:Address,:Lat,:Lng,:FormattedAddress, :PartialMatch, SYSDATE)";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
      oci_bind_by_name($rs, ':Address', $Address);
      oci_bind_by_name($rs, ':Lat', $Lat);
      oci_bind_by_name($rs, ':Lng', $Lng);
      oci_bind_by_name($rs, ':PartialMatch', $PartialMatch);
      oci_bind_by_name($rs, ':FormattedAddress', $FormattedAddress);
      if (!oci_execute($rs)) {echo oci_error($rs);exit();}
    }
  }
}
?>
