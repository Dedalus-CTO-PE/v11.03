create table opraudra
(
  opraaudd    varchar2(8) default ' ' not null,
  opraaudt    varchar2(8) default ' ' not null,
  opraaudp    varchar2(2) default ' ' not null,
  opraaudr    varchar2(1) default ' ' not null,
  opraauds    number(1,0) default 0 not null,
  opraaudo    varchar2(4) default ' ' not null,
  opradate    varchar2(8) default ' ' not null,
  opraroom    varchar2(6) default ' ' not null,
  opravail    number(4,0) default 0 not null,
  opraspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index opraudra on opraudra
(
opraaudd,
opraaudt,
opraaudp,
opraaudr
)
tablespace pas_indx; 
create table oproraaf
(
  opradate    varchar2(8) default ' ' not null,
  opraroom    varchar2(6) default ' ' not null,
  opravail    number(4,0) default 0 not null,
  opraspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oproraa1 primary key( 
opradate,
opraroom)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oproraa2 on oproraaf
(
opraroom,
opradate
)
  tablespace pas_indx; 
