create table mehmdtaf
(
  mhmdurno    char(8) default ' ' not null,
  mhmdtype    char(3) default ' ' not null,
  mhmdnote    char(6) default ' ' not null,
  mhmddate    char(8) default ' ' not null,
  mhmdtime    char(8) default ' ' not null,
  mhmduser    char(10) default ' ' not null,
  mhmdoccg    char(3) default ' ' not null,
  mhmddelt    char(1) default ' ' not null,
  mhmdddat    char(8) default ' ' not null,
  mhmddtim    char(8) default ' ' not null,
  mhmdduse    char(10) default ' ' not null,
  mhmddocc    char(3) default ' ' not null,
  mhmdspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index mehmdta1 on mehmdtaf
(
mhmdurno,
mhmdtype,
mhmdnote
);
revoke all on mehmdtaf from public ; 
grant select on mehmdtaf to public ; 
