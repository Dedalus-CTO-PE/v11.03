create table apssntaf
(
  apsncrd     char(5) default ' ' not null,
  apsnlin     char(3) default ' ' not null,
  apsndat     char(70) default ' ' not null,
  apsnspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index apssnta1 on apssntaf
(
apsncrd,
apsnlin
);
revoke all on apssntaf from public ; 
grant select on apssntaf to public ; 
