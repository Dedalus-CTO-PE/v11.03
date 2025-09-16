create table webomiaf
(
  wboiarid    char(20) default ' ' not null,
  wboirptc    char(3) default ' ' not null,
  wboimect    char(2) default ' ' not null,
  wboisvct    char(4) default ' ' not null,
  wboisvid    char(4) default ' ' not null,
  wboisvbe    char(9) default ' ' not null,
  wboisvch    char(9) default ' ' not null,
  wboisvds    char(8) default ' ' not null,
  wboisvec    char(4) default ' ' not null,
  wboisvit    char(5) default ' ' not null,
  wboisvsc    char(9) default ' ' not null,
  wboictid    char(24) default ' ' not null,
  wboimsid    char(36) default ' ' not null,
  wboispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webomia1 on webomiaf
(
wboiarid,
wboirptc,
wboimect,
wboisvct
);
create unique index webomia2 on webomiaf
(
wboictid,
wboiarid,
wboirptc,
wboimect,
wboisvct
);
create unique index webomia3 on webomiaf
(
wboimsid,
wboiarid,
wboirptc,
wboimect,
wboisvct
);
revoke all on webomiaf from public ; 
grant select on webomiaf to public ; 
