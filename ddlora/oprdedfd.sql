create table oprdedaf
(
  opdduniq    varchar2(10) default ' ' not null,
  opddtype    varchar2(3) default ' ' not null,
  opddline    varchar2(3) default ' ' not null,
  opdddata    varchar2(70) default ' ' not null,
  opddspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprdeda1 primary key( 
opdduniq,
opddtype,
opddline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
