create table ccsbulaf
(
  ccbulin     varchar2(3) default ' ' not null,
  ccbudat     varchar2(70) default ' ' not null,
  ccbuspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsbula1 primary key( 
ccbulin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
