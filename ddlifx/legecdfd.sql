create table legecdaf
(
  dlptedad    char(8) default ' ' not null,
  dlptedep    char(2) default ' ' not null,
  dlptedcn    char(2) default ' ' not null,
  lptedcod    char(9) default ' ' not null,
  lptedtyp    char(1) default ' ' not null,
  dlptedun    char(2) default ' ' not null,
  lpteddtc    char(8) default ' ' not null,
  lptedope    char(4) default ' ' not null,
  lptedspa    char(63) default ' ' not null,
  lf          char(1)
);
create unique index legecda1 on legecdaf
(
dlptedad,
dlptedep,
dlptedcn
);
create unique index legecda2 on legecdaf
(
dlptedad,
dlptedun,
dlptedep,
dlptedcn
);
create unique index legecda3 on legecdaf
(
lptedcod,
dlptedad,
dlptedun,
dlptedep,
dlptedcn
);
revoke all on legecdaf from public ; 
grant select on legecdaf to public ; 
