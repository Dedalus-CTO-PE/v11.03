create table emrdelaf
(
  emdevisn    varchar2(8) default ' ' not null,
  emdedate    varchar2(8) default ' ' not null,
  emdetime    varchar2(8) default ' ' not null,
  emdetype    varchar2(3) default ' ' not null,
  emdecntr    varchar2(2) default ' ' not null,
  emdereas    varchar2(3) default ' ' not null,
  emdedelt    varchar2(1) default ' ' not null,
  emdecuid    varchar2(10) default ' ' not null,
  emdecdat    varchar2(8) default ' ' not null,
  emdectim    varchar2(8) default ' ' not null,
  emdeuuid    varchar2(10) default ' ' not null,
  emdeudat    varchar2(8) default ' ' not null,
  emdeutim    varchar2(8) default ' ' not null,
  emdedr02    varchar2(3) default ' ' not null,
  emdedr03    varchar2(3) default ' ' not null,
  emdedr04    varchar2(3) default ' ' not null,
  emdedr05    varchar2(3) default ' ' not null,
  emdedr06    varchar2(3) default ' ' not null,
  emdedr07    varchar2(3) default ' ' not null,
  emdedr08    varchar2(3) default ' ' not null,
  emdedr09    varchar2(3) default ' ' not null,
  emdedr10    varchar2(3) default ' ' not null,
  emdecomm    varchar2(300) default ' ' not null,
  emdespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdela1 primary key( 
emdevisn,
emdedate,
emdetime,
emdetype,
emdecntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
