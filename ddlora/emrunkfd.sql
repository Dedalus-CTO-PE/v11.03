create table emrunkaf
(
  demunadm    varchar2(8) default ' ' not null,
  emundet1    varchar2(50) default ' ' not null,
  emundet2    varchar2(50) default ' ' not null,
  emunsex     varchar2(1) default ' ' not null,
  emunage     number(3,0) default 0 not null,
  emunsnam    varchar2(20) default ' ' not null,
  emungnam    varchar2(20) default ' ' not null,
  emunbdat    varchar2(8) default ' ' not null,
  emunspar    varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrunka1 primary key( 
demunadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
