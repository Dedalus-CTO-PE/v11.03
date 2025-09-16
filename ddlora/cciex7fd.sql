create table cciex7af
(
  clexstat    varchar2(1) default ' ' not null,
  dclextyp    varchar2(2) default ' ' not null,
  dclexvis    varchar2(8) default ' ' not null,
  clexspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint cciex7a1 primary key( 
clexstat,
dclextyp,
dclexvis)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
