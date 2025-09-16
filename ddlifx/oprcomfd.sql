create table oprcomaf
(
  opcmdate    char(8) default ' ' not null,
  opcmtime    char(5) default ' ' not null,
  opcmclin    char(6) default ' ' not null,
  dopcmlin    char(3) default ' ' not null,
  opcmtext    char(70) default ' ' not null,
  opcmhosp    char(3) default ' ' not null,
  opcmspar    char(8) default ' ' not null,
  lf          char(1)
);
create unique index oprcoma1 on oprcomaf
(
opcmdate,
opcmtime,
opcmclin,
dopcmlin,
opcmhosp
);
create unique index oprcoma2 on oprcomaf
(
opcmhosp,
opcmdate,
opcmtime,
opcmclin,
dopcmlin
);
revoke all on oprcomaf from public ; 
grant select on oprcomaf to public ; 
