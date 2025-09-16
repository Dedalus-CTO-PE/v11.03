create table apsislaf
(
  apisisc     varchar2(1) default ' ' not null,
  apisdes     varchar2(35) default ' ' not null,
  apisdir     varchar2(30) default ' ' not null,
  apistyp     number(1,0) default 0 not null,
  apisres     varchar2(4) default ' ' not null,
  apisspa     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsisla1 primary key( 
apisisc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
