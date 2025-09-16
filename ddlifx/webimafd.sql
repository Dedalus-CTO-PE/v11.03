create table webimaaf
(
  wbiainvn    char(8) default ' ' not null,
  wbiadate    char(8) default ' ' not null,
  wbiatime    char(8) default ' ' not null,
  wbiabatn    char(8) default ' ' not null,
  wbiastat    decimal(2,0) default 0 not null,
  wbiatype    char(2) default ' ' not null,
  wbiaoper    char(10) default ' ' not null,
  wbiatrid    char(24) default ' ' not null,
  wbiaeror    char(4) default ' ' not null,
  wbiaerot    char(100) default ' ' not null,
  wbiamsid    char(36) default ' ' not null,
  wbiaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimaa1 on webimaaf
(
wbiainvn,
wbiadate,
wbiatime,
wbiatype
);
create unique index webimaa2 on webimaaf
(
wbiadate,
wbiatime,
wbiatype,
wbiainvn
);
create unique index webimaa3 on webimaaf
(
wbiainvn,
wbiabatn,
wbiadate,
wbiatime,
wbiatype
);
create unique index webimaa4 on webimaaf
(
wbiatrid,
wbiainvn,
wbiadate,
wbiatime,
wbiatype
);
revoke all on webimaaf from public ; 
grant select on webimaaf to public ; 
