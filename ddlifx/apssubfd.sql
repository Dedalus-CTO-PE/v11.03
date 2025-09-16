create table apssubaf
(
  apsbsup     char(5) default ' ' not null,
  apsbdat     char(6) default ' ' not null,
  apsbpam     decimal(14,2) default 0 not null,
  apsbpbd     decimal(14,2) default 0 not null,
  apsbram     decimal(14,2) default 0 not null,
  apsbrbd     decimal(14,2) default 0 not null,
  apsbiam     decimal(14,2) default 0 not null,
  apsbibd     decimal(14,2) default 0 not null,
  apsbspa     char(18) default ' ' not null,
  lf          char(1)
);
create unique index apssuba1 on apssubaf
(
apsbsup,
apsbdat
);
revoke all on apssubaf from public ; 
grant select on apssubaf to public ; 
