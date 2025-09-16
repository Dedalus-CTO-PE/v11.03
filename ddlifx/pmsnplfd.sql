create table pmsnplaf
(
  pmnpuniq    char(24) default ' ' not null,
  pmnpurno    char(8) default ' ' not null,
  pmnpcntr    char(4) default ' ' not null,
  pmnphosp    char(3) default ' ' not null,
  pmnprtyp    char(2) default ' ' not null,
  pmnprcod    char(50) default ' ' not null,
  pmnpruid    char(10) default ' ' not null,
  pmnprsta    char(1) default ' ' not null,
  pmnperor    char(500) default ' ' not null,
  pmnprdat    char(8) default ' ' not null,
  pmnprtim    char(8) default ' ' not null,
  pmnpcdat    char(8) default ' ' not null,
  pmnpctim    char(8) default ' ' not null,
  pmnpcuid    char(10) default ' ' not null,
  pmnpudat    char(8) default ' ' not null,
  pmnputim    char(8) default ' ' not null,
  pmnpuuid    char(10) default ' ' not null,
  pmnpspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsnpla1 on pmsnplaf
(
pmnpurno,
pmnprdat,
pmnprtim,
pmnpcntr
);
create unique index pmsnpla2 on pmsnplaf
(
pmnpuniq,
pmnprdat,
pmnprtim,
pmnpurno,
pmnpcntr
);
create unique index pmsnpla3 on pmsnplaf
(
pmnprsta,
pmnpurno,
pmnprdat,
pmnprtim,
pmnpcntr
);
create unique index pmsnpla4 on pmsnplaf
(
pmnphosp,
pmnpurno,
pmnprdat,
pmnprtim,
pmnpcntr
);
create unique index pmsnpla5 on pmsnplaf
(
pmnprsta,
pmnprdat,
pmnprtim,
pmnpurno,
pmnpcntr
);
create unique index pmsnpla6 on pmsnplaf
(
pmnphosp,
pmnprdat,
pmnprtim,
pmnpurno,
pmnpcntr
);
revoke all on pmsnplaf from public ; 
grant select on pmsnplaf to public ; 
