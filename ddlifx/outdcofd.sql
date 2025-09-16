create table outdcoaf
(
  otdourno    char(8) default ' ' not null,
  otdoadat    char(8) default ' ' not null,
  otdoatim    char(8) default ' ' not null,
  otdoatyp    char(2) default ' ' not null,
  otdoclno    char(3) default ' ' not null,
  otdocomm    char(100) default ' ' not null,
  otdocdat    char(8) default ' ' not null,
  otdoctim    char(8) default ' ' not null,
  otdocuid    char(10) default ' ' not null,
  otdoudat    char(8) default ' ' not null,
  otdoutim    char(8) default ' ' not null,
  otdouuid    char(10) default ' ' not null,
  otdospar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outdcoa1 on outdcoaf
(
otdourno,
otdoadat,
otdoatim,
otdoatyp,
otdoclno
);
revoke all on outdcoaf from public ; 
grant select on outdcoaf to public ; 
