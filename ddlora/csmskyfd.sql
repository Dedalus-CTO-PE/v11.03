create table csmskyaf
(
  csskkwd     varchar2(15) default ' ' not null,
  csskcrd     varchar2(5) default ' ' not null,
  csskspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmskya1 primary key( 
csskkwd,
csskcrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index csmskya2 on csmskyaf
(
csskcrd,
csskkwd
)
  tablespace pas_indx; 
