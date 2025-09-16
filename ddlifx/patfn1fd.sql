create table patfn1af
(
  hcode       char(6) default ' ' not null,
  hftabl      char(8) default ' ' not null,
  hfname      char(40) default ' ' not null,
  hfadd1      char(35) default ' ' not null,
  hfadd2      char(35) default ' ' not null,
  hfadd3      char(35) default ' ' not null,
  hfadd4      char(35) default ' ' not null,
  hfpcode     char(8) default ' ' not null,
  hftele      char(20) default ' ' not null,
  hfband      decimal(2,0) default 0 not null,
  hfhdpe      char(4) default ' ' not null,
  hffaxn      char(20) default ' ' not null,
  pthfhgrp    char(6) default ' ' not null,
  pthfhcpe    char(6) default ' ' not null,
  pthfbcat    char(3) default ' ' not null,
  dhftact     char(1) default ' ' not null,
  pthfgrpv    char(3) default ' ' not null,
  pthfmaxm    decimal(14,2) default 0 not null,
  pthfdsc1    char(30) default ' ' not null,
  pthfdsc2    char(35) default ' ' not null,
  dthfumtd    char(1) default ' ' not null,
  dthfucmx    char(1) default ' ' not null,
  pthfbiln    char(40) default ' ' not null,
  pthffuld    char(70) default ' ' not null,
  pthfcarc    char(1) default ' ' not null,
  pthfdfic    char(6) default ' ' not null,
  pthfcnam    char(50) default ' ' not null,
  pthfcttl    char(10) default ' ' not null,
  pthfceml    char(80) default ' ' not null,
  pthfcmob    char(20) default ' ' not null,
  pthffacd    char(3) default ' ' not null,
  pthfndfp    decimal(3,0) default 0 not null,
  pthfocgr    char(3) default ' ' not null,
  pthfarce    char(3) default ' ' not null,
  pthfimcd    char(3) default ' ' not null,
  pthfdpri    char(1) default ' ' not null,
  ptfnspar    char(64) default ' ' not null,
  lf          char(1)
);
create unique index patfn1a1 on patfn1af
(
hcode,
hftabl
);
create unique index patfn1a2 on patfn1af
(
hfname,
hcode,
hftabl
);
create unique index patfn1a3 on patfn1af
(
pthfhgrp,
hcode,
hftabl
);
revoke all on patfn1af from public ; 
grant select on patfn1af to public ; 
