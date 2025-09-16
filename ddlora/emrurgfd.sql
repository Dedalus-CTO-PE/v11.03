create table emrurgaf
(
  emuredat    varchar2(8) default ' ' not null,
  emuresta    varchar2(3) default ' ' not null,
  emurtria    varchar2(3) default ' ' not null,
  emurvtyp    varchar2(3) default ' ' not null,
  emurmdbc    varchar2(30) default ' ' not null,
  emururgv    varchar2(6) default ' ' not null,
  emururgd    varchar2(80) default ' ' not null,
  emurcdat    varchar2(8) default ' ' not null,
  emurctim    varchar2(8) default ' ' not null,
  emurcuid    varchar2(10) default ' ' not null,
  emurudat    varchar2(8) default ' ' not null,
  emurutim    varchar2(8) default ' ' not null,
  emuruuid    varchar2(10) default ' ' not null,
  emurspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrurga1 primary key( 
emuredat,
emuresta,
emurtria,
emurvtyp,
emurmdbc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrurga2 on emrurgaf
(
emuresta,
emurtria,
emurvtyp,
emurmdbc,
emuredat
)
  tablespace pas_indx; 
create unique index emrurga3 on emrurgaf
(
emurtria,
emurvtyp,
emurmdbc,
emuredat,
emuresta
)
  tablespace pas_indx; 
create unique index emrurga4 on emrurgaf
(
emurvtyp,
emurmdbc,
emuredat,
emuresta,
emurtria
)
  tablespace pas_indx; 
create unique index emrurga5 on emrurgaf
(
emurmdbc,
emuredat,
emuresta,
emurtria,
emurvtyp
)
  tablespace pas_indx; 
