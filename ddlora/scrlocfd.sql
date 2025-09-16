create table scrlocaf
(
  sclopid     varchar2(8) default ' ' not null,
  sclouid     varchar2(10) default ' ' not null,
  sclospa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrloca1 primary key( 
sclopid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
