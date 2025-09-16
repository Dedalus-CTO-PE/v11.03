create table oprdphaf
(
  opdhcode    varchar2(6) default ' ' not null,
  opdhpref    varchar2(9) default ' ' not null,
  opdhdesc    varchar2(50) default ' ' not null,
  opdhhosp    varchar2(3) default ' ' not null,
  opdhspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprdpha1 primary key( 
opdhcode,
opdhpref,
opdhhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprdpha2 on oprdphaf
(
opdhdesc,
opdhcode,
opdhpref,
opdhhosp
)
  tablespace pas_indx; 
