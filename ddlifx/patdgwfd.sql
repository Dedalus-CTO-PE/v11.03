create table patdgwaf
(
  ptdwdrgc    char(4) default ' ' not null,
  ptdwmdcc    char(4) default ' ' not null,
  ptdwdesc    char(60) default ' ' not null,
  ptdwlowt    decimal(5,2) default 0 not null,
  ptdwhigh    decimal(5,2) default 0 not null,
  ptdwrwgt    decimal(9,6) default 0 not null,
  ptdwclsp    char(2) default ' ' not null,
  ptdwdrgv    char(3) default ' ' not null,
  ptdwwtep    char(1) default ' ' not null,
  ptdwdrgt    char(3) default ' ' not null,
  ptdwspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index patdgwa1 on patdgwaf
(
ptdwdrgc,
ptdwdrgv
);
create unique index patdgwa2 on patdgwaf
(
ptdwmdcc,
ptdwdrgc,
ptdwdrgv
);
create unique index patdgwa3 on patdgwaf
(
ptdwdesc,
ptdwdrgc,
ptdwdrgv
);
revoke all on patdgwaf from public ; 
grant select on patdgwaf to public ; 
