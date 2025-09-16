create table oprthiaf
(
  opticode    char(15) default ' ' not null,
  optidesc    char(60) default ' ' not null,
  optimchg    char(9) default ' ' not null,
  optityim    char(3) default ' ' not null,
  optimanu    char(60) default ' ' not null,
  optisize    char(10) default ' ' not null,
  optisupp    char(30) default ' ' not null,
  opticost    decimal(14,2) default 0 not null,
  opticopc    char(10) default ' ' not null,
  optistat    char(1) default ' ' not null,
  optiregi    char(1) default ' ' not null,
  optibcod    char(60) default ' ' not null,
  optiaimp    char(1) default ' ' not null,
  optilotn    char(20) default ' ' not null,
  optispar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index oprthia1 on oprthiaf
(
opticode,
optibcod
);
create  index oprthia2 on oprthiaf
(
optidesc,
opticode
);
create unique index oprthia3 on oprthiaf
(
optibcod,
opticode
);
create unique index oprthia4 on oprthiaf
(
optiaimp,
optibcod,
opticode
);
revoke all on oprthiaf from public ; 
grant select on oprthiaf to public ; 
