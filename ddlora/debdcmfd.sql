create table debdcmaf
(
  dbdcdeb     varchar2(8) default ' ' not null,
  dbdclin     varchar2(3) default ' ' not null,
  dbdccom     varchar2(70) default ' ' not null,
  dbdcspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debdcma1 primary key( 
dbdcdeb,
dbdclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
