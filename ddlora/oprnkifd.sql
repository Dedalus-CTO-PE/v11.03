create table oprnkiaf
(
  opnkitm     varchar2(6) default ' ' not null,
  opnkkwd     varchar2(15) default ' ' not null,
  opnkspa     varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprnkia1 primary key( 
opnkitm,
opnkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprnkia2 on oprnkiaf
(
opnkkwd,
opnkitm
)
  tablespace pas_indx; 
