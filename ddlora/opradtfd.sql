create table opradtaf
(
  opaduniq    varchar2(10) default ' ' not null,
  opadurno    varchar2(8) default ' ' not null,
  opadvisn    varchar2(8) default ' ' not null,
  opadadat    varchar2(8) default ' ' not null,
  opadatim    varchar2(8) default ' ' not null,
  opadwebu    varchar2(10) default ' ' not null,
  opadatyp    varchar2(3) default ' ' not null,
  opadcodf    varchar2(3) default ' ' not null,
  opadorig    varchar2(100) default ' ' not null,
  opadchan    varchar2(100) default ' ' not null,
  opadspar    varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opradta1 primary key( 
opaduniq,
opadadat,
opadatim,
opadatyp,
opadwebu)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index opradta2 on opradtaf
(
opadurno,
opaduniq,
opadadat,
opadatim,
opadatyp,
opadwebu
)
  tablespace pas_indx; 
