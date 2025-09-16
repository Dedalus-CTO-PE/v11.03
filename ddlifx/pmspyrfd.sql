create table pmspyraf
(
  pmpyurno    char(8) default ' ' not null,
  pmpyclty    char(3) default ' ' not null,
  pmpyefdt    char(8) default ' ' not null,
  pmpydeft    char(1) default ' ' not null,
  pmpyetdt    char(8) default ' ' not null,
  pmpytitl    char(4) default ' ' not null,
  pmpysnam    char(40) default ' ' not null,
  pmpygnam    char(40) default ' ' not null,
  pmpysgnm    char(40) default ' ' not null,
  pmpyadd1    char(35) default ' ' not null,
  pmpyadd2    char(35) default ' ' not null,
  pmpyadd3    char(35) default ' ' not null,
  pmpyadd4    char(35) default ' ' not null,
  pmpypost    char(8) default ' ' not null,
  pmpyrelp    char(10) default ' ' not null,
  pmpytelp    char(20) default ' ' not null,
  pmpytelb    char(20) default ' ' not null,
  pmpytelm    char(20) default ' ' not null,
  pmpyemai    char(80) default ' ' not null,
  pmpycuid    char(10) default ' ' not null,
  pmpycdat    char(8) default ' ' not null,
  pmpyctim    char(8) default ' ' not null,
  pmpyuuid    char(10) default ' ' not null,
  pmpyudat    char(8) default ' ' not null,
  pmpyutim    char(8) default ' ' not null,
  pmpyspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmspyra1 on pmspyraf
(
pmpyurno,
pmpyclty,
pmpyefdt
);
create unique index pmspyra2 on pmspyraf
(
pmpyurno,
pmpyefdt,
pmpyclty
);
revoke all on pmspyraf from public ; 
grant select on pmspyraf to public ; 
