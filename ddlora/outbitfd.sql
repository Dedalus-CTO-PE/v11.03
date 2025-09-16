create table outbitaf
(
  otbivisn    varchar2(8) default ' ' not null,
  otbiitmc    varchar2(2) default ' ' not null,
  otbiurno    varchar2(8) default ' ' not null,
  otbidate    varchar2(8) default ' ' not null,
  otbiiflg    varchar2(2) default ' ' not null,
  otbiitmn    varchar2(9) default ' ' not null,
  otbisubn    varchar2(3) default ' ' not null,
  otbicdat    varchar2(8) default ' ' not null,
  otbictim    varchar2(8) default ' ' not null,
  otbicuid    varchar2(10) default ' ' not null,
  otbiudat    varchar2(8) default ' ' not null,
  otbiutim    varchar2(8) default ' ' not null,
  otbiuuid    varchar2(10) default ' ' not null,
  otbistat    varchar2(1) default ' ' not null,
  otbipuse    varchar2(20) default ' ' not null,
  otbispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outbita1 primary key( 
otbivisn,
otbiitmc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outbita2 on outbitaf
(
otbivisn,
otbiiflg,
otbiitmn,
otbisubn,
otbiitmc
)
  tablespace pas_indx; 
