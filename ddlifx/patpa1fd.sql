create table patpa1af
(
  paurno      char(8) default ' ' not null,
  padate      char(8) default ' ' not null,
  patime      char(8) default ' ' not null,
  paadd1      char(35) default ' ' not null,
  paadd2      char(35) default ' ' not null,
  pasubr      char(35) default ' ' not null,
  paadd4      char(35) default ' ' not null,
  papost      char(8) default ' ' not null,
  patelep     char(20) default ' ' not null,
  pateleb     char(20) default ' ' not null,
  ptpador     char(3) default ' ' not null,
  ptpamobl    char(20) default ' ' not null,
  ptpaemal    char(80) default ' ' not null,
  ptpacdte    char(8) default ' ' not null,
  ptpactim    char(8) default ' ' not null,
  ptpawebc    char(10) default ' ' not null,
  ptpalupd    char(8) default ' ' not null,
  ptpalupt    char(8) default ' ' not null,
  ptpawebu    char(10) default ' ' not null,
  ptpaosms    char(1) default ' ' not null,
  ptpaspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index patpa1a1 on patpa1af
(
paurno,
padate,
patime
);
create unique index patpa1a2 on patpa1af
(
padate,
patime,
paurno
);
revoke all on patpa1af from public ; 
grant select on patpa1af to public ; 
