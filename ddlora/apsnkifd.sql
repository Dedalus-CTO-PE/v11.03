create table apsnkiaf
(
  apnkbatc    varchar2(5) default ' ' not null,
  apnkuniq    varchar2(3) default ' ' not null,
  apnkkwd     varchar2(15) default ' ' not null,
  apnkspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsnkia1 primary key( 
apnkbatc,
apnkuniq,
apnkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsnkia2 on apsnkiaf
(
apnkkwd,
apnkbatc,
apnkuniq
)
  tablespace pas_indx; 
