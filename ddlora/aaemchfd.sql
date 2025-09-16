create table aaeaudmc
(
  aemcaudd    varchar2(8) default ' ' not null,
  aemcaudt    varchar2(8) default ' ' not null,
  aemcaudp    varchar2(2) default ' ' not null,
  aemcaudr    varchar2(1) default ' ' not null,
  aemcauds    number(1,0) default 0 not null,
  aemcaudo    varchar2(4) default ' ' not null,
  aemcclm     varchar2(3) default ' ' not null,
  aemcfund    varchar2(6) default ' ' not null,
  aemctab     varchar2(8) default ' ' not null,
  aemcclss    varchar2(3) default ' ' not null,
  aemcmbs     varchar2(9) default ' ' not null,
  aemcpatp    number(14,2) default 0 not null,
  aemcrebp    number(14,2) default 0 not null,
  aemcgsta    number(1,0) default 0 not null,
  aemcgstc    varchar2(6) default ' ' not null,
  aemcspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index aaeaudmc on aaeaudmc
(
aemcaudd,
aemcaudt,
aemcaudp,
aemcaudr
)
tablespace pas_indx; 
create table aaemchgf
(
  aemcclm     varchar2(3) default ' ' not null,
  aemcfund    varchar2(6) default ' ' not null,
  aemctab     varchar2(8) default ' ' not null,
  aemcclss    varchar2(3) default ' ' not null,
  aemcmbs     varchar2(9) default ' ' not null,
  aemcpatp    number(14,2) default 0 not null,
  aemcrebp    number(14,2) default 0 not null,
  aemcgsta    number(1,0) default 0 not null,
  aemcgstc    varchar2(6) default ' ' not null,
  aemcspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaemchg1 primary key( 
aemcclm,
aemcfund,
aemctab,
aemcclss,
aemcmbs)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
