create table opradtaf
(
  opaduniq    char(10) default ' ' not null,
  opadurno    char(8) default ' ' not null,
  opadvisn    char(8) default ' ' not null,
  opadadat    char(8) default ' ' not null,
  opadatim    char(8) default ' ' not null,
  opadwebu    char(10) default ' ' not null,
  opadatyp    char(3) default ' ' not null,
  opadcodf    char(3) default ' ' not null,
  opadorig    char(100) default ' ' not null,
  opadchan    char(100) default ' ' not null,
  opadspar    char(70) default ' ' not null,
  lf          char(1)
);
create unique index opradta1 on opradtaf
(
opaduniq,
opadadat,
opadatim,
opadatyp,
opadwebu
);
create unique index opradta2 on opradtaf
(
opadurno,
opaduniq,
opadadat,
opadatim,
opadatyp,
opadwebu
);
revoke all on opradtaf from public ; 
grant select on opradtaf to public ; 
