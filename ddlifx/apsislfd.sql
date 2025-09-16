create table apsislaf
(
  apisisc     char(1) default ' ' not null,
  apisdes     char(35) default ' ' not null,
  apisdir     char(30) default ' ' not null,
  apistyp     decimal(1,0) default 0 not null,
  apisres     char(4) default ' ' not null,
  apisspa     char(16) default ' ' not null,
  lf          char(1)
);
create unique index apsisla1 on apsislaf
(
apisisc
);
revoke all on apsislaf from public ; 
grant select on apsislaf to public ; 
