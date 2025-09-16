create table webbbdaf
(
  wbbdclid    char(6) default ' ' not null,
  wbbdrptc    char(3) default ' ' not null,
  wbbdclbp    char(9) default ' ' not null,
  wbbdclca    char(9) default ' ' not null,
  wbbdsrvp    char(8) default ' ' not null,
  wbbdstat    char(50) default ' ' not null,
  wbbdtrid    char(24) default ' ' not null,
  wbbdmsid    char(36) default ' ' not null,
  wbbdrkey    char(24) default ' ' not null,
  wbbdcuid    char(10) default ' ' not null,
  wbbdcdat    char(8) default ' ' not null,
  wbbdctim    char(8) default ' ' not null,
  wbbduuid    char(10) default ' ' not null,
  wbbdudat    char(8) default ' ' not null,
  wbbdutim    char(8) default ' ' not null,
  wbbdspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webbbda1 on webbbdaf
(
wbbdclid,
wbbdrptc,
wbbdrkey
);
create unique index webbbda2 on webbbdaf
(
wbbdtrid,
wbbdclid,
wbbdrptc,
wbbdrkey
);
create unique index webbbda3 on webbbdaf
(
wbbdmsid,
wbbdclid,
wbbdrptc,
wbbdrkey
);
create unique index webbbda4 on webbbdaf
(
wbbdrkey,
wbbdclid,
wbbdrptc
);
revoke all on webbbdaf from public ; 
grant select on webbbdaf to public ; 
