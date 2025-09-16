create table resdecaf
(
  redcrdt     varchar2(8) default ' ' not null,
  redcrtm     varchar2(5) default ' ' not null,
  redcrun     varchar2(4) default ' ' not null,
  redcsid     varchar2(4) default ' ' not null,
  redclno     varchar2(3) default ' ' not null,
  redctxt     varchar2(127) default ' ' not null,
  redcspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resdeca1 primary key( 
redcrdt,
redcrtm,
redcrun,
redcsid,
redclno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
