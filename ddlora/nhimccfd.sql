create table nhimccaf
(
  nhmccsys    varchar2(2) default ' ' not null,
  nhmccod     varchar2(6) default ' ' not null,
  nhmcdes     varchar2(50) default ' ' not null,
  nhmcspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhimcca1 primary key( 
nhmccsys,
nhmccod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
