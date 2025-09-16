create table ibagkiaf
(
  ibgkgst     varchar2(6) default ' ' not null,
  ibgkkwd     varchar2(15) default ' ' not null,
  ibgkspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibagkia1 primary key( 
ibgkgst,
ibgkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibagkia2 on ibagkiaf
(
ibgkkwd,
ibgkgst
)
  tablespace pas_indx; 
