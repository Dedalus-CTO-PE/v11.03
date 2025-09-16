create table webbbfaf
(
  wbbfclid    char(6) default ' ' not null,
  wbbfrptc    char(3) default ' ' not null,
  wbbfmevc    char(2) default ' ' not null,
  wbbfsrvc    char(2) default ' ' not null,
  wbbfassc    char(4) default ' ' not null,
  wbbfbepd    char(9) default ' ' not null,
  wbbfcham    char(9) default ' ' not null,
  wbbfsvid    char(4) default ' ' not null,
  wbbfitmn    char(5) default ' ' not null,
  wbbfnofp    char(2) default ' ' not null,
  wbbfprov    char(8) default ' ' not null,
  wbbftrid    char(24) default ' ' not null,
  wbbfmsid    char(36) default ' ' not null,
  wbbfrkey    char(24) default ' ' not null,
  wbbfspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webbbfa1 on webbbfaf
(
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc,
wbbfrkey
);
create unique index webbbfa2 on webbbfaf
(
wbbftrid,
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc,
wbbfrkey
);
create unique index webbbfa3 on webbbfaf
(
wbbfmsid,
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc,
wbbfrkey
);
create unique index webbbfa4 on webbbfaf
(
wbbfrkey,
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc
);
revoke all on webbbfaf from public ; 
grant select on webbbfaf to public ; 
