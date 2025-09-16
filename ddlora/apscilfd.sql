create table apscilaf
(
  apcldoc     varchar2(15) default ' ' not null,
  apclbch     varchar2(5) default ' ' not null,
  apclcrd     varchar2(5) default ' ' not null,
  apclref     varchar2(15) default ' ' not null,
  apclspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apscila1 primary key( 
apcldoc,
apclbch,
apclcrd,
apclref)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
