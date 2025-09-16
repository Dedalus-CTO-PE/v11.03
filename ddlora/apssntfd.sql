create table apssntaf
(
  apsncrd     varchar2(5) default ' ' not null,
  apsnlin     varchar2(3) default ' ' not null,
  apsndat     varchar2(70) default ' ' not null,
  apsnspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apssnta1 primary key( 
apsncrd,
apsnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
