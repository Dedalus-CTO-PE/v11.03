create table pathdoct
(
  dhdcode     varchar2(3) default ' ' not null,
  hdname      varchar2(14) default ' ' not null,
  hdserv      varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathdoc1 primary key( 
dhdcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
