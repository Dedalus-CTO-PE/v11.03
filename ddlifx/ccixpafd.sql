create table ccixpaaf
(
  ccxaprid    char(8) default ' ' not null,
  ccxascid    char(2) default ' ' not null,
  ccxauniq    char(3) default ' ' not null,
  ccxaauto    decimal(1,0) default 0 not null,
  ccxapcd1    decimal(3,0) default 0 not null,
  ccxapcd2    decimal(3,0) default 0 not null,
  ccxapcd3    decimal(3,0) default 0 not null,
  ccxapcd4    decimal(3,0) default 0 not null,
  ccxadcd1    decimal(3,0) default 0 not null,
  ccxadcd2    decimal(3,0) default 0 not null,
  ccxadcd3    decimal(3,0) default 0 not null,
  ccxaqtyv    decimal(3,0) default 0 not null,
  ccxaspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccixpaa1 on ccixpaaf
(
ccxaprid,
ccxascid,
ccxauniq
);
revoke all on ccixpaaf from public ; 
grant select on ccixpaaf to public ; 
