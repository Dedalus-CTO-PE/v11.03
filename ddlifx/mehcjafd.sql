create table mehcjaaf
(
  dmhcjadm    char(8) default ' ' not null,
  mhcjdate    char(8) default ' ' not null,
  mhcjtime    char(5) default ' ' not null,
  mhcjstat    char(3) default ' ' not null,
  mhcjspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehcjaa1 on mehcjaaf
(
dmhcjadm,
mhcjdate,
mhcjtime
);
create unique index mehcjaa2 on mehcjaaf
(
mhcjdate,
mhcjtime,
dmhcjadm
);
revoke all on mehcjaaf from public ; 
grant select on mehcjaaf to public ; 
