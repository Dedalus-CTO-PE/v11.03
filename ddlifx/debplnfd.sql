create table debplnaf
(
  dbpldeb     char(8) default ' ' not null,
  dbpluni     char(3) default ' ' not null,
  dbpllin     char(3) default ' ' not null,
  dbplcom     char(50) default ' ' not null,
  dbplspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index debplna1 on debplnaf
(
dbpldeb,
dbpluni,
dbpllin
);
revoke all on debplnaf from public ; 
grant select on debplnaf to public ; 
