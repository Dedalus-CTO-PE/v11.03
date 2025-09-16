create table pmsbrqaf
(
  pmbrvisn    char(8) default ' ' not null,
  pmbrreqd    char(8) default ' ' not null,
  pmbrreqt    char(8) default ' ' not null,
  pmbrunit    char(3) default ' ' not null,
  pmbrrhcp    char(10) default ' ' not null,
  pmbrtype    char(3) default ' ' not null,
  pmbrrsta    char(1) default ' ' not null,
  pmbrdiag    char(10) default ' ' not null,
  pmbrewrd    char(3) default ' ' not null,
  pmbrebed    char(3) default ' ' not null,
  pmbradat    char(8) default ' ' not null,
  pmbratim    char(8) default ' ' not null,
  pmbrauid    char(10) default ' ' not null,
  pmbrcanr    char(3) default ' ' not null,
  pmbrcand    char(8) default ' ' not null,
  pmbrcant    char(8) default ' ' not null,
  pmbrcanu    char(10) default ' ' not null,
  pmbrcdat    char(8) default ' ' not null,
  pmbrctim    char(8) default ' ' not null,
  pmbrcuid    char(10) default ' ' not null,
  pmbrudat    char(8) default ' ' not null,
  pmbrutim    char(8) default ' ' not null,
  pmbruuid    char(10) default ' ' not null,
  pmbrrwrd    char(3) default ' ' not null,
  pmbrsbed    char(3) default ' ' not null,
  pmbrhosp    char(3) default ' ' not null,
  pmbrftxt    char(100) default ' ' not null,
  pmbrrdat    char(8) default ' ' not null,
  pmbrrtim    char(8) default ' ' not null,
  pmbrteam    char(5) default ' ' not null,
  pmbrpwrd    char(3) default ' ' not null,
  pmbrsffr    char(1) default ' ' not null,
  pmbrsfep    char(1) default ' ' not null,
  pmbrsfci    char(1) default ' ' not null,
  pmbrsfco    char(1) default ' ' not null,
  pmbrsfis    char(1) default ' ' not null,
  pmbrsfte    char(1) default ' ' not null,
  pmbrsfrc    char(1) default ' ' not null,
  pmbrsfot    char(1) default ' ' not null,
  pmbrsfnr    char(1) default ' ' not null,
  pmbrsfma    char(1) default ' ' not null,
  pmbrmasc    char(3) default ' ' not null,
  pmbrwdtr    char(1) default ' ' not null,
  pmbrcorc    char(1) default ' ' not null,
  pmbrspar    char(47) default ' ' not null,
  lf          char(1)
);
create unique index pmsbrqa1 on pmsbrqaf
(
pmbrvisn,
pmbrreqd,
pmbrreqt
);
create unique index pmsbrqa2 on pmsbrqaf
(
pmbrvisn,
pmbrrsta,
pmbrreqd,
pmbrreqt
);
create unique index pmsbrqa3 on pmsbrqaf
(
pmbrreqd,
pmbrreqt,
pmbrvisn
);
create unique index pmsbrqa4 on pmsbrqaf
(
pmbrewrd,
pmbrebed,
pmbrrsta,
pmbradat,
pmbrvisn,
pmbrreqd,
pmbrreqt
);
create unique index pmsbrqa5 on pmsbrqaf
(
pmbrewrd,
pmbrebed,
pmbrrsta,
pmbrreqd,
pmbrreqt,
pmbrvisn
);
revoke all on pmsbrqaf from public ; 
grant select on pmsbrqaf to public ; 
