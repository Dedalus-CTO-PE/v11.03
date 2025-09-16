create table patfn1af
(
  hcode       varchar2(6) default ' ' not null,
  hftabl      varchar2(8) default ' ' not null,
  hfname      varchar2(40) default ' ' not null,
  hfadd1      varchar2(35) default ' ' not null,
  hfadd2      varchar2(35) default ' ' not null,
  hfadd3      varchar2(35) default ' ' not null,
  hfadd4      varchar2(35) default ' ' not null,
  hfpcode     varchar2(8) default ' ' not null,
  hftele      varchar2(20) default ' ' not null,
  hfband      number(2,0) default 0 not null,
  hfhdpe      varchar2(4) default ' ' not null,
  hffaxn      varchar2(20) default ' ' not null,
  pthfhgrp    varchar2(6) default ' ' not null,
  pthfhcpe    varchar2(6) default ' ' not null,
  pthfbcat    varchar2(3) default ' ' not null,
  dhftact     varchar2(1) default ' ' not null,
  pthfgrpv    varchar2(3) default ' ' not null,
  pthfmaxm    number(14,2) default 0 not null,
  pthfdsc1    varchar2(30) default ' ' not null,
  pthfdsc2    varchar2(35) default ' ' not null,
  dthfumtd    varchar2(1) default ' ' not null,
  dthfucmx    varchar2(1) default ' ' not null,
  pthfbiln    varchar2(40) default ' ' not null,
  pthffuld    varchar2(70) default ' ' not null,
  pthfcarc    varchar2(1) default ' ' not null,
  pthfdfic    varchar2(6) default ' ' not null,
  pthfcnam    varchar2(50) default ' ' not null,
  pthfcttl    varchar2(10) default ' ' not null,
  pthfceml    varchar2(80) default ' ' not null,
  pthfcmob    varchar2(20) default ' ' not null,
  pthffacd    varchar2(3) default ' ' not null,
  pthfndfp    number(3,0) default 0 not null,
  pthfocgr    varchar2(3) default ' ' not null,
  pthfarce    varchar2(3) default ' ' not null,
  pthfimcd    varchar2(3) default ' ' not null,
  pthfdpri    varchar2(1) default ' ' not null,
  ptfnspar    varchar2(64) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfn1a1 primary key( 
hcode,
hftabl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patfn1a2 on patfn1af
(
hfname,
hcode,
hftabl
)
  tablespace pas_indx; 
create unique index patfn1a3 on patfn1af
(
pthfhgrp,
hcode,
hftabl
)
  tablespace pas_indx; 
