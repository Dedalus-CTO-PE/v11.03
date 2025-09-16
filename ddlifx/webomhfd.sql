create table webomhaf
(
  wboharid    char(20) default ' ' not null,
  wbohrptc    char(3) default ' ' not null,
  wbohmect    char(2) default ' ' not null,
  wbohmeid    char(2) default ' ' not null,
  wbohctid    char(24) default ' ' not null,
  wbohmsid    char(36) default ' ' not null,
  wbohspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webomha1 on webomhaf
(
wboharid,
wbohrptc,
wbohmect
);
create unique index webomha2 on webomhaf
(
wbohctid,
wboharid,
wbohrptc,
wbohmect
);
create unique index webomha3 on webomhaf
(
wbohmsid,
wboharid,
wbohrptc,
wbohmect
);
revoke all on webomhaf from public ; 
grant select on webomhaf to public ; 
