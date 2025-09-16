create table nzpmchaf
(
  nzmchosp    varchar2(3) default ' ' not null,
  nzmcclmc    varchar2(3) default ' ' not null,
  nzmccntr    varchar2(6) default ' ' not null,
  nzmcftab    varchar2(8) default ' ' not null,
  nzmcmchg    varchar2(9) default ' ' not null,
  nzmcefdt    varchar2(8) default ' ' not null,
  nzmcdesc    varchar2(90) default ' ' not null,
  nzmcchgt    number(1,0) default 0 not null,
  nzmccgrp    varchar2(3) default ' ' not null,
  nzmcpatp    number(14,2) default 0 not null,
  nzmcrebp    number(14,2) default 0 not null,
  nzmcindc    number(1,0) default 0 not null,
  nzmcgsta    number(1,0) default 0 not null,
  nzmcgstc    varchar2(6) default ' ' not null,
  nzmcedie    varchar2(10) default ' ' not null,
  nzmckpri    varchar2(1) default ' ' not null,
  nzmcshwd    varchar2(1) default ' ' not null,
  nzmccdat    varchar2(8) default ' ' not null,
  nzmcctim    varchar2(8) default ' ' not null,
  nzmccuid    varchar2(10) default ' ' not null,
  nzmcudat    varchar2(8) default ' ' not null,
  nzmcutim    varchar2(8) default ' ' not null,
  nzmcuuid    varchar2(10) default ' ' not null,
  nzmcacfl    varchar2(1) default ' ' not null,
  nzmceedt    varchar2(8) default ' ' not null,
  nzmcspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpmcha1 primary key( 
nzmchosp,
nzmcclmc,
nzmccntr,
nzmcftab,
nzmcmchg,
nzmcefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpmcha2 on nzpmchaf
(
nzmccgrp,
nzmchosp,
nzmcclmc,
nzmccntr,
nzmcftab,
nzmcefdt,
nzmcmchg
)
  tablespace pas_indx; 
create unique index nzpmcha3 on nzpmchaf
(
nzmcmchg,
nzmcclmc,
nzmchosp,
nzmccntr,
nzmcftab,
nzmcefdt
)
  tablespace pas_indx; 
