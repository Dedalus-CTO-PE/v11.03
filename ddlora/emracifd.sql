create table emraciaf
(
  emrasubv    varchar2(30) default ' ' not null,
  emrafdat    varchar2(8) default ' ' not null,
  emratdat    varchar2(8) default ' ' not null,
  emrasubd    varchar2(256) default ' ' not null,
  emracode    varchar2(30) default ' ' not null,
  emracint    number(12,8) default 0 not null,
  emracits    number(12,8) default 0 not null,
  emradatc    varchar2(8) default ' ' not null,
  emratimc    varchar2(8) default ' ' not null,
  emrausrc    varchar2(10) default ' ' not null,
  emradatu    varchar2(8) default ' ' not null,
  emratimu    varchar2(8) default ' ' not null,
  emrausru    varchar2(10) default ' ' not null,
  emraaflg    varchar2(1) default ' ' not null,
  emraspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emracia1 primary key( 
emrasubv,
emrafdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
