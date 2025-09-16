create table csmckyaf
(
  csckkwd     varchar2(15) default ' ' not null,
  csckcat     varchar2(7) default ' ' not null,
  csckspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmckya1 primary key( 
csckkwd,
csckcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index csmckya2 on csmckyaf
(
csckcat,
csckkwd
)
  tablespace pas_indx; 
