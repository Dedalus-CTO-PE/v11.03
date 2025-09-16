create table emrresaf
(
  emreresp    varchar2(3) default ' ' not null,
  emresdat    varchar2(8) default ' ' not null,
  emreedat    varchar2(8) default ' ' not null,
  emrestat    varchar2(1) default ' ' not null,
  emregdat    varchar2(8) default ' ' not null,
  emregtim    varchar2(8) default ' ' not null,
  emrecuid    varchar2(10) default ' ' not null,
  emrecdat    varchar2(8) default ' ' not null,
  emrectim    varchar2(8) default ' ' not null,
  emreuuid    varchar2(10) default ' ' not null,
  emreudat    varchar2(8) default ' ' not null,
  emreutim    varchar2(8) default ' ' not null,
  emrespar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrresa1 primary key( 
emreresp,
emresdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
