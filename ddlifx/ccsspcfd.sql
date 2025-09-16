create table ccsspcaf
(
  ccspmid     char(3) default ' ' not null,
  ccspdes     char(35) default ' ' not null,
  ccspfyr     char(4) default ' ' not null,
  ccspfpr     char(2) default ' ' not null,
  ccsptyr     char(4) default ' ' not null,
  ccsptpr     char(2) default ' ' not null,
  ccspmod     char(4) default ' ' not null,
  ccspspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index ccsspca1 on ccsspcaf
(
ccspmid
);
revoke all on ccsspcaf from public ; 
grant select on ccsspcaf to public ; 
