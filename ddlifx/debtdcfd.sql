create table debtdcaf
(
  dbtddeb     char(8) default ' ' not null,
  dbtddln     char(3) default ' ' not null,
  dbtdlin     char(3) default ' ' not null,
  dbtdcom     char(50) default ' ' not null,
  dbtdspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index debtdca1 on debtdcaf
(
dbtddeb,
dbtddln,
dbtdlin
);
revoke all on debtdcaf from public ; 
grant select on debtdcaf to public ; 
