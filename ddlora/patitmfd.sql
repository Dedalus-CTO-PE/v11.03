create table patitemn
(
  itemno      varchar2(9) default ' ' not null,
  ialpha      varchar2(6) default ' ' not null,
  idesc       varchar2(40) default ' ' not null,
  qiamt       number(14,2) default 0 not null,
  imisgrp     varchar2(3) default ' ' not null,
  iclss       varchar2(3) default ' ' not null,
  iband1      varchar2(3) default ' ' not null,
  iband2      varchar2(3) default ' ' not null,
  iband3      varchar2(3) default ' ' not null,
  iband4      varchar2(3) default ' ' not null,
  iband5      varchar2(3) default ' ' not null,
  iband6      varchar2(3) default ' ' not null,
  iband7      varchar2(3) default ' ' not null,
  iband8      varchar2(3) default ' ' not null,
  iband9      varchar2(3) default ' ' not null,
  iband10     varchar2(3) default ' ' not null,
  iband11     varchar2(3) default ' ' not null,
  iband12     varchar2(3) default ' ' not null,
  iband13     varchar2(3) default ' ' not null,
  iband14     varchar2(3) default ' ' not null,
  iband15     varchar2(3) default ' ' not null,
  iband16     varchar2(3) default ' ' not null,
  ptitactv    varchar2(1) default ' ' not null,
  ptitlink    varchar2(9) default ' ' not null,
  ptitexcl    number(1,0) default 0 not null,
  ptitiwrn    varchar2(1) default ' ' not null,
  ptitgsta    number(1,0) default 0 not null,
  ptitgstc    varchar2(6) default ' ' not null,
  ptitdcsc    varchar2(3) default ' ' not null,
  ptitdesc    varchar2(60) default ' ' not null,
  ptittcer    varchar2(3) default ' ' not null,
  ptitmsch    varchar2(1) default ' ' not null,
  ptittccd    varchar2(1) default ' ' not null,
  ptitserv    varchar2(9) default ' ' not null,
  ptiteceq    varchar2(11) default ' ' not null,
  ptitects    varchar2(2) default ' ' not null,
  ptitlwrd    varchar2(1) default ' ' not null,
  ptittacb    varchar2(3) default ' ' not null,
  ptitefdt    varchar2(8) default ' ' not null,
  ptitetdt    varchar2(8) default ' ' not null,
  ptitcdat    varchar2(8) default ' ' not null,
  ptitctim    varchar2(8) default ' ' not null,
  ptitcuid    varchar2(10) default ' ' not null,
  ptitudat    varchar2(8) default ' ' not null,
  ptitutim    varchar2(8) default ' ' not null,
  ptituuid    varchar2(10) default ' ' not null,
  ptitspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patitem1 primary key( 
itemno,
ptitefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patitem2 on patitemn
(
ialpha,
itemno,
ptitefdt
)
  tablespace pas_indx; 
create unique index patitem3 on patitemn
(
idesc,
itemno,
ptitefdt
)
  tablespace pas_indx; 
