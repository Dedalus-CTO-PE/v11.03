create table disptlaf
(
  dsplurno    char(8) default ' ' not null,
  dsplcode    char(9) default ' ' not null,
  dsplvisn    char(8) default ' ' not null,
  dsplcusr    char(10) default ' ' not null,
  dsplcdat    char(8) default ' ' not null,
  dsplctim    char(8) default ' ' not null,
  dspluusr    char(10) default ' ' not null,
  dspludat    char(8) default ' ' not null,
  dsplutim    char(8) default ' ' not null,
  dsplspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index disptla1 on disptlaf
(
dsplurno,
dsplcode,
dsplvisn
);
create unique index disptla2 on disptlaf
(
dsplcode,
dsplurno,
dsplvisn
);
revoke all on disptlaf from public ; 
grant select on disptlaf to public ; 
