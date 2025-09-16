create table ccsspcaf
(
  ccspmid     varchar2(3) default ' ' not null,
  ccspdes     varchar2(35) default ' ' not null,
  ccspfyr     varchar2(4) default ' ' not null,
  ccspfpr     varchar2(2) default ' ' not null,
  ccsptyr     varchar2(4) default ' ' not null,
  ccsptpr     varchar2(2) default ' ' not null,
  ccspmod     varchar2(4) default ' ' not null,
  ccspspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsspca1 primary key( 
ccspmid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
