create table patmi1af
(
  daadmno     char(8) default ' ' not null,
  aurno       char(8) default ' ' not null,
  adate       char(8) default ' ' not null,
  atime       char(8) default ' ' not null,
  dastat      char(1) default ' ' not null,
  aport       char(2) default ' ' not null,
  atranno     decimal(3,0) default 0 not null,
  ainvprt     decimal(3,0) default 0 not null,
  alacdte     char(8) default ' ' not null,
  acancel     char(3) default ' ' not null,
  award       char(3) default ' ' not null,
  abed        char(3) default ' ' not null,
  adoctr      char(6) default ' ' not null,
  adocta      char(6) default ' ' not null,
  adoctl      char(30) default ' ' not null,
  asrce       char(3) default ' ' not null,
  atype       char(3) default ' ' not null,
  aclss       char(3) default ' ' not null,
  acare       char(3) default ' ' not null,
  afundh      char(6) default ' ' not null,
  afndtb      char(8) default ' ' not null,
  afndmm      char(10) default ' ' not null,
  aelig       decimal(1,0) default 0 not null,
  avisit      decimal(1,0) default 0 not null,
  aalerg      decimal(1,0) default 0 not null,
  ailln       decimal(1,0) default 0 not null,
  adiag1      char(80) default ' ' not null,
  adiag2      char(80) default ' ' not null,
  adisc       decimal(8,2) default 0 not null,
  adoctt      char(6) default ' ' not null,
  aclssft     char(3) default ' ' not null,
  aallow      char(2) default ' ' not null,
  ambs        char(9) default ' ' not null,
  aclaim      char(3) default ' ' not null,
  adiet       char(3) default ' ' not null,
  aploccr     char(3) default ' ' not null,
  astay       decimal(3,0) default 0 not null,
  adyhosp     decimal(3,0) default 0 not null,
  amemb       decimal(1,0) default 0 not null,
  amembno     decimal(6,0) default 0 not null,
  acomm1      char(40) default ' ' not null,
  acomm2      char(30) default ' ' not null,
  aplur       decimal(1,0) default 0 not null,
  apurge      decimal(1,0) default 0 not null,
  ausr1       char(3) default ' ' not null,
  ausr2       char(3) default ' ' not null,
  ausr3       char(3) default ' ' not null,
  ausr4       char(3) default ' ' not null,
  ausr5       char(3) default ' ' not null,
  ausr6       char(3) default ' ' not null,
  ausr7       char(3) default ' ' not null,
  adschi      decimal(1,0) default 0 not null,
  ardrnam     char(22) default ' ' not null,
  afndyy      char(2) default ' ' not null,
  afndcg      char(6) default ' ' not null,
  aoccdte     char(8) default ' ' not null,
  acoddte     char(8) default ' ' not null,
  aretdte     char(8) default ' ' not null,
  amumadm     decimal(8,0) default 0 not null,
  dptmipvi    char(3) default ' ' not null,
  abwght      char(6) default ' ' not null,
  ptmsrfgp    char(8) default ' ' not null,
  ptmsgppc    char(6) default ' ' not null,
  ptmsfhan    char(20) default ' ' not null,
  ptmsecra    char(20) default ' ' not null,
  ptmsmgin    char(3) default ' ' not null,
  dptmiddi    char(1) default ' ' not null,
  ptmigppt    char(2) default ' ' not null,
  ptmidofr    char(3) default ' ' not null,
  ptmirefd    char(8) default ' ' not null,
  ptmidfcn    char(8) default ' ' not null,
  ptmiphpu    char(3) default ' ' not null,
  ptmiagnc    char(3) default ' ' not null,
  ptmiessf    char(1) default ' ' not null,
  ptmiusr8    char(3) default ' ' not null,
  ptmiusr9    char(3) default ' ' not null,
  ptmiusr0    char(3) default ' ' not null,
  ptmipdrg    char(4) default ' ' not null,
  ptmioper    char(4) default ' ' not null,
  ptmixwrd    char(3) default ' ' not null,
  ptmiadoc    char(6) default ' ' not null,
  ptmiregs    char(6) default ' ' not null,
  ptmiuyn1    decimal(1,0) default 0 not null,
  ptmiuyn2    decimal(1,0) default 0 not null,
  ptmipano    char(8) default ' ' not null,
  ptmipadt    char(8) default ' ' not null,
  ptmipcmx    char(9) default ' ' not null,
  ptmigsta    char(1) default ' ' not null,
  ptmicmxp    char(1) default ' ' not null,
  ptmiebed    char(3) default ' ' not null,
  ptmidmov    char(1) default ' ' not null,
  ptmidfas    char(8) default ' ' not null,
  ptmicrcd    char(1) default ' ' not null,
  ptmifinv    char(1) default ' ' not null,
  ptmiconb    char(1) default ' ' not null,
  ptmidatc    char(8) default ' ' not null,
  ptmitimc    char(8) default ' ' not null,
  ptmiwebc    char(10) default ' ' not null,
  ptmidatu    char(8) default ' ' not null,
  ptmitimu    char(8) default ' ' not null,
  ptmiwebu    char(10) default ' ' not null,
  ptmi3bdy    char(3) default ' ' not null,
  ptmi3bad    char(8) default ' ' not null,
  ptmilsdn    char(8) default ' ' not null,
  ptmiogno    char(8) default ' ' not null,
  ptmsspar    char(73) default ' ' not null,
  lf          char(1)
);
create unique index patmi1a1 on patmi1af
(
daadmno
);
create unique index patmi1a2 on patmi1af
(
dastat,
daadmno
);
create unique index patmi1a3 on patmi1af
(
adate,
daadmno
);
create unique index patmi1a4 on patmi1af
(
acoddte,
daadmno
);
create unique index patmi1a5 on patmi1af
(
dastat,
adocta,
award,
abed,
daadmno
);
create unique index patmi1a6 on patmi1af
(
dastat,
award,
adate,
daadmno
);
create unique index patmi1a7 on patmi1af
(
adocta,
dastat,
acoddte,
daadmno
);
create unique index patmi1a8 on patmi1af
(
aurno,
dastat,
daadmno
);
revoke all on patmi1af from public ; 
grant select on patmi1af to public ; 
