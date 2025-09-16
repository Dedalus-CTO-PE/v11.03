create table outdiagf
(
  dopdiout    varchar2(8) default ' ' not null,
  opdicode    varchar2(9) default ' ' not null,
  opdidesc    varchar2(50) default ' ' not null,
  opdicod2    varchar2(9) default ' ' not null,
  opdides2    varchar2(50) default ' ' not null,
  opdicod3    varchar2(9) default ' ' not null,
  opdides3    varchar2(50) default ' ' not null,
  opdicod4    varchar2(9) default ' ' not null,
  opdides4    varchar2(50) default ' ' not null,
  opdicod5    varchar2(9) default ' ' not null,
  opdides5    varchar2(50) default ' ' not null,
  opdispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outdiag1 primary key( 
dopdiout)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
