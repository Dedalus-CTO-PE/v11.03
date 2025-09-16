create table disptlaf
(
  dsplurno    varchar2(8) default ' ' not null,
  dsplcode    varchar2(9) default ' ' not null,
  dsplvisn    varchar2(8) default ' ' not null,
  dsplcusr    varchar2(10) default ' ' not null,
  dsplcdat    varchar2(8) default ' ' not null,
  dsplctim    varchar2(8) default ' ' not null,
  dspluusr    varchar2(10) default ' ' not null,
  dspludat    varchar2(8) default ' ' not null,
  dsplutim    varchar2(8) default ' ' not null,
  dsplspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint disptla1 primary key( 
dsplurno,
dsplcode,
dsplvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index disptla2 on disptlaf
(
dsplcode,
dsplurno,
dsplvisn
)
  tablespace pas_indx; 
