create table ibaportf
(
  ibapport    varchar2(2) default ' ' not null,
  ibapprog    varchar2(8) default ' ' not null,
  ibapuser    varchar2(4) default ' ' not null,
  ibapdate    varchar2(8) default ' ' not null,
  ibaptime    varchar2(8) default ' ' not null,
  ibapdesc    varchar2(30) default ' ' not null,
  ibapidnt    varchar2(3) default ' ' not null,
  ibapspar    varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaport1 primary key( 
ibapport)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
