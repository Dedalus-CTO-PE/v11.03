create table apsckiaf
(
  apckcrd     varchar2(5) default ' ' not null,
  apckkwd     varchar2(15) default ' ' not null,
  apckspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsckia1 primary key( 
apckcrd,
apckkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsckia2 on apsckiaf
(
apckkwd,
apckcrd
)
  tablespace pas_indx; 
