create table patclcaf
(
  ptclurno    varchar2(8) default ' ' not null,
  ptcltype    varchar2(3) default ' ' not null,
  ptclfdat    varchar2(8) default ' ' not null,
  dptcllcn    varchar2(3) default ' ' not null,
  ptcltext    varchar2(50) default ' ' not null,
  ptclspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patclca1 primary key( 
ptclurno,
ptcltype,
ptclfdat,
dptcllcn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
