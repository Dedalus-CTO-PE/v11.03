create table pmsnplaf
(
  pmnpuniq    varchar2(24) default ' ' not null,
  pmnpurno    varchar2(8) default ' ' not null,
  pmnpcntr    varchar2(4) default ' ' not null,
  pmnphosp    varchar2(3) default ' ' not null,
  pmnprtyp    varchar2(2) default ' ' not null,
  pmnprcod    varchar2(50) default ' ' not null,
  pmnpruid    varchar2(10) default ' ' not null,
  pmnprsta    varchar2(1) default ' ' not null,
  pmnperor    varchar2(500) default ' ' not null,
  pmnprdat    varchar2(8) default ' ' not null,
  pmnprtim    varchar2(8) default ' ' not null,
  pmnpcdat    varchar2(8) default ' ' not null,
  pmnpctim    varchar2(8) default ' ' not null,
  pmnpcuid    varchar2(10) default ' ' not null,
  pmnpudat    varchar2(8) default ' ' not null,
  pmnputim    varchar2(8) default ' ' not null,
  pmnpuuid    varchar2(10) default ' ' not null,
  pmnpspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsnpla1 primary key( 
pmnpurno,
pmnprdat,
pmnprtim,
pmnpcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsnpla2 on pmsnplaf
(
pmnpuniq,
pmnprdat,
pmnprtim,
pmnpurno,
pmnpcntr
)
  tablespace pas_indx; 
create unique index pmsnpla3 on pmsnplaf
(
pmnprsta,
pmnpurno,
pmnprdat,
pmnprtim,
pmnpcntr
)
  tablespace pas_indx; 
create unique index pmsnpla4 on pmsnplaf
(
pmnphosp,
pmnpurno,
pmnprdat,
pmnprtim,
pmnpcntr
)
  tablespace pas_indx; 
create unique index pmsnpla5 on pmsnplaf
(
pmnprsta,
pmnprdat,
pmnprtim,
pmnpurno,
pmnpcntr
)
  tablespace pas_indx; 
create unique index pmsnpla6 on pmsnplaf
(
pmnphosp,
pmnprdat,
pmnprtim,
pmnpurno,
pmnpcntr
)
  tablespace pas_indx; 
