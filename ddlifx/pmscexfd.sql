create table pmsaudce
(
  pmceaudd    char(8) default ' ' not null,
  pmceaudt    char(8) default ' ' not null,
  pmceaudp    char(2) default ' ' not null,
  pmceaudr    char(1) default ' ' not null,
  pmceauds    decimal(1,0) default 0 not null,
  pmceaudo    char(4) default ' ' not null,
  pmceurno    char(8) default ' ' not null,
  pmcetype    char(3) default ' ' not null,
  pmcecntr    char(3) default ' ' not null,
  pmcetitl    char(4) default ' ' not null,
  pmcesnam    char(40) default ' ' not null,
  pmcegnam    char(40) default ' ' not null,
  pmcegnm2    char(40) default ' ' not null,
  pmceadd1    char(35) default ' ' not null,
  pmceadd2    char(35) default ' ' not null,
  pmceadd3    char(35) default ' ' not null,
  pmceadd4    char(35) default ' ' not null,
  pmcepost    char(8) default ' ' not null,
  pmcetelp    char(20) default ' ' not null,
  pmcetelb    char(20) default ' ' not null,
  pmcetelm    char(20) default ' ' not null,
  pmcerelp    char(10) default ' ' not null,
  pmceemai    char(80) default ' ' not null,
  pmcecdat    char(8) default ' ' not null,
  pmcectim    char(8) default ' ' not null,
  pmcecuid    char(10) default ' ' not null,
  pmceudat    char(8) default ' ' not null,
  pmceutim    char(8) default ' ' not null,
  pmceuuid    char(10) default ' ' not null,
  pmceslet    char(1) default ' ' not null,
  pmceactv    char(1) default ' ' not null,
  pmcecont    char(3) default ' ' not null,
  pmcedina    char(8) default ' ' not null,
  pmcetpid    char(20) default ' ' not null,
  pmcewpid    char(10) default ' ' not null,
  pmcessms    char(1) default ' ' not null,
  pmcecmed    char(10) default ' ' not null,
  pmcecref    char(1) default ' ' not null,
  pmcecdob    char(8) default ' ' not null,
  pmcespar    char(37) default ' ' not null,
  lf          char(1)
);
create index pmsaudce on pmsaudce
(
pmceaudd,
pmceaudt,
pmceaudp,
pmceaudr
);
create index pmsaudc2 on pmsaudce
(
,
,
,
pmceaudd,
pmceaudt,
pmceaudp,
pmceaudr
);
revoke all on pmsaudce from public ; 
grant select on pmsaudce to public ; 
create table pmscexaf
(
  pmceurno    char(8) default ' ' not null,
  pmcetype    char(3) default ' ' not null,
  pmcecntr    char(3) default ' ' not null,
  pmcetitl    char(4) default ' ' not null,
  pmcesnam    char(40) default ' ' not null,
  pmcegnam    char(40) default ' ' not null,
  pmcegnm2    char(40) default ' ' not null,
  pmceadd1    char(35) default ' ' not null,
  pmceadd2    char(35) default ' ' not null,
  pmceadd3    char(35) default ' ' not null,
  pmceadd4    char(35) default ' ' not null,
  pmcepost    char(8) default ' ' not null,
  pmcetelp    char(20) default ' ' not null,
  pmcetelb    char(20) default ' ' not null,
  pmcetelm    char(20) default ' ' not null,
  pmcerelp    char(10) default ' ' not null,
  pmceemai    char(80) default ' ' not null,
  pmcecdat    char(8) default ' ' not null,
  pmcectim    char(8) default ' ' not null,
  pmcecuid    char(10) default ' ' not null,
  pmceudat    char(8) default ' ' not null,
  pmceutim    char(8) default ' ' not null,
  pmceuuid    char(10) default ' ' not null,
  pmceslet    char(1) default ' ' not null,
  pmceactv    char(1) default ' ' not null,
  pmcecont    char(3) default ' ' not null,
  pmcedina    char(8) default ' ' not null,
  pmcetpid    char(20) default ' ' not null,
  pmcewpid    char(10) default ' ' not null,
  pmcessms    char(1) default ' ' not null,
  pmcecmed    char(10) default ' ' not null,
  pmcecref    char(1) default ' ' not null,
  pmcecdob    char(8) default ' ' not null,
  pmcespar    char(37) default ' ' not null,
  lf          char(1)
);
create unique index pmscexa1 on pmscexaf
(
pmceurno,
pmcetype,
pmcecntr
);
revoke all on pmscexaf from public ; 
grant select on pmscexaf to public ; 
