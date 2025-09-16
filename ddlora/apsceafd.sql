create table apsceaaf
(
  apeaisc     varchar2(1) default ' ' not null,
  apeaord     varchar2(7) default ' ' not null,
  apeacrd     varchar2(5) default ' ' not null,
  apeadat     varchar2(8) default ' ' not null,
  apeaspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsceaa1 primary key( 
apeaisc,
apeaord)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsceaa2 on apsceaaf
(
apeacrd,
apeadat,
apeaisc,
apeaord
)
  tablespace pas_indx; 
