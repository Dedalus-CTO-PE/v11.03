create table scrvcmaf
(
  scvcsid     varchar2(12) default ' ' not null,
  scvcver     varchar2(3) default ' ' not null,
  scvclin     varchar2(3) default ' ' not null,
  scvcdat     varchar2(70) default ' ' not null,
  scvcspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrvcma1 primary key( 
scvcsid,
scvcver,
scvclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
