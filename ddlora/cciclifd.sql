create table ccicliaf
(
  ccclsite    varchar2(6) default ' ' not null,
  ccclctyp    varchar2(6) default ' ' not null,
  ccclspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint cciclia1 primary key( 
ccclsite,
ccclctyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
