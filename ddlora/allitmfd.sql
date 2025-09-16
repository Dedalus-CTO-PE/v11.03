create table allitmaf
(
  alitvisn    varchar2(8) default ' ' not null,
  alitencn    varchar2(8) default ' ' not null,
  alititmc    varchar2(2) default ' ' not null,
  alititmn    varchar2(9) default ' ' not null,
  alitspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allitma1 primary key( 
alitvisn,
alitencn,
alititmc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
