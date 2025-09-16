create table oprotsaf
(
  opotdate    varchar2(8) default ' ' not null,
  opottype    varchar2(3) default ' ' not null,
  opotperd    varchar2(1) default ' ' not null,
  opotuser    varchar2(3) default ' ' not null,
  opotncas    number(6,0) default 0 not null,
  opotnopr    number(6,0) default 0 not null,
  opottime    number(6,0) default 0 not null,
  opotdofw    number(1,0) default 0 not null,
  opotspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprotsa1 primary key( 
opotdate,
opottype,
opotperd,
opotuser)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
