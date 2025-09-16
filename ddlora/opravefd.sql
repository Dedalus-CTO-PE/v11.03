create table opraudav
(
  opavaudd    varchar2(8) default ' ' not null,
  opavaudt    varchar2(8) default ' ' not null,
  opavaudp    varchar2(2) default ' ' not null,
  opavaudr    varchar2(1) default ' ' not null,
  opavauds    number(1,0) default 0 not null,
  opavaudo    varchar2(4) default ' ' not null,
  opavcode    varchar2(9) default ' ' not null,
  opavdoct    varchar2(6) default ' ' not null,
  opavaver    number(4,0) default 0 not null,
  opavspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index opraudav on opraudav
(
opavaudd,
opavaudt,
opavaudp,
opavaudr
)
tablespace pas_indx; 
create table opraveaf
(
  opavcode    varchar2(9) default ' ' not null,
  opavdoct    varchar2(6) default ' ' not null,
  opavaver    number(4,0) default 0 not null,
  opavspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opravea1 primary key( 
opavcode,
opavdoct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index opravea2 on opraveaf
(
opavdoct,
opavcode
)
  tablespace pas_indx; 
