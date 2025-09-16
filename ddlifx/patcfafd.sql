create table patcfaaf
(
  ptcfclai    char(3) default ' ' not null,
  ptcffacd    char(3) default ' ' not null,
  ptcfndfp    char(3) default ' ' not null,
  ptcfocgr    char(3) default ' ' not null,
  ptcfcefr    char(1) default ' ' not null,
  ptcfmcps    char(1) default ' ' not null,
  ptcfhinv    char(1) default ' ' not null,
  ptcfrhcd    char(3) default ' ' not null,
  ptcfrhft    char(80) default ' ' not null,
  ptcfhdat    char(8) default ' ' not null,
  ptcfhfgc    char(6) default ' ' not null,
  ptcfohdt    char(8) default ' ' not null,
  ptcfohtm    char(8) default ' ' not null,
  ptcfohui    char(10) default ' ' not null,
  ptcfspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index patcfaa1 on patcfaaf
(
ptcfclai
);
revoke all on patcfaaf from public ; 
grant select on patcfaaf to public ; 
