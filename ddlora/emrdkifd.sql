create table emrdkiaf
(
  emdkdoc     varchar2(10) default ' ' not null,
  emdkkwd     varchar2(15) default ' ' not null,
  emdkspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdkia1 primary key( 
emdkdoc,
emdkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrdkia2 on emrdkiaf
(
emdkkwd,
emdkdoc
)
  tablespace pas_indx; 
