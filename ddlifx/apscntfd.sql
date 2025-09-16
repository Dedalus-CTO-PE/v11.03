create table apscntaf
(
  apcncrd     char(5) default ' ' not null,
  apcnlin     char(3) default ' ' not null,
  apcndat     char(70) default ' ' not null,
  apcnspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index apscnta1 on apscntaf
(
apcncrd,
apcnlin
);
revoke all on apscntaf from public ; 
grant select on apscntaf to public ; 
