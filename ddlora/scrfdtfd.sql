create table scrfdtaf
(
  scfdfid     varchar2(8) default ' ' not null,
  scfdpid     varchar2(8) default ' ' not null,
  scfdlin     varchar2(5) default ' ' not null,
  scfdcod     varchar2(80) default ' ' not null,
  scfdspa     varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrfdta1 primary key( 
scfdfid,
scfdpid,
scfdlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
