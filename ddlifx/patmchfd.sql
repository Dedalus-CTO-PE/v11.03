create table patmchgf
(
  mclmcod     char(3) default ' ' not null,
  mhfund      char(6) default ' ' not null,
  ptmchftt    char(3) default ' ' not null,
  mcharge     char(9) default ' ' not null,
  mdesc       char(30) default ' ' not null,
  mitmtyp     decimal(1,0) default 0 not null,
  mmscgrp     char(3) default ' ' not null,
  mpatpor     decimal(14,2) default 0 not null,
  mhfpor      decimal(14,2) default 0 not null,
  mninv       decimal(1,0) default 0 not null,
  mindic      decimal(1,0) default 0 not null,
  ptmcgsta    decimal(1,0) default 0 not null,
  ptmcgstc    char(6) default ' ' not null,
  ptmcedie    char(10) default ' ' not null,
  ptmccfcy    decimal(1,0) default 0 not null,
  ptmckreb    char(1) default ' ' not null,
  ptmccobd    char(1) default ' ' not null,
  ptmctact    char(1) default ' ' not null,
  ptmctacd    char(4) default ' ' not null,
  ptmcefdt    char(8) default ' ' not null,
  ptmcalgr    char(3) default ' ' not null,
  ptmcprtr    char(1) default ' ' not null,
  ptmceceq    char(11) default ' ' not null,
  ptmcects    char(2) default ' ' not null,
  ptmcactv    char(1) default ' ' not null,
  ptmcetdt    char(8) default ' ' not null,
  ptmcehcp    char(2) default ' ' not null,
  ptmcspar    char(46) default ' ' not null,
  lf          char(1)
);
create unique index patmchg1 on patmchgf
(
mclmcod,
mhfund,
ptmchftt,
mcharge,
ptmcefdt
);
create unique index patmchg2 on patmchgf
(
mdesc,
mclmcod,
mhfund,
ptmchftt,
mcharge,
ptmcefdt
);
create unique index patmchg3 on patmchgf
(
mclmcod,
mhfund,
ptmchftt,
mmscgrp,
ptmcefdt,
mcharge
);
create unique index patmchg4 on patmchgf
(
mcharge,
mclmcod,
mhfund,
ptmchftt,
ptmcefdt
);
revoke all on patmchgf from public ; 
grant select on patmchgf to public ; 
