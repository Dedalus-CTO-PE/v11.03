create table mehlvsaf
(
  mhlvdate    varchar2(6) default ' ' not null,
  mhlvstat    varchar2(3) default ' ' not null,
  mhlvstrt    number(6,0) default 0 not null,
  mhlvleav    number(6,0) default 0 not null,
  mhlvretn    number(6,0) default 0 not null,
  mhlvdsch    number(6,0) default 0 not null,
  mhlvdead    number(6,0) default 0 not null,
  mhlvlday    number(8,0) default 0 not null,
  mhlvrday    number(8,0) default 0 not null,
  mhlvspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehlvsa1 primary key( 
mhlvdate,
mhlvstat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
