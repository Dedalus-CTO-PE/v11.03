create table scrtfcaf
(
  sctffun     varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrtfca1 primary key( 
sctffun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
