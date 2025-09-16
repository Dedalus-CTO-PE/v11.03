create table comparaf
(
  cmpahosp    char(3) default ' ' not null,
  cmpaparm    char(8) default ' ' not null,
  cmpadesc    char(256) default ' ' not null,
  cmpavalu    char(256) default ' ' not null,
  cmpatype    char(3) default ' ' not null,
  cmpaactv    char(1) default ' ' not null,
  cmpacdat    char(8) default ' ' not null,
  cmpactim    char(8) default ' ' not null,
  cmpacuid    char(10) default ' ' not null,
  cmpaudat    char(8) default ' ' not null,
  cmpautim    char(8) default ' ' not null,
  cmpauuid    char(10) default ' ' not null,
  cmpasyst    char(3) default ' ' not null,
  cmpavcon    char(1) default ' ' not null,
  cmpaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index compara1 on comparaf
(
cmpahosp,
cmpaparm
);
create unique index compara2 on comparaf
(
cmpasyst,
cmpahosp,
cmpaparm
);
revoke all on comparaf from public ; 
grant select on comparaf to public ; 
