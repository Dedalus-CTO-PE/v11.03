create table pmsaidaf
(
  pmaiurno    char(8) default ' ' not null,
  pmaitype    char(3) default ' ' not null,
  pmaialid    char(20) default ' ' not null,
  pmaidisu    char(1) default ' ' not null,
  pmaihosp    char(3) default ' ' not null,
  pmairdat    char(8) default ' ' not null,
  pmaicrdt    char(8) default ' ' not null,
  pmaicrtm    char(8) default ' ' not null,
  pmaicrud    char(10) default ' ' not null,
  pmaiupdt    char(8) default ' ' not null,
  pmaiuptm    char(8) default ' ' not null,
  pmaiupud    char(10) default ' ' not null,
  pmaivsta    char(1) default ' ' not null,
  pmaiasta    char(1) default ' ' not null,
  pmaiadat    char(8) default ' ' not null,
  pmaiatim    char(8) default ' ' not null,
  pmaisurn    char(40) default ' ' not null,
  pmaigivn    char(40) default ' ' not null,
  pmaidtmr    char(8) default ' ' not null,
  pmaitmmr    char(8) default ' ' not null,
  pmaiusmr    char(10) default ' ' not null,
  pmaispar    char(74) default ' ' not null,
  lf          char(1)
);
create unique index pmsaida1 on pmsaidaf
(
pmaiurno,
pmaitype,
pmaialid
);
create unique index pmsaida2 on pmsaidaf
(
pmaialid,
pmaiurno,
pmaitype
);
revoke all on pmsaidaf from public ; 
grant select on pmsaidaf to public ; 
