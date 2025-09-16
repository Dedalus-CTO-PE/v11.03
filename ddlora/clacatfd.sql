create table clacataf
(
  cactsite    varchar2(6) default ' ' not null,
  dcactuni    varchar2(2) default ' ' not null,
  cactcode    varchar2(2) default ' ' not null,
  cactchge    varchar2(2) default ' ' not null,
  cactspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint clacata1 primary key( 
cactsite,
dcactuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
