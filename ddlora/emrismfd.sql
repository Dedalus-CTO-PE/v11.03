create table emrismaf
(
  emistype    varchar2(1) default ' ' not null,
  emiscode    varchar2(10) default ' ' not null,
  emisnoin    number(10,0) default 0 not null,
  emisspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrisma1 primary key( 
emistype,
emiscode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
