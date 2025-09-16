create table reshedaf
(
  rehdrdt     varchar2(8) default ' ' not null,
  rehdrtm     varchar2(5) default ' ' not null,
  rehdrun     varchar2(4) default ' ' not null,
  rehdrci     varchar2(300) default ' ' not null,
  rehdspa     varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resheda1 primary key( 
rehdrdt,
rehdrtm,
rehdrun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
