create table patmi1af
(
  daadmno     varchar2(8) default ' ' not null,
  aurno       varchar2(8) default ' ' not null,
  adate       varchar2(8) default ' ' not null,
  atime       varchar2(8) default ' ' not null,
  dastat      varchar2(1) default ' ' not null,
  aport       varchar2(2) default ' ' not null,
  atranno     number(3,0) default 0 not null,
  ainvprt     number(3,0) default 0 not null,
  alacdte     varchar2(8) default ' ' not null,
  acancel     varchar2(3) default ' ' not null,
  award       varchar2(3) default ' ' not null,
  abed        varchar2(3) default ' ' not null,
  adoctr      varchar2(6) default ' ' not null,
  adocta      varchar2(6) default ' ' not null,
  adoctl      varchar2(30) default ' ' not null,
  asrce       varchar2(3) default ' ' not null,
  atype       varchar2(3) default ' ' not null,
  aclss       varchar2(3) default ' ' not null,
  acare       varchar2(3) default ' ' not null,
  afundh      varchar2(6) default ' ' not null,
  afndtb      varchar2(8) default ' ' not null,
  afndmm      varchar2(10) default ' ' not null,
  aelig       number(1,0) default 0 not null,
  avisit      number(1,0) default 0 not null,
  aalerg      number(1,0) default 0 not null,
  ailln       number(1,0) default 0 not null,
  adiag1      varchar2(80) default ' ' not null,
  adiag2      varchar2(80) default ' ' not null,
  adisc       number(8,2) default 0 not null,
  adoctt      varchar2(6) default ' ' not null,
  aclssft     varchar2(3) default ' ' not null,
  aallow      varchar2(2) default ' ' not null,
  ambs        varchar2(9) default ' ' not null,
  aclaim      varchar2(3) default ' ' not null,
  adiet       varchar2(3) default ' ' not null,
  aploccr     varchar2(3) default ' ' not null,
  astay       number(3,0) default 0 not null,
  adyhosp     number(3,0) default 0 not null,
  amemb       number(1,0) default 0 not null,
  amembno     number(6,0) default 0 not null,
  acomm1      varchar2(40) default ' ' not null,
  acomm2      varchar2(30) default ' ' not null,
  aplur       number(1,0) default 0 not null,
  apurge      number(1,0) default 0 not null,
  ausr1       varchar2(3) default ' ' not null,
  ausr2       varchar2(3) default ' ' not null,
  ausr3       varchar2(3) default ' ' not null,
  ausr4       varchar2(3) default ' ' not null,
  ausr5       varchar2(3) default ' ' not null,
  ausr6       varchar2(3) default ' ' not null,
  ausr7       varchar2(3) default ' ' not null,
  adschi      number(1,0) default 0 not null,
  ardrnam     varchar2(22) default ' ' not null,
  afndyy      varchar2(2) default ' ' not null,
  afndcg      varchar2(6) default ' ' not null,
  aoccdte     varchar2(8) default ' ' not null,
  acoddte     varchar2(8) default ' ' not null,
  aretdte     varchar2(8) default ' ' not null,
  amumadm     number(8,0) default 0 not null,
  dptmipvi    varchar2(3) default ' ' not null,
  abwght      varchar2(6) default ' ' not null,
  ptmsrfgp    varchar2(8) default ' ' not null,
  ptmsgppc    varchar2(6) default ' ' not null,
  ptmsfhan    varchar2(20) default ' ' not null,
  ptmsecra    varchar2(20) default ' ' not null,
  ptmsmgin    varchar2(3) default ' ' not null,
  dptmiddi    varchar2(1) default ' ' not null,
  ptmigppt    varchar2(2) default ' ' not null,
  ptmidofr    varchar2(3) default ' ' not null,
  ptmirefd    varchar2(8) default ' ' not null,
  ptmidfcn    varchar2(8) default ' ' not null,
  ptmiphpu    varchar2(3) default ' ' not null,
  ptmiagnc    varchar2(3) default ' ' not null,
  ptmiessf    varchar2(1) default ' ' not null,
  ptmiusr8    varchar2(3) default ' ' not null,
  ptmiusr9    varchar2(3) default ' ' not null,
  ptmiusr0    varchar2(3) default ' ' not null,
  ptmipdrg    varchar2(4) default ' ' not null,
  ptmioper    varchar2(4) default ' ' not null,
  ptmixwrd    varchar2(3) default ' ' not null,
  ptmiadoc    varchar2(6) default ' ' not null,
  ptmiregs    varchar2(6) default ' ' not null,
  ptmiuyn1    number(1,0) default 0 not null,
  ptmiuyn2    number(1,0) default 0 not null,
  ptmipano    varchar2(8) default ' ' not null,
  ptmipadt    varchar2(8) default ' ' not null,
  ptmipcmx    varchar2(9) default ' ' not null,
  ptmigsta    varchar2(1) default ' ' not null,
  ptmicmxp    varchar2(1) default ' ' not null,
  ptmiebed    varchar2(3) default ' ' not null,
  ptmidmov    varchar2(1) default ' ' not null,
  ptmidfas    varchar2(8) default ' ' not null,
  ptmicrcd    varchar2(1) default ' ' not null,
  ptmifinv    varchar2(1) default ' ' not null,
  ptmiconb    varchar2(1) default ' ' not null,
  ptmidatc    varchar2(8) default ' ' not null,
  ptmitimc    varchar2(8) default ' ' not null,
  ptmiwebc    varchar2(10) default ' ' not null,
  ptmidatu    varchar2(8) default ' ' not null,
  ptmitimu    varchar2(8) default ' ' not null,
  ptmiwebu    varchar2(10) default ' ' not null,
  ptmi3bdy    varchar2(3) default ' ' not null,
  ptmi3bad    varchar2(8) default ' ' not null,
  ptmilsdn    varchar2(8) default ' ' not null,
  ptmiogno    varchar2(8) default ' ' not null,
  ptmsspar    varchar2(73) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmi1a1 primary key( 
daadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmi1a2 on patmi1af
(
dastat,
daadmno
)
  tablespace pas_indx; 
create unique index patmi1a3 on patmi1af
(
adate,
daadmno
)
  tablespace pas_indx; 
create unique index patmi1a4 on patmi1af
(
acoddte,
daadmno
)
  tablespace pas_indx; 
create unique index patmi1a5 on patmi1af
(
dastat,
adocta,
award,
abed,
daadmno
)
  tablespace pas_indx; 
create unique index patmi1a6 on patmi1af
(
dastat,
award,
adate,
daadmno
)
  tablespace pas_indx; 
create unique index patmi1a7 on patmi1af
(
adocta,
dastat,
acoddte,
daadmno
)
  tablespace pas_indx; 
create unique index patmi1a8 on patmi1af
(
aurno,
dastat,
daadmno
)
  tablespace pas_indx; 
