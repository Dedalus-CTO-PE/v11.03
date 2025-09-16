create table ccictyaf
(
  ccctsite    varchar2(6) default ' ' not null,
  cccttype    varchar2(6) default ' ' not null,
  ccctdept    varchar2(3) default ' ' not null,
  ccctspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccictya1 primary key( 
ccctsite,
cccttype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccictya2 on ccictyaf
(
ccctdept,
ccctsite,
cccttype
)
  tablespace pas_indx; 
