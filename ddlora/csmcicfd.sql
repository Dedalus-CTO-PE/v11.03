create table csmaudic
(
  csicaudd    varchar2(8) default ' ' not null,
  csicaudt    varchar2(8) default ' ' not null,
  csicaudp    varchar2(2) default ' ' not null,
  csicaudr    varchar2(1) default ' ' not null,
  csicauds    number(1,0) default 0 not null,
  csicaudo    varchar2(4) default ' ' not null,
  csiccat     varchar2(7) default ' ' not null,
  csicsup     varchar2(5) default ' ' not null,
  csicsut     varchar2(15) default ' ' not null,
  csiccct     number(16,4) default 0 not null,
  csiclct     number(16,4) default 0 not null,
  csicltm     number(6,0) default 0 not null,
  csicpno     varchar2(30) default ' ' not null,
  csicpd1     varchar2(60) default ' ' not null,
  csicpd2     varchar2(60) default ' ' not null,
  csicman     number(1,0) default 0 not null,
  csicapo     number(1,0) default 0 not null,
  csicur1     varchar2(25) default ' ' not null,
  csicur2     varchar2(25) default ' ' not null,
  csicud1     varchar2(8) default ' ' not null,
  csicud2     varchar2(8) default ' ' not null,
  csicuy1     varchar2(1) default ' ' not null,
  csicuy2     varchar2(1) default ' ' not null,
  csicspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index csmaudic on csmaudic
(
csicaudd,
csicaudt,
csicaudp,
csicaudr
)
tablespace pas_indx; 
create table csmcicaf
(
  csiccat     varchar2(7) default ' ' not null,
  csicsup     varchar2(5) default ' ' not null,
  csicsut     varchar2(15) default ' ' not null,
  csiccct     number(16,4) default 0 not null,
  csiclct     number(16,4) default 0 not null,
  csicltm     number(6,0) default 0 not null,
  csicpno     varchar2(30) default ' ' not null,
  csicpd1     varchar2(60) default ' ' not null,
  csicpd2     varchar2(60) default ' ' not null,
  csicman     number(1,0) default 0 not null,
  csicapo     number(1,0) default 0 not null,
  csicur1     varchar2(25) default ' ' not null,
  csicur2     varchar2(25) default ' ' not null,
  csicud1     varchar2(8) default ' ' not null,
  csicud2     varchar2(8) default ' ' not null,
  csicuy1     varchar2(1) default ' ' not null,
  csicuy2     varchar2(1) default ' ' not null,
  csicspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmcica1 primary key( 
csiccat,
csicsup,
csicsut)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index csmcica2 on csmcicaf
(
csicsup,
csicpno,
csiccat,
csicsut
)
  tablespace pas_indx; 
create unique index csmcica3 on csmcicaf
(
csicsup,
csiccat,
csicsut
)
  tablespace pas_indx; 
