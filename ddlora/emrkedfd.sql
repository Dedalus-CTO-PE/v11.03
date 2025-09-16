create table emrkedaf
(
  emeditm     varchar2(9) default ' ' not null,
  emedkwd     varchar2(15) default ' ' not null,
  emedspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrkeda1 primary key( 
emeditm,
emedkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrkeda2 on emrkedaf
(
emedkwd,
emeditm
)
  tablespace pas_indx; 
