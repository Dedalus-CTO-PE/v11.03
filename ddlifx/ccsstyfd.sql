create table ccsstyaf
(
  ccststy     char(3) default ' ' not null,
  ccstdes     char(35) default ' ' not null,
  ccstlen     decimal(3,0) default 0 not null,
  ccstjr      char(1) default ' ' not null,
  ccstzf      char(1) default ' ' not null,
  ccstde      char(1) default ' ' not null,
  ccstspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsstya1 on ccsstyaf
(
ccststy
);
create unique index ccsstya2 on ccsstyaf
(
ccstdes,
ccststy
);
revoke all on ccsstyaf from public ; 
grant select on ccsstyaf to public ; 
