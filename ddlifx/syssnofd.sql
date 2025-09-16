create table syssnoaf
(
  sysnsys     char(2) default ' ' not null,
  sysnlin     char(3) default ' ' not null,
  sysndat     char(70) default ' ' not null,
  sysnspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index syssnoa1 on syssnoaf
(
sysnsys,
sysnlin
);
revoke all on syssnoaf from public ; 
grant select on syssnoaf to public ; 
