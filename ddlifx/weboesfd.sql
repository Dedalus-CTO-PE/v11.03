create table weboesaf
(
  wbosvisn    char(8) default ' ' not null,
  wboscntr    char(3) default ' ' not null,
  wbosscnt    char(3) default ' ' not null,
  wbosrtyp    char(1) default ' ' not null,
  wbositem    char(9) default ' ' not null,
  wbosquan    char(3) default ' ' not null,
  wbospdte    char(8) default ' ' not null,
  wboscdte    char(8) default ' ' not null,
  wbosctim    char(8) default ' ' not null,
  wbostrid    char(24) default ' ' not null,
  wbosmsid    char(36) default ' ' not null,
  wboseleg    char(8) default ' ' not null,
  wbosspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index weboesa1 on weboesaf
(
wbosvisn,
wboscntr,
wbosscnt
);
create unique index weboesa2 on weboesaf
(
wbostrid,
wbosvisn,
wboscntr,
wbosscnt
);
create unique index weboesa3 on weboesaf
(
wbosmsid,
wbosvisn,
wboscntr,
wbosscnt
);
create unique index weboesa4 on weboesaf
(
wboseleg,
wbosvisn,
wboscntr,
wbosscnt
);
revoke all on weboesaf from public ; 
grant select on weboesaf to public ; 
