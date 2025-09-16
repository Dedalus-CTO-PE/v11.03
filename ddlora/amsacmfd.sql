create table amsacmaf
(
  amacreg     varchar2(2) default ' ' not null,
  amacass     varchar2(12) default ' ' not null,
  amaclin     varchar2(3) default ' ' not null,
  amaccom     varchar2(78) default ' ' not null,
  amacspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsacma1 primary key( 
amacreg,
amacass,
amaclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
