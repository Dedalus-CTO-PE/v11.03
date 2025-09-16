create table oprcomaf
(
  opcmdate    varchar2(8) default ' ' not null,
  opcmtime    varchar2(5) default ' ' not null,
  opcmclin    varchar2(6) default ' ' not null,
  dopcmlin    varchar2(3) default ' ' not null,
  opcmtext    varchar2(70) default ' ' not null,
  opcmhosp    varchar2(3) default ' ' not null,
  opcmspar    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcoma1 primary key( 
opcmdate,
opcmtime,
opcmclin,
dopcmlin,
opcmhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprcoma2 on oprcomaf
(
opcmhosp,
opcmdate,
opcmtime,
opcmclin,
dopcmlin
)
  tablespace pas_indx; 
