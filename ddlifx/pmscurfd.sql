create table pmscuraf
(
  pmcuvisn    char(8) default ' ' not null,
  pmcusurn    char(40) default ' ' not null,
  pmcugnam    char(40) default ' ' not null,
  pmcuurno    char(8) default ' ' not null,
  pmcudate    char(8) default ' ' not null,
  pmculocn    char(50) default ' ' not null,
  pmcusyst    char(1) default ' ' not null,
  pmcuosit    char(6) default ' ' not null,
  pmcuhosp    char(3) default ' ' not null,
  pmcugnm2    char(40) default ' ' not null,
  pmcutsta    char(2) default ' ' not null,
  pmcutloc    char(6) default ' ' not null,
  pmcuspar    char(33) default ' ' not null,
  lf          char(1)
);
create unique index pmscura1 on pmscuraf
(
pmcuvisn
);
create unique index pmscura2 on pmscuraf
(
pmcusurn,
pmcugnam,
pmcuurno,
pmcuvisn
);
create unique index pmscura3 on pmscuraf
(
pmcuurno,
pmcuvisn
);
create unique index pmscura4 on pmscuraf
(
pmcudate,
pmcuvisn
);
create unique index pmscura5 on pmscuraf
(
pmcusyst,
pmcusurn,
pmcugnam,
pmcuurno,
pmcuvisn
);
create unique index pmscura6 on pmscuraf
(
pmcuhosp,
pmcusurn,
pmcugnam,
pmcuurno,
pmcuvisn
);
create unique index pmscura7 on pmscuraf
(
pmcugnam,
pmcusurn,
pmcuvisn
);
revoke all on pmscuraf from public ; 
grant select on pmscuraf to public ; 
