create table mehpoiaf
(
  mhpixdat    varchar2(8) default ' ' not null,
  mhpixnum    varchar2(3) default ' ' not null,
  mhpivisn    varchar2(8) default ' ' not null,
  mhpiurno    varchar2(8) default ' ' not null,
  mhpiocur    varchar2(3) default ' ' not null,
  mhpiocot    varchar2(3) default ' ' not null,
  mhpiocoi    varchar2(3) default ' ' not null,
  mhpierid    varchar2(9) default ' ' not null,
  mhpioitm    varchar2(3) default ' ' not null,
  mhpitype    varchar2(2) default ' ' not null,
  mhpimadm    varchar2(4) default ' ' not null,
  mhpicsta    varchar2(4) default ' ' not null,
  mhpicdat    varchar2(19) default ' ' not null,
  mhpiival    varchar2(1) default ' ' not null,
  mhpispar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpoia1 primary key( 
mhpixdat,
mhpixnum,
mhpivisn,
mhpiurno,
mhpiocur,
mhpiocot,
mhpiocoi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
