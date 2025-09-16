create table scrsbgaf
(
  scsbpid     char(8) default ' ' not null,
  scsbsid     char(2) default ' ' not null,
  scsblin     char(2) default ' ' not null,
  scsbdat     char(80) default ' ' not null,
  scsbatt     char(80) default ' ' not null,
  scsbspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index scrsbga1 on scrsbgaf
(
scsbpid,
scsbsid,
scsblin
);
revoke all on scrsbgaf from public ; 
grant select on scrsbgaf to public ; 
