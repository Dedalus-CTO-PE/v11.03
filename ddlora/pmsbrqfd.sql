create table pmsbrqaf
(
  pmbrvisn    varchar2(8) default ' ' not null,
  pmbrreqd    varchar2(8) default ' ' not null,
  pmbrreqt    varchar2(8) default ' ' not null,
  pmbrunit    varchar2(3) default ' ' not null,
  pmbrrhcp    varchar2(10) default ' ' not null,
  pmbrtype    varchar2(3) default ' ' not null,
  pmbrrsta    varchar2(1) default ' ' not null,
  pmbrdiag    varchar2(10) default ' ' not null,
  pmbrewrd    varchar2(3) default ' ' not null,
  pmbrebed    varchar2(3) default ' ' not null,
  pmbradat    varchar2(8) default ' ' not null,
  pmbratim    varchar2(8) default ' ' not null,
  pmbrauid    varchar2(10) default ' ' not null,
  pmbrcanr    varchar2(3) default ' ' not null,
  pmbrcand    varchar2(8) default ' ' not null,
  pmbrcant    varchar2(8) default ' ' not null,
  pmbrcanu    varchar2(10) default ' ' not null,
  pmbrcdat    varchar2(8) default ' ' not null,
  pmbrctim    varchar2(8) default ' ' not null,
  pmbrcuid    varchar2(10) default ' ' not null,
  pmbrudat    varchar2(8) default ' ' not null,
  pmbrutim    varchar2(8) default ' ' not null,
  pmbruuid    varchar2(10) default ' ' not null,
  pmbrrwrd    varchar2(3) default ' ' not null,
  pmbrsbed    varchar2(3) default ' ' not null,
  pmbrhosp    varchar2(3) default ' ' not null,
  pmbrftxt    varchar2(100) default ' ' not null,
  pmbrrdat    varchar2(8) default ' ' not null,
  pmbrrtim    varchar2(8) default ' ' not null,
  pmbrteam    varchar2(5) default ' ' not null,
  pmbrpwrd    varchar2(3) default ' ' not null,
  pmbrsffr    varchar2(1) default ' ' not null,
  pmbrsfep    varchar2(1) default ' ' not null,
  pmbrsfci    varchar2(1) default ' ' not null,
  pmbrsfco    varchar2(1) default ' ' not null,
  pmbrsfis    varchar2(1) default ' ' not null,
  pmbrsfte    varchar2(1) default ' ' not null,
  pmbrsfrc    varchar2(1) default ' ' not null,
  pmbrsfot    varchar2(1) default ' ' not null,
  pmbrsfnr    varchar2(1) default ' ' not null,
  pmbrsfma    varchar2(1) default ' ' not null,
  pmbrmasc    varchar2(3) default ' ' not null,
  pmbrwdtr    varchar2(1) default ' ' not null,
  pmbrcorc    varchar2(1) default ' ' not null,
  pmbrspar    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsbrqa1 primary key( 
pmbrvisn,
pmbrreqd,
pmbrreqt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsbrqa2 on pmsbrqaf
(
pmbrvisn,
pmbrrsta,
pmbrreqd,
pmbrreqt
)
  tablespace pas_indx; 
create unique index pmsbrqa3 on pmsbrqaf
(
pmbrreqd,
pmbrreqt,
pmbrvisn
)
  tablespace pas_indx; 
create unique index pmsbrqa4 on pmsbrqaf
(
pmbrewrd,
pmbrebed,
pmbrrsta,
pmbradat,
pmbrvisn,
pmbrreqd,
pmbrreqt
)
  tablespace pas_indx; 
create unique index pmsbrqa5 on pmsbrqaf
(
pmbrewrd,
pmbrebed,
pmbrrsta,
pmbrreqd,
pmbrreqt,
pmbrvisn
)
  tablespace pas_indx; 
