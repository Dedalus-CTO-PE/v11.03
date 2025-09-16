create table pmspitaf
(
  pmpiurno    varchar2(8) default ' ' not null,
  pmpiatyp    varchar2(3) default ' ' not null,
  pmpiclam    varchar2(3) default ' ' not null,
  pmpifund    varchar2(6) default ' ' not null,
  pmpitabt    varchar2(3) default ' ' not null,
  pmpiedat    varchar2(8) default ' ' not null,
  pmpiicnt    varchar2(5) default ' ' not null,
  pmpirint    varchar2(3) default ' ' not null,
  pmpifdat    varchar2(8) default ' ' not null,
  pmpitdat    varchar2(8) default ' ' not null,
  pmpidelt    varchar2(1) default ' ' not null,
  pmpicdat    varchar2(8) default ' ' not null,
  pmpictim    varchar2(8) default ' ' not null,
  pmpicuid    varchar2(10) default ' ' not null,
  pmpiudat    varchar2(8) default ' ' not null,
  pmpiutim    varchar2(8) default ' ' not null,
  pmpiuuid    varchar2(10) default ' ' not null,
  pmpiddat    varchar2(8) default ' ' not null,
  pmpidtim    varchar2(8) default ' ' not null,
  pmpiduid    varchar2(10) default ' ' not null,
  pmpispar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmspita1 primary key( 
pmpiurno,
pmpiatyp,
pmpiclam,
pmpifund,
pmpitabt,
pmpiedat,
pmpiicnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
