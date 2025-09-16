create table hl7qrdaf
(
  dqrdin01    varchar2(20) default ' ' not null,
  dqrdin02    varchar2(2) default ' ' not null,
  qrd001      varchar2(26) default ' ' not null,
  qrd002      varchar2(2) default ' ' not null,
  qrd003      varchar2(2) default ' ' not null,
  qrd004      varchar2(10) default ' ' not null,
  qrd005      varchar2(2) default ' ' not null,
  qrd006      varchar2(26) default ' ' not null,
  qrd007      varchar2(10) default ' ' not null,
  qrd008      varchar2(60) default ' ' not null,
  qrd009      varchar2(60) default ' ' not null,
  qrd010      varchar2(60) default ' ' not null,
  qrd011      varchar2(20) default ' ' not null,
  qrd012      varchar2(2) default ' ' not null,
  qrd013      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7qrd01 primary key( 
dqrdin01,
dqrdin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
