create table mehlvsaf
(
  mhlvdate    char(6) default ' ' not null,
  mhlvstat    char(3) default ' ' not null,
  mhlvstrt    decimal(6,0) default 0 not null,
  mhlvleav    decimal(6,0) default 0 not null,
  mhlvretn    decimal(6,0) default 0 not null,
  mhlvdsch    decimal(6,0) default 0 not null,
  mhlvdead    decimal(6,0) default 0 not null,
  mhlvlday    decimal(8,0) default 0 not null,
  mhlvrday    decimal(8,0) default 0 not null,
  mhlvspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mehlvsa1 on mehlvsaf
(
mhlvdate,
mhlvstat
);
revoke all on mehlvsaf from public ; 
grant select on mehlvsaf to public ; 
