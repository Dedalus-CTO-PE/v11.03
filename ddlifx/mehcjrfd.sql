create table mehcjraf
(
  dmhcradm    char(8) default ' ' not null,
  mhcrdate    char(8) default ' ' not null,
  mhcrtime    char(5) default ' ' not null,
  mhcrdeci    decimal(1,0) default 0 not null,
  mhcrldat    char(8) default ' ' not null,
  mhcrltim    char(5) default ' ' not null,
  mhcrreas    char(3) default ' ' not null,
  mhcrndat    char(8) default ' ' not null,
  mhcrspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehcjra1 on mehcjraf
(
dmhcradm,
mhcrdate,
mhcrtime
);
revoke all on mehcjraf from public ; 
grant select on mehcjraf to public ; 
