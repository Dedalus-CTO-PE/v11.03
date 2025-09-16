create table prigslaf
(
  prgsseid    char(4) default ' ' not null,
  prgsdebt    char(8) default ' ' not null,
  dprgssca    char(2) default ' ' not null,
  dprgsuni    char(8) default ' ' not null,
  prgsprac    char(6) default ' ' not null,
  prgssdoc    char(10) default ' ' not null,
  prgspind    char(3) default ' ' not null,
  prgsstat    char(1) default ' ' not null,
  prgsspar    char(18) default ' ' not null,
  lf          char(1)
);
create unique index prigsla1 on prigslaf
(
prgsseid,
prgsdebt,
dprgssca,
dprgsuni
);
revoke all on prigslaf from public ; 
grant select on prigslaf to public ; 
