create table allrioaf
(
  alrivisn    varchar2(8) default ' ' not null,
  alridate    varchar2(8) default ' ' not null,
  alritime    varchar2(8) default ' ' not null,
  alrioutc    varchar2(3) default ' ' not null,
  alrispar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrioa1 primary key( 
alrivisn,
alridate,
alritime,
alrioutc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
