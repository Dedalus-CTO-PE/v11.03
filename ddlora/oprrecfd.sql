create table oprrecaf
(
  oporuniq    varchar2(10) default ' ' not null,
  oporteam    varchar2(1) default ' ' not null,
  oporclnd    varchar2(3) default ' ' not null,
  oporline    varchar2(70) default ' ' not null,
  oporspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprreca1 primary key( 
oporuniq,
oporteam,
oporclnd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
