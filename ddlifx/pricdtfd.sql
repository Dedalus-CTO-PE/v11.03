create table pricdtaf
(
  prcduniq    char(8) default ' ' not null,
  prcdprac    char(6) default ' ' not null,
  prcddoct    char(10) default ' ' not null,
  prcdpind    char(3) default ' ' not null,
  prcdctyp    char(3) default ' ' not null,
  prcdnote    char(6) default ' ' not null,
  prcdidat    char(8) default ' ' not null,
  prcditim    char(8) default ' ' not null,
  prcdiusr    char(10) default ' ' not null,
  prcdiocg    char(3) default ' ' not null,
  prcddind    char(1) default ' ' not null,
  prcdddat    char(8) default ' ' not null,
  prcddtim    char(8) default ' ' not null,
  prcddusr    char(10) default ' ' not null,
  prcddocg    char(3) default ' ' not null,
  prcdspar    char(127) default ' ' not null,
  lf          char(1)
);
create unique index pricdta1 on pricdtaf
(
prcduniq,
prcdprac,
prcddoct,
prcdpind,
prcdctyp,
prcdnote
);
revoke all on pricdtaf from public ; 
grant select on pricdtaf to public ; 
