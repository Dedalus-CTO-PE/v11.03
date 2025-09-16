create table emrurgaf
(
  emuredat    char(8) default ' ' not null,
  emuresta    char(3) default ' ' not null,
  emurtria    char(3) default ' ' not null,
  emurvtyp    char(3) default ' ' not null,
  emurmdbc    char(30) default ' ' not null,
  emururgv    char(6) default ' ' not null,
  emururgd    char(80) default ' ' not null,
  emurcdat    char(8) default ' ' not null,
  emurctim    char(8) default ' ' not null,
  emurcuid    char(10) default ' ' not null,
  emurudat    char(8) default ' ' not null,
  emurutim    char(8) default ' ' not null,
  emuruuid    char(10) default ' ' not null,
  emurspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrurga1 on emrurgaf
(
emuredat,
emuresta,
emurtria,
emurvtyp,
emurmdbc
);
create unique index emrurga2 on emrurgaf
(
emuresta,
emurtria,
emurvtyp,
emurmdbc,
emuredat
);
create unique index emrurga3 on emrurgaf
(
emurtria,
emurvtyp,
emurmdbc,
emuredat,
emuresta
);
create unique index emrurga4 on emrurgaf
(
emurvtyp,
emurmdbc,
emuredat,
emuresta,
emurtria
);
create unique index emrurga5 on emrurgaf
(
emurmdbc,
emuredat,
emuresta,
emurtria,
emurvtyp
);
revoke all on emrurgaf from public ; 
grant select on emrurgaf to public ; 
