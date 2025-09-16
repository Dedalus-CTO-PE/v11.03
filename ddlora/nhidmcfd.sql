create table nhidmcaf
(
  nhdmdom     varchar2(4) default ' ' not null,
  nhdmdes     varchar2(50) default ' ' not null,
  nhdmdhb     varchar2(3) default ' ' not null,
  nhdmspa     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhidmca1 primary key( 
nhdmdom)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nhidmca2 on nhidmcaf
(
nhdmdes,
nhdmdom
)
  tablespace pas_indx; 
