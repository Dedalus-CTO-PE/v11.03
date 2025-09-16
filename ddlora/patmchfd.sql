create table patmchgf
(
  mclmcod     varchar2(3) default ' ' not null,
  mhfund      varchar2(6) default ' ' not null,
  ptmchftt    varchar2(3) default ' ' not null,
  mcharge     varchar2(9) default ' ' not null,
  mdesc       varchar2(30) default ' ' not null,
  mitmtyp     number(1,0) default 0 not null,
  mmscgrp     varchar2(3) default ' ' not null,
  mpatpor     number(14,2) default 0 not null,
  mhfpor      number(14,2) default 0 not null,
  mninv       number(1,0) default 0 not null,
  mindic      number(1,0) default 0 not null,
  ptmcgsta    number(1,0) default 0 not null,
  ptmcgstc    varchar2(6) default ' ' not null,
  ptmcedie    varchar2(10) default ' ' not null,
  ptmccfcy    number(1,0) default 0 not null,
  ptmckreb    varchar2(1) default ' ' not null,
  ptmccobd    varchar2(1) default ' ' not null,
  ptmctact    varchar2(1) default ' ' not null,
  ptmctacd    varchar2(4) default ' ' not null,
  ptmcefdt    varchar2(8) default ' ' not null,
  ptmcalgr    varchar2(3) default ' ' not null,
  ptmcprtr    varchar2(1) default ' ' not null,
  ptmceceq    varchar2(11) default ' ' not null,
  ptmcects    varchar2(2) default ' ' not null,
  ptmcactv    varchar2(1) default ' ' not null,
  ptmcetdt    varchar2(8) default ' ' not null,
  ptmcehcp    varchar2(2) default ' ' not null,
  ptmcspar    varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmchg1 primary key( 
mclmcod,
mhfund,
ptmchftt,
mcharge,
ptmcefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmchg2 on patmchgf
(
mdesc,
mclmcod,
mhfund,
ptmchftt,
mcharge,
ptmcefdt
)
  tablespace pas_indx; 
create unique index patmchg3 on patmchgf
(
mclmcod,
mhfund,
ptmchftt,
mmscgrp,
ptmcefdt,
mcharge
)
  tablespace pas_indx; 
create unique index patmchg4 on patmchgf
(
mcharge,
mclmcod,
mhfund,
ptmchftt,
ptmcefdt
)
  tablespace pas_indx; 
