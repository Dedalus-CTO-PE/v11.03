create table emrectaf
(
  emechosp    char(3) default ' ' not null,
  demecflg    char(2) default ' ' not null,
  emecmodl    char(1) default ' ' not null,
  emecuniq    char(8) default ' ' not null,
  emecinvn    char(8) default ' ' not null,
  emecbatn    char(8) default ' ' not null,
  emecurno    char(8) default ' ' not null,
  emecpbat    char(8) default ' ' not null,
  emecnbat    char(8) default ' ' not null,
  emectrid    char(24) default ' ' not null,
  emecamtc    decimal(14,2) default 0 not null,
  emecstat    char(2) default ' ' not null,
  emecspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrecta1 on emrectaf
(
emechosp,
demecflg,
emecmodl,
emecuniq,
emecinvn,
emecbatn
);
create unique index emrecta2 on emrectaf
(
emecinvn,
emecbatn,
emecmodl
);
create unique index emrecta3 on emrectaf
(
emecbatn,
emecuniq,
emecinvn
);
create unique index emrecta4 on emrectaf
(
emecuniq,
emecinvn,
emecbatn
);
create unique index emrecta5 on emrectaf
(
emechosp,
emecurno,
emecuniq,
emecinvn,
emecbatn
);
create unique index emrecta6 on emrectaf
(
emectrid,
emecinvn,
emecbatn
);
revoke all on emrectaf from public ; 
grant select on emrectaf to public ; 
