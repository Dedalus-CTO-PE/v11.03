create table alledtaf
(
  aledurno    char(8) default ' ' not null,
  aledloan    char(8) default ' ' not null,
  aledtype    char(3) default ' ' not null,
  alednote    char(6) default ' ' not null,
  aleddate    char(8) default ' ' not null,
  aledtime    char(8) default ' ' not null,
  aleduser    char(10) default ' ' not null,
  aledoccg    char(3) default ' ' not null,
  aleddelt    char(1) default ' ' not null,
  aledddat    char(8) default ' ' not null,
  aleddtim    char(8) default ' ' not null,
  aledduse    char(10) default ' ' not null,
  aleddocc    char(3) default ' ' not null,
  aledspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index alledta1 on alledtaf
(
aledurno,
aledloan,
aledtype,
alednote
);
revoke all on alledtaf from public ; 
grant select on alledtaf to public ; 
