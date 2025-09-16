create table ccierraf
(
  ccerdate    char(8) default ' ' not null,
  ccerdept    char(3) default ' ' not null,
  ccerurno    char(8) default ' ' not null,
  ccerptyp    char(4) default ' ' not null,
  ccerfsyr    char(4) default ' ' not null,
  ccerfspr    char(2) default ' ' not null,
  ccerecnu    char(12) default ' ' not null,
  ccerrtyp    char(3) default ' ' not null,
  ccerspar    char(5) default ' ' not null,
  lf          char(1)
);
create unique index ccierra1 on ccierraf
(
ccerdate,
ccerdept,
ccerurno,
ccerptyp
);
create unique index ccierra2 on ccierraf
(
ccerurno,
ccerdate,
ccerdept,
ccerptyp
);
revoke all on ccierraf from public ; 
grant select on ccierraf to public ; 
