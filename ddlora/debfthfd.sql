create table debfthaf
(
  dbfhdeb     varchar2(8) default ' ' not null,
  dbfhdty     varchar2(1) default ' ' not null,
  dbfhdoc     varchar2(12) default ' ' not null,
  dbfhddat    varchar2(8) default ' ' not null,
  dbfhter     varchar2(3) default ' ' not null,
  dbfhtot     number(14,2) default 0 not null,
  dbfhtax     number(14,2) default 0 not null,
  dbfhdprt    varchar2(8) default ' ' not null,
  dbfhdsta    varchar2(8) default ' ' not null,
  dbfhcdat    varchar2(8) default ' ' not null,
  dbfhctim    varchar2(6) default ' ' not null,
  dbfhcusr    varchar2(4) default ' ' not null,
  dbfhur1     varchar2(25) default ' ' not null,
  dbfhur2     varchar2(25) default ' ' not null,
  dbfhud1     varchar2(8) default ' ' not null,
  dbfhud2     varchar2(8) default ' ' not null,
  dbfhuy1     varchar2(1) default ' ' not null,
  dbfhuy2     varchar2(1) default ' ' not null,
  dbfhuc1     varchar2(3) default ' ' not null,
  dbfhuc2     varchar2(3) default ' ' not null,
  dbfhstan    varchar2(10) default ' ' not null,
  dbfhspa     varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debftha1 primary key( 
dbfhdeb,
dbfhdty,
dbfhdoc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debftha2 on debfthaf
(
dbfhdeb,
dbfhddat,
dbfhdty,
dbfhdoc
)
  tablespace pas_indx; 
create unique index debftha3 on debfthaf
(
dbfhdoc,
dbfhdty,
dbfhdeb
)
  tablespace pas_indx; 
create unique index debftha4 on debfthaf
(
dbfhdeb,
dbfhdsta,
dbfhdty,
dbfhdoc
)
  tablespace pas_indx; 
create unique index debftha5 on debfthaf
(
dbfhcdat,
dbfhctim,
dbfhdoc,
dbfhdty,
dbfhdeb
)
  tablespace pas_indx; 
create unique index debftha6 on debfthaf
(
dbfhdty,
dbfhdoc,
dbfhdeb
)
  tablespace pas_indx; 
create unique index debftha7 on debfthaf
(
dbfhdty,
dbfhur1,
dbfhdoc,
dbfhdeb
)
  tablespace pas_indx; 
