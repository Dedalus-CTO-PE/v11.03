create table sysscfaf
(
  syscsys     char(2) default ' ' not null,
  syscid3     char(3) default ' ' not null,
  syscdes     char(35) default ' ' not null,
  syscspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index sysscfa1 on sysscfaf
(
syscsys
);
create unique index sysscfa2 on sysscfaf
(
syscid3
);
revoke all on sysscfaf from public ; 
grant select on sysscfaf to public ; 
