create table opraudrq
(
  oprqaudd    char(8) default ' ' not null,
  oprqaudt    char(8) default ' ' not null,
  oprqaudp    char(2) default ' ' not null,
  oprqaudr    char(1) default ' ' not null,
  oprqauds    decimal(1,0) default 0 not null,
  oprqaudo    char(4) default ' ' not null,
  oprquniq    char(10) default ' ' not null,
  oprqteam    char(1) default ' ' not null,
  oprqclss    char(3) default ' ' not null,
  oprqtype    char(1) default ' ' not null,
  oprqitem    char(15) default ' ' not null,
  oprqamnt    decimal(3,0) default 0 not null,
  oprqdcod    char(6) default ' ' not null,
  oprqchrg    char(1) default ' ' not null,
  oprqspar    char(29) default ' ' not null,
  lf          char(1)
);
create index opraudrq on opraudrq
(
oprqaudd,
oprqaudt,
oprqaudp,
oprqaudr
);
revoke all on opraudrq from public ; 
grant select on opraudrq to public ; 
create table oprreqaf
(
  oprquniq    char(10) default ' ' not null,
  oprqteam    char(1) default ' ' not null,
  oprqclss    char(3) default ' ' not null,
  oprqtype    char(1) default ' ' not null,
  oprqitem    char(15) default ' ' not null,
  oprqamnt    decimal(3,0) default 0 not null,
  oprqdcod    char(6) default ' ' not null,
  oprqchrg    char(1) default ' ' not null,
  oprqspar    char(29) default ' ' not null,
  lf          char(1)
);
create unique index oprreqa1 on oprreqaf
(
oprquniq,
oprqteam,
oprqdcod,
oprqclss,
oprqtype,
oprqitem
);
create unique index oprreqa2 on oprreqaf
(
oprquniq,
oprqteam,
oprqdcod,
oprqitem,
oprqtype,
oprqclss
);
create unique index oprreqa3 on oprreqaf
(
oprquniq,
oprqteam,
oprqdcod,
oprqtype,
oprqitem,
oprqclss
);
revoke all on oprreqaf from public ; 
grant select on oprreqaf to public ; 
