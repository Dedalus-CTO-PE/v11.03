create table debbicaf
(
  dbbcdeb     varchar2(8) default ' ' not null,
  dbbcuni     varchar2(6) default ' ' not null,
  dbbclin     varchar2(3) default ' ' not null,
  dbbccom     varchar2(50) default ' ' not null,
  dbbcspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debbica1 primary key( 
dbbcdeb,
dbbcuni,
dbbclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
