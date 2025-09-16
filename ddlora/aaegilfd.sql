create table aaegilaf
(
  aeilmain    varchar2(4) default ' ' not null,
  aeilcode    varchar2(2) default ' ' not null,
  aeildesc    varchar2(20) default ' ' not null,
  aeilspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegila1 primary key( 
aeilmain,
aeilcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
