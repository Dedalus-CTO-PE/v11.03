create table outaudds
(
  otdsaudd    varchar2(8) default ' ' not null,
  otdsaudt    varchar2(8) default ' ' not null,
  otdsaudp    varchar2(2) default ' ' not null,
  otdsaudr    varchar2(1) default ' ' not null,
  otdsauds    number(1,0) default 0 not null,
  otdsaudo    varchar2(4) default ' ' not null,
  otdssite    varchar2(6) default ' ' not null,
  otdscode    varchar2(6) default ' ' not null,
  otdsefdt    varchar2(8) default ' ' not null,
  otdseddt    varchar2(8) default ' ' not null,
  otdsdcod    varchar2(3) default ' ' not null,
  otdsspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index outaudds on outaudds
(
otdsaudd,
otdsaudt,
otdsaudp,
otdsaudr
)
tablespace pas_indx; 
create table outsdiaf
(
  otdssite    varchar2(6) default ' ' not null,
  otdscode    varchar2(6) default ' ' not null,
  otdsefdt    varchar2(8) default ' ' not null,
  otdseddt    varchar2(8) default ' ' not null,
  otdsdcod    varchar2(3) default ' ' not null,
  otdsspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outsdia1 primary key( 
otdssite,
otdscode,
otdsefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outsdia2 on outsdiaf
(
otdssite,
otdsdcod,
otdsefdt,
otdscode
)
  tablespace pas_indx; 
