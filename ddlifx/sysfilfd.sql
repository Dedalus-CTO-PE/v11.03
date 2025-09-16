create table sysfilaf
(
  syfisys     char(2) default ' ' not null,
  syfifil     char(2) default ' ' not null,
  syfiid3     char(3) default ' ' not null,
  syfides     char(35) default ' ' not null,
  syfiaud     decimal(1,0) default 0 not null,
  syfitio     decimal(1,0) default 0 not null,
  syfiid4     char(1) default ' ' not null,
  syfiasec    decimal(5,0) default 0 not null,
  syfiapos    decimal(3,0) default 0 not null,
  syfiloc     decimal(1,0) default 0 not null,
  syfirel     char(5) default ' ' not null,
  syfivers    decimal(3,0) default 0 not null,
  syfispa     char(58) default ' ' not null,
  lf          char(1)
);
create unique index sysfila1 on sysfilaf
(
syfisys,
syfifil
);
create unique index sysfila2 on sysfilaf
(
syfisys,
syfiid3
);
revoke all on sysfilaf from public ; 
grant select on sysfilaf to public ; 
