create table syssnoaf
(
  sysnsys     varchar2(2) default ' ' not null,
  sysnlin     varchar2(3) default ' ' not null,
  sysndat     varchar2(70) default ' ' not null,
  sysnspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint syssnoa1 primary key( 
sysnsys,
sysnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
