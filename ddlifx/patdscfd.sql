create table patdschf
(
  durno       char(8) default ' ' not null,
  ddadmno     char(8) default ' ' not null,
  ddate       char(8) default ' ' not null,
  dtime       char(8) default ' ' not null,
  dstat       char(3) default ' ' not null,
  ddest       char(3) default ' ' not null,
  ddiag       char(50) default ' ' not null,
  ddiag2      char(50) default ' ' not null,
  dusd1       char(3) default ' ' not null,
  dusd2       char(3) default ' ' not null,
  dusd3       char(3) default ' ' not null,
  dusd4       char(3) default ' ' not null,
  dusd5       char(3) default ' ' not null,
  dfmbs       char(9) default ' ' not null,
  ptdsdmdc    char(4) default ' ' not null,
  ptdsddrg    char(4) default ' ' not null,
  dwlreasn    char(3) default ' ' not null,
  ptdssidx    char(1) default ' ' not null,
  ptdsvogu    char(3) default ' ' not null,
  ptdsoper    char(4) default ' ' not null,
  ptdsuyn1    decimal(1,0) default 0 not null,
  ptdsuyn2    decimal(1,0) default 0 not null,
  ptdsuyn3    decimal(1,0) default 0 not null,
  ptdsuyn4    decimal(1,0) default 0 not null,
  ptdsdwrd    char(3) default ' ' not null,
  ptdsdlos    decimal(4,0) default 0 not null,
  ptdssref    char(4) default ' ' not null,
  ptdspald    char(3) default ' ' not null,
  ptdsdpmn    char(3) default ' ' not null,
  ptdslsdn    char(8) default ' ' not null,
  ptdsclgp    char(12) default ' ' not null,
  dspare      char(54) default ' ' not null,
  lf          char(1)
);
create unique index patdsch1 on patdschf
(
ddadmno
);
create unique index patdsch2 on patdschf
(
ddate,
ddadmno
);
create unique index patdsch3 on patdschf
(
durno,
ddate,
ddadmno
);
revoke all on patdschf from public ; 
grant select on patdschf to public ; 
