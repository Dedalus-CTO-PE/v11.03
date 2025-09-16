create table allmdtaf
(
  almdvisn    char(8) default ' ' not null,
  almdencn    char(8) default ' ' not null,
  almdtype    char(3) default ' ' not null,
  almdnote    char(6) default ' ' not null,
  almddate    char(8) default ' ' not null,
  almdtime    char(8) default ' ' not null,
  almduser    char(10) default ' ' not null,
  almdoccg    char(3) default ' ' not null,
  almddelt    char(1) default ' ' not null,
  almdddat    char(8) default ' ' not null,
  almddtim    char(8) default ' ' not null,
  almdduse    char(10) default ' ' not null,
  almddocc    char(3) default ' ' not null,
  almdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allmdta1 on allmdtaf
(
almdvisn,
almdencn,
almdtype,
almdnote
);
revoke all on allmdtaf from public ; 
grant select on allmdtaf to public ; 
