create table alllhiaf
(
  allhurno    varchar2(8) default ' ' not null,
  allhdate    varchar2(8) default ' ' not null,
  allhtime    varchar2(8) default ' ' not null,
  allhltno    varchar2(3) default ' ' not null,
  allhrefn    varchar2(8) default ' ' not null,
  allhuser    varchar2(10) default ' ' not null,
  allhspar    varchar2(35) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alllhia1 primary key( 
allhurno,
allhrefn,
allhltno,
allhdate,
allhtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alllhia2 on alllhiaf
(
allhrefn,
allhurno,
allhltno,
allhdate,
allhtime
)
  tablespace pas_indx; 
create unique index alllhia3 on alllhiaf
(
allhrefn,
allhurno,
allhdate,
allhtime,
allhltno
)
  tablespace pas_indx; 
