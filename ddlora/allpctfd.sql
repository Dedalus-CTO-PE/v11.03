create table allpctaf
(
  alpcurno    varchar2(8) default ' ' not null,
  alpctype    varchar2(2) default ' ' not null,
  alpccode    varchar2(10) default ' ' not null,
  alpcsite    varchar2(6) default ' ' not null,
  alpcadfl    varchar2(1) default ' ' not null,
  alpccdat    varchar2(8) default ' ' not null,
  alpcctim    varchar2(8) default ' ' not null,
  alpccuid    varchar2(10) default ' ' not null,
  alpcspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allpcta1 primary key( 
alpcurno,
alpctype,
alpccode,
alpcsite)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
