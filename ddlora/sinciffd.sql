create table sincifaf
(
  siifcat     varchar2(7) default ' ' not null,
  siifali     varchar2(60) default ' ' not null,
  siiftyp     varchar2(1) default ' ' not null,
  siifaty     number(1,0) default 0 not null,
  siifspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincifa1 primary key( 
siifali,
siifcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sincifa2 on sincifaf
(
siifcat,
siifali
)
  tablespace pas_indx; 
