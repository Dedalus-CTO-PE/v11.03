create table prifslaf
(
  prfsseid    char(4) default ' ' not null,
  prfsdebt    char(8) default ' ' not null,
  dprfssca    char(2) default ' ' not null,
  dprfsuni    char(8) default ' ' not null,
  prfsprac    char(6) default ' ' not null,
  prfssdoc    char(10) default ' ' not null,
  prfspind    char(3) default ' ' not null,
  prfsosmt    decimal(9,2) default 0 not null,
  prfsstat    char(1) default ' ' not null,
  prfsspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index prifsla1 on prifslaf
(
prfsseid,
prfsdebt,
dprfssca,
dprfsuni
);
revoke all on prifslaf from public ; 
grant select on prifslaf to public ; 
