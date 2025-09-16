create table reshecaf
(
  rehcrdt     varchar2(8) default ' ' not null,
  rehcrtm     varchar2(5) default ' ' not null,
  rehcrun     varchar2(4) default ' ' not null,
  rehccno     varchar2(2) default ' ' not null,
  rehccto     varchar2(127) default ' ' not null,
  rehcspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resheca1 primary key( 
rehcrdt,
rehcrtm,
rehcrun,
rehccno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
