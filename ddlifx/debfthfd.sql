create table debfthaf
(
  dbfhdeb     char(8) default ' ' not null,
  dbfhdty     char(1) default ' ' not null,
  dbfhdoc     char(12) default ' ' not null,
  dbfhddat    char(8) default ' ' not null,
  dbfhter     char(3) default ' ' not null,
  dbfhtot     decimal(14,2) default 0 not null,
  dbfhtax     decimal(14,2) default 0 not null,
  dbfhdprt    char(8) default ' ' not null,
  dbfhdsta    char(8) default ' ' not null,
  dbfhcdat    char(8) default ' ' not null,
  dbfhctim    char(6) default ' ' not null,
  dbfhcusr    char(4) default ' ' not null,
  dbfhur1     char(25) default ' ' not null,
  dbfhur2     char(25) default ' ' not null,
  dbfhud1     char(8) default ' ' not null,
  dbfhud2     char(8) default ' ' not null,
  dbfhuy1     char(1) default ' ' not null,
  dbfhuy2     char(1) default ' ' not null,
  dbfhuc1     char(3) default ' ' not null,
  dbfhuc2     char(3) default ' ' not null,
  dbfhstan    char(10) default ' ' not null,
  dbfhspa     char(8) default ' ' not null,
  lf          char(1)
);
create unique index debftha1 on debfthaf
(
dbfhdeb,
dbfhdty,
dbfhdoc
);
create unique index debftha2 on debfthaf
(
dbfhdeb,
dbfhddat,
dbfhdty,
dbfhdoc
);
create unique index debftha3 on debfthaf
(
dbfhdoc,
dbfhdty,
dbfhdeb
);
create unique index debftha4 on debfthaf
(
dbfhdeb,
dbfhdsta,
dbfhdty,
dbfhdoc
);
create unique index debftha5 on debfthaf
(
dbfhcdat,
dbfhctim,
dbfhdoc,
dbfhdty,
dbfhdeb
);
create unique index debftha6 on debfthaf
(
dbfhdty,
dbfhdoc,
dbfhdeb
);
create unique index debftha7 on debfthaf
(
dbfhdty,
dbfhur1,
dbfhdoc,
dbfhdeb
);
revoke all on debfthaf from public ; 
grant select on debfthaf to public ; 
