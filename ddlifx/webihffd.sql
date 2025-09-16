create table webihfaf
(
  wbinfbid    char(3) default ' ' not null,
  wbinarid    char(20) default ' ' not null,
  wbinfrid    char(15) default ' ' not null,
  wbinrptc    char(3) default ' ' not null,
  wbincacn    char(2) default ' ' not null,
  wbinexcn    char(2) default ' ' not null,
  wbinexcd    char(4) default ' ' not null,
  wbinextx    char(80) default ' ' not null,
  wbintrid    char(24) default ' ' not null,
  wbinmsid    char(36) default ' ' not null,
  wbinspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihfa1 on webihfaf
(
wbinfbid,
wbinarid,
wbinfrid,
wbinrptc,
wbincacn,
wbinexcn
);
create unique index webihfa2 on webihfaf
(
wbintrid,
wbinfbid,
wbinarid,
wbinfrid,
wbinrptc,
wbincacn,
wbinexcn
);
create unique index webihfa3 on webihfaf
(
wbinmsid,
wbinfbid,
wbinarid,
wbinfrid,
wbinrptc,
wbincacn,
wbinexcn
);
revoke all on webihfaf from public ; 
grant select on webihfaf to public ; 
