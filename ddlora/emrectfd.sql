create table emrectaf
(
  emechosp    varchar2(3) default ' ' not null,
  demecflg    varchar2(2) default ' ' not null,
  emecmodl    varchar2(1) default ' ' not null,
  emecuniq    varchar2(8) default ' ' not null,
  emecinvn    varchar2(8) default ' ' not null,
  emecbatn    varchar2(8) default ' ' not null,
  emecurno    varchar2(8) default ' ' not null,
  emecpbat    varchar2(8) default ' ' not null,
  emecnbat    varchar2(8) default ' ' not null,
  emectrid    varchar2(24) default ' ' not null,
  emecamtc    number(14,2) default 0 not null,
  emecstat    varchar2(2) default ' ' not null,
  emecspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrecta1 primary key( 
emechosp,
demecflg,
emecmodl,
emecuniq,
emecinvn,
emecbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrecta2 on emrectaf
(
emecinvn,
emecbatn,
emecmodl
)
  tablespace pas_indx; 
create unique index emrecta3 on emrectaf
(
emecbatn,
emecuniq,
emecinvn
)
  tablespace pas_indx; 
create unique index emrecta4 on emrectaf
(
emecuniq,
emecinvn,
emecbatn
)
  tablespace pas_indx; 
create unique index emrecta5 on emrectaf
(
emechosp,
emecurno,
emecuniq,
emecinvn,
emecbatn
)
  tablespace pas_indx; 
create unique index emrecta6 on emrectaf
(
emectrid,
emecinvn,
emecbatn
)
  tablespace pas_indx; 
