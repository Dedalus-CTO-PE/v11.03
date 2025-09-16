create table emreclaf
(
  emeluniq    varchar2(10) default ' ' not null,
  emeltype    varchar2(3) default ' ' not null,
  emelnote    varchar2(6) default ' ' not null,
  emelline    varchar2(3) default ' ' not null,
  emelcmnt    varchar2(100) default ' ' not null,
  emelspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrecla1 primary key( 
emeluniq,
emeltype,
emelnote,
emelline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
