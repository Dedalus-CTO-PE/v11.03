create table emrutyaf
(
  emututy     varchar2(5) default ' ' not null,
  emutdes     varchar2(35) default ' ' not null,
  emutslv     varchar2(2) default ' ' not null,
  emutsid     varchar2(1) default ' ' not null,
  emutpwd     varchar2(1) default ' ' not null,
  emutspa     varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrutya1 primary key( 
emututy)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
