create table legcliaf
(
  locasite    char(6) default ' ' not null,
  locaclin    char(6) default ' ' not null,
  locadoct    char(6) default ' ' not null,
  locadesc    char(30) default ' ' not null,
  locaccon    char(6) default ' ' not null,
  lotcliac    char(1) default ' ' not null,
  locaspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index legclia1 on legcliaf
(
locasite,
locaclin
);
create unique index legclia2 on legcliaf
(
locaclin
);
create unique index legclia3 on legcliaf
(
locadoct,
locaclin
);
create unique index legclia4 on legcliaf
(
locadesc,
locaclin
);
revoke all on legcliaf from public ; 
grant select on legcliaf to public ; 
