create table ccsxhdaf
(
  ccxhsty     varchar2(3) default ' ' not null,
  ccxhkey     varchar2(10) default ' ' not null,
  ccxhdes     varchar2(35) default ' ' not null,
  ccxhsum     varchar2(10) default ' ' not null,
  ccxhspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsxhda1 primary key( 
ccxhsty,
ccxhkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsxhda2 on ccsxhdaf
(
ccxhsty,
ccxhsum,
ccxhkey
)
  tablespace pas_indx; 
create unique index ccsxhda3 on ccsxhdaf
(
ccxhsty,
ccxhdes,
ccxhkey
)
  tablespace pas_indx; 
