create table webemcaf
(
  wbewarid    char(20) default ' ' not null,
  wbewrptc    char(3) default ' ' not null,
  wbewmevc    char(2) default ' ' not null,
  wbewsrvc    char(2) default ' ' not null,
  wbewsvid    char(4) default ' ' not null,
  wbewsvbe    char(9) default ' ' not null,
  wbewsvch    char(9) default ' ' not null,
  wbewsvdt    char(10) default ' ' not null,
  wbewsvex    char(4) default ' ' not null,
  wbewsvit    char(5) default ' ' not null,
  wbewsvsc    char(9) default ' ' not null,
  wbewtrid    char(24) default ' ' not null,
  wbewmsid    char(36) default ' ' not null,
  wbewspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webemca1 on webemcaf
(
wbewarid,
wbewrptc,
wbewmevc,
wbewsrvc
);
create unique index webemca2 on webemcaf
(
wbewtrid,
wbewarid,
wbewrptc,
wbewmevc,
wbewsrvc
);
create unique index webemca3 on webemcaf
(
wbewmsid,
wbewarid,
wbewrptc,
wbewmevc,
wbewsrvc
);
revoke all on webemcaf from public ; 
grant select on webemcaf to public ; 
