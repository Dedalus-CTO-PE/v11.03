create table emrexpaf
(
  emexuniq    varchar2(10) default ' ' not null,
  emexurno    varchar2(8) default ' ' not null,
  emexsnam    varchar2(20) default ' ' not null,
  emexgnam    varchar2(25) default ' ' not null,
  emexsex     varchar2(1) default ' ' not null,
  emexdob     varchar2(8) default ' ' not null,
  emexage     varchar2(3) default ' ' not null,
  emexcomp    varchar2(3) default ' ' not null,
  emexcom1    varchar2(50) default ' ' not null,
  emexcom2    varchar2(50) default ' ' not null,
  emexcom3    varchar2(50) default ' ' not null,
  emexcom4    varchar2(50) default ' ' not null,
  emexcom5    varchar2(50) default ' ' not null,
  emexcom6    varchar2(50) default ' ' not null,
  emextran    varchar2(3) default ' ' not null,
  emexambl    varchar2(15) default ' ' not null,
  emexedat    varchar2(8) default ' ' not null,
  emexetim    varchar2(5) default ' ' not null,
  emexgpcd    varchar2(10) default ' ' not null,
  emexcuid    varchar2(10) default ' ' not null,
  emexcdat    varchar2(8) default ' ' not null,
  emexctim    varchar2(8) default ' ' not null,
  emexuuid    varchar2(10) default ' ' not null,
  emexudat    varchar2(8) default ' ' not null,
  emexutim    varchar2(8) default ' ' not null,
  emexatsr    varchar2(3) default ' ' not null,
  emexacps    varchar2(3) default ' ' not null,
  emexacpt    varchar2(3) default ' ' not null,
  emexetad    varchar2(8) default ' ' not null,
  emexetat    varchar2(8) default ' ' not null,
  emextrig    varchar2(3) default ' ' not null,
  emexexpl    varchar2(3) default ' ' not null,
  emexsite    varchar2(3) default ' ' not null,
  emexcont    varchar2(1) default ' ' not null,
  emexdelt    varchar2(1) default ' ' not null,
  emexremv    varchar2(3) default ' ' not null,
  emextsrc    varchar2(5) default ' ' not null,
  emexcall    varchar2(100) default ' ' not null,
  emexain1    varchar2(100) default ' ' not null,
  emexain2    varchar2(100) default ' ' not null,
  emexain3    varchar2(100) default ' ' not null,
  emexain4    varchar2(100) default ' ' not null,
  emexain5    varchar2(100) default ' ' not null,
  emexspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrexpa1 primary key( 
emexuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrexpa2 on emrexpaf
(
emexsnam,
emexgnam,
emexuniq
)
  tablespace pas_indx; 
create unique index emrexpa3 on emrexpaf
(
emexurno,
emexuniq
)
  tablespace pas_indx; 
create unique index emrexpa4 on emrexpaf
(
emexsite,
emexedat,
emexuniq
)
  tablespace pas_indx; 
