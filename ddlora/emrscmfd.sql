create table emrscmaf
(
  emscsite    varchar2(3) default ' ' not null,
  emscline    varchar2(2) default ' ' not null,
  emsccmnt    varchar2(70) default ' ' not null,
  emscspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrscma1 primary key( 
emscsite,
emscline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
