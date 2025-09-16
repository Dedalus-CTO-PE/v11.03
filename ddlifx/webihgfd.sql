create table webihgaf
(
  wbiofbid    char(3) default ' ' not null,
  wbioarid    char(20) default ' ' not null,
  wbiofrid    char(15) default ' ' not null,
  wbiorptc    char(3) default ' ' not null,
  wbiosecn    char(2) default ' ' not null,
  wbiocamt    char(9) default ' ' not null,
  wbioscod    char(4) default ' ' not null,
  wbiosdsc    char(80) default ' ' not null,
  wbiofdte    char(8) default ' ' not null,
  wbionosv    char(2) default ' ' not null,
  wbiofbam    char(9) default ' ' not null,
  wbiosdte    char(8) default ' ' not null,
  wbiotdte    char(8) default ' ' not null,
  wbiotrid    char(24) default ' ' not null,
  wbiomsid    char(36) default ' ' not null,
  wbiospar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihga1 on webihgaf
(
wbiofbid,
wbioarid,
wbiofrid,
wbiorptc,
wbiosecn
);
create unique index webihga2 on webihgaf
(
wbiotrid,
wbiofbid,
wbioarid,
wbiofrid,
wbiorptc,
wbiosecn
);
create unique index webihga3 on webihgaf
(
wbiomsid,
wbiofbid,
wbioarid,
wbiofrid,
wbiorptc,
wbiosecn
);
revoke all on webihgaf from public ; 
grant select on webihgaf to public ; 
