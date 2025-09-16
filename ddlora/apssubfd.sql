create table apssubaf
(
  apsbsup     varchar2(5) default ' ' not null,
  apsbdat     varchar2(6) default ' ' not null,
  apsbpam     number(14,2) default 0 not null,
  apsbpbd     number(14,2) default 0 not null,
  apsbram     number(14,2) default 0 not null,
  apsbrbd     number(14,2) default 0 not null,
  apsbiam     number(14,2) default 0 not null,
  apsbibd     number(14,2) default 0 not null,
  apsbspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apssuba1 primary key( 
apsbsup,
apsbdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
