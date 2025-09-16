create table pmsdraaf
(
  pmdrdoct    char(10) default ' ' not null,
  pmdrarra    char(3) default ' ' not null,
  pmdrafdt    char(8) default ' ' not null,
  pmdratdt    char(8) default ' ' not null,
  pmdrcuid    char(10) default ' ' not null,
  pmdrcdat    char(8) default ' ' not null,
  pmdrctim    char(8) default ' ' not null,
  pmdruuid    char(10) default ' ' not null,
  pmdrudat    char(8) default ' ' not null,
  pmdrutim    char(8) default ' ' not null,
  pmdrspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsdraa1 on pmsdraaf
(
pmdrdoct,
pmdrarra
);
create unique index pmsdraa2 on pmsdraaf
(
pmdrdoct,
pmdrafdt,
pmdrarra
);
revoke all on pmsdraaf from public ; 
grant select on pmsdraaf to public ; 
