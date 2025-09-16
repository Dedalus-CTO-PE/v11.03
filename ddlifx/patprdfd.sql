create table patprdaf
(
  ptpdcmbs    char(9) default ' ' not null,
  ptpdpdrg    char(4) default ' ' not null,
  ptpdwght    char(3) default ' ' not null,
  ptpdpsex    char(1) default ' ' not null,
  ptpdsday    char(1) default ' ' not null,
  ptpdagef    char(2) default ' ' not null,
  ptpdaget    char(3) default ' ' not null,
  ptpdactv    char(1) default ' ' not null,
  ptpdspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index patprda1 on patprdaf
(
ptpdcmbs,
ptpdpdrg
);
create unique index patprda2 on patprdaf
(
ptpdcmbs,
ptpdwght,
ptpdpdrg
);
revoke all on patprdaf from public ; 
grant select on patprdaf to public ; 
