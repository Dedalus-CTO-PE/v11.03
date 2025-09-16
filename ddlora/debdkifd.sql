create table debdkiaf
(
  dbdkdeb     varchar2(8) default ' ' not null,
  dbdkkwd     varchar2(15) default ' ' not null,
  dbdkspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debdkia1 primary key( 
dbdkdeb,
dbdkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debdkia2 on debdkiaf
(
dbdkkwd,
dbdkdeb
)
  tablespace pas_indx; 
