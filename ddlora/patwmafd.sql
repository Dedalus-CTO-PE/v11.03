create table patwmabf
(
  dmadmno     varchar2(8) default ' ' not null,
  mrefno      varchar2(20) default ' ' not null,
  mpolic      varchar2(20) default ' ' not null,
  macdat      varchar2(8) default ' ' not null,
  msname      varchar2(30) default ' ' not null,
  mstele      varchar2(12) default ' ' not null,
  mcrego      varchar2(36) default ' ' not null,
  macloc      varchar2(40) default ' ' not null,
  mdpindic    number(1,0) default 0 not null,
  mengaged    varchar2(20) default ' ' not null,
  mpinjure    varchar2(30) default ' ' not null,
  mmdtrans    varchar2(10) default ' ' not null,
  mmechsev    varchar2(30) default ' ' not null,
  mregnsev    varchar2(20) default ' ' not null,
  mothdet1    varchar2(30) default ' ' not null,
  mothdet2    varchar2(30) default ' ' not null,
  mothdet3    varchar2(30) default ' ' not null,
  ptwmtacf    number(1,0) default 0 not null,
  ptwmtype    varchar2(3) default ' ' not null,
  ptwmurno    varchar2(8) default ' ' not null,
  ptwmvdat    varchar2(8) default ' ' not null,
  ptwmicde    varchar2(6) default ' ' not null,
  mspare      varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patwmab1 primary key( 
dmadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patwmab2 on patwmabf
(
ptwmurno,
dmadmno
)
  tablespace pas_indx; 
create unique index patwmab3 on patwmabf
(
mrefno,
ptwmurno,
dmadmno,
ptwmvdat
)
  tablespace pas_indx; 
