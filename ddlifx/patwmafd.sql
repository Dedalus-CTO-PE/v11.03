create table patwmabf
(
  dmadmno     char(8) default ' ' not null,
  mrefno      char(20) default ' ' not null,
  mpolic      char(20) default ' ' not null,
  macdat      char(8) default ' ' not null,
  msname      char(30) default ' ' not null,
  mstele      char(12) default ' ' not null,
  mcrego      char(36) default ' ' not null,
  macloc      char(40) default ' ' not null,
  mdpindic    decimal(1,0) default 0 not null,
  mengaged    char(20) default ' ' not null,
  mpinjure    char(30) default ' ' not null,
  mmdtrans    char(10) default ' ' not null,
  mmechsev    char(30) default ' ' not null,
  mregnsev    char(20) default ' ' not null,
  mothdet1    char(30) default ' ' not null,
  mothdet2    char(30) default ' ' not null,
  mothdet3    char(30) default ' ' not null,
  ptwmtacf    decimal(1,0) default 0 not null,
  ptwmtype    char(3) default ' ' not null,
  ptwmurno    char(8) default ' ' not null,
  ptwmvdat    char(8) default ' ' not null,
  ptwmicde    char(6) default ' ' not null,
  mspare      char(50) default ' ' not null,
  lf          char(1)
);
create unique index patwmab1 on patwmabf
(
dmadmno
);
create unique index patwmab2 on patwmabf
(
ptwmurno,
dmadmno
);
create unique index patwmab3 on patwmabf
(
mrefno,
ptwmurno,
dmadmno,
ptwmvdat
);
revoke all on patwmabf from public ; 
grant select on patwmabf to public ; 
