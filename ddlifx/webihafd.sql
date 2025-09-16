create table webihaaf
(
  wbiiinvn    char(8) default ' ' not null,
  wbiidate    char(8) default ' ' not null,
  wbiitime    char(8) default ' ' not null,
  wbiibatn    char(8) default ' ' not null,
  wbiistat    decimal(2,0) default 0 not null,
  wbiitype    char(2) default ' ' not null,
  wbiioper    char(10) default ' ' not null,
  wbiitrid    char(24) default ' ' not null,
  wbiieror    char(4) default ' ' not null,
  wbiierot    char(100) default ' ' not null,
  wbiimsid    char(36) default ' ' not null,
  wbiispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihaa1 on webihaaf
(
wbiiinvn,
wbiidate,
wbiitime,
wbiitype
);
create unique index webihaa2 on webihaaf
(
wbiidate,
wbiitime,
wbiitype,
wbiiinvn
);
create unique index webihaa3 on webihaaf
(
wbiiinvn,
wbiibatn,
wbiidate,
wbiitime,
wbiitype
);
create unique index webihaa4 on webihaaf
(
wbiitrid,
wbiiinvn,
wbiidate,
wbiitime,
wbiitype
);
create unique index webihaa5 on webihaaf
(
wbiimsid,
wbiiinvn,
wbiidate,
wbiitime,
wbiitype
);
revoke all on webihaaf from public ; 
grant select on webihaaf to public ; 
