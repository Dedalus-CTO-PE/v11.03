create table outaudcl
(
  otclaudd    varchar2(8) default ' ' not null,
  otclaudt    varchar2(8) default ' ' not null,
  otclaudp    varchar2(2) default ' ' not null,
  otclaudr    varchar2(1) default ' ' not null,
  otclauds    number(1,0) default 0 not null,
  otclaudo    varchar2(4) default ' ' not null,
  ocasite     varchar2(6) default ' ' not null,
  ocaclin     varchar2(6) default ' ' not null,
  ocadate     varchar2(8) default ' ' not null,
  ocadoct     varchar2(6) default ' ' not null,
  ocadesc     varchar2(30) default ' ' not null,
  ocaccons    varchar2(6) default ' ' not null,
  otcliact    varchar2(1) default ' ' not null,
  ocaspare    varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index outaudcl on outaudcl
(
otclaudd,
otclaudt,
otclaudp,
otclaudr
)
tablespace pas_indx; 
create table outcliaf
(
  ocasite     varchar2(6) default ' ' not null,
  ocaclin     varchar2(6) default ' ' not null,
  ocadate     varchar2(8) default ' ' not null,
  ocadoct     varchar2(6) default ' ' not null,
  ocadesc     varchar2(30) default ' ' not null,
  ocaccons    varchar2(6) default ' ' not null,
  otcliact    varchar2(1) default ' ' not null,
  ocaspare    varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outclia1 primary key( 
ocasite,
ocaclin,
ocadate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outclia5 on outcliaf
(
ocasite,
ocadesc,
ocaclin,
ocadate
)
  tablespace pas_indx; 
create unique index outclia6 on outcliaf
(
ocadoct,
ocaclin,
ocadate,
ocasite
)
  tablespace pas_indx; 
