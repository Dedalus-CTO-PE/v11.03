create table oprsdtaf
(
  opsduniq    varchar2(10) default ' ' not null,
  opsdtnum    varchar2(1) default ' ' not null,
  opsdstyp    varchar2(2) default ' ' not null,
  opsdsnam    varchar2(60) default ' ' not null,
  opsdsdat    varchar2(8) default ' ' not null,
  opsdstim    varchar2(8) default ' ' not null,
  opsdedat    varchar2(8) default ' ' not null,
  opsdetim    varchar2(8) default ' ' not null,
  opsdslev    varchar2(3) default ' ' not null,
  opsdstcc    varchar2(3) default ' ' not null,
  opsdfict    varchar2(1) default ' ' not null,
  opsduyn1    varchar2(1) default ' ' not null,
  opsdspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprsdta1 primary key( 
opsduniq,
opsdtnum,
opsdstyp,
opsdsnam,
opsdsdat,
opsdstim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
