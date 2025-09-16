create table pmsaidaf
(
  pmaiurno    varchar2(8) default ' ' not null,
  pmaitype    varchar2(3) default ' ' not null,
  pmaialid    varchar2(20) default ' ' not null,
  pmaidisu    varchar2(1) default ' ' not null,
  pmaihosp    varchar2(3) default ' ' not null,
  pmairdat    varchar2(8) default ' ' not null,
  pmaicrdt    varchar2(8) default ' ' not null,
  pmaicrtm    varchar2(8) default ' ' not null,
  pmaicrud    varchar2(10) default ' ' not null,
  pmaiupdt    varchar2(8) default ' ' not null,
  pmaiuptm    varchar2(8) default ' ' not null,
  pmaiupud    varchar2(10) default ' ' not null,
  pmaivsta    varchar2(1) default ' ' not null,
  pmaiasta    varchar2(1) default ' ' not null,
  pmaiadat    varchar2(8) default ' ' not null,
  pmaiatim    varchar2(8) default ' ' not null,
  pmaisurn    varchar2(40) default ' ' not null,
  pmaigivn    varchar2(40) default ' ' not null,
  pmaidtmr    varchar2(8) default ' ' not null,
  pmaitmmr    varchar2(8) default ' ' not null,
  pmaiusmr    varchar2(10) default ' ' not null,
  pmaispar    varchar2(74) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsaida1 primary key( 
pmaiurno,
pmaitype,
pmaialid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsaida2 on pmsaidaf
(
pmaialid,
pmaiurno,
pmaitype
)
  tablespace pas_indx; 
