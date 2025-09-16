create table pmsovvaf
(
  pmovurno    varchar2(8) default ' ' not null,
  pmovdate    varchar2(8) default ' ' not null,
  pmovtime    varchar2(8) default ' ' not null,
  dpmovcnt    varchar2(2) default ' ' not null,
  pmovhosp    varchar2(3) default ' ' not null,
  pmovtrid    varchar2(24) default ' ' not null,
  pmovsnam    varchar2(40) default ' ' not null,
  pmovfnam    varchar2(40) default ' ' not null,
  pmovvetn    varchar2(9) default ' ' not null,
  pmovprdt    varchar2(8) default ' ' not null,
  pmovstat    varchar2(4) default ' ' not null,
  pmoveror    varchar2(100) default ' ' not null,
  pmovvenc    varchar2(4) default ' ' not null,
  pmovspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsovva1 primary key( 
pmovurno,
pmovdate,
pmovtime,
dpmovcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsovva2 on pmsovvaf
(
pmovhosp,
pmovdate,
pmovtime,
pmovurno,
dpmovcnt
)
  tablespace pas_indx; 
