create table apsscxaf
(
  apsccod     varchar2(12) default ' ' not null,
  apscled     varchar2(2) default ' ' not null,
  apscsub     varchar2(12) default ' ' not null,
  apsctyp     varchar2(1) default ' ' not null,
  apscspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsscxa1 primary key( 
apsccod,
apscled,
apscsub)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsscxa2 on apsscxaf
(
apscled,
apscsub,
apsccod
)
  tablespace pas_indx; 
