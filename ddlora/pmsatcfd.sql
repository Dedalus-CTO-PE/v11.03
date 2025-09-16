create table pmsatcaf
(
  pmatreqn    varchar2(10) default ' ' not null,
  pmattype    varchar2(3) default ' ' not null,
  pmatcntr    varchar2(3) default ' ' not null,
  pmatline    varchar2(3) default ' ' not null,
  pmatdata    varchar2(100) default ' ' not null,
  pmatspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsatca1 primary key( 
pmatreqn,
pmattype,
pmatcntr,
pmatline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
