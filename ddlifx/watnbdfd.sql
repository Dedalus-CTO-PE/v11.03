create table watnbdaf
(
  wtndlbid    char(9) default ' ' not null,
  wtndpnhi    char(8) default ' ' not null,
  wtndbscd    char(2) default ' ' not null,
  wtndbsdt    char(8) default ' ' not null,
  wtndfaci    char(4) default ' ' not null,
  wtndxdat    char(8) default ' ' not null,
  wtndbtch    char(5) default ' ' not null,
  wtndstat    char(1) default ' ' not null,
  wtndline    char(5) default ' ' not null,
  wtnderrc    char(2) default ' ' not null,
  wtndakrt    char(2) default ' ' not null,
  wtndmsgn    char(7) default ' ' not null,
  wtndmsgt    char(255) default ' ' not null,
  wtndusrs    char(10) default ' ' not null,
  wtndudat    char(8) default ' ' not null,
  wtndutim    char(8) default ' ' not null,
  wtndrdet    char(200) default ' ' not null,
  wtndspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index watnbda1 on watnbdaf
(
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtndbtch,
wtnderrc
);
create unique index watnbda2 on watnbdaf
(
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtndbtch,
wtndstat,
wtnderrc
);
create unique index watnbda3 on watnbdaf
(
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtndbtch,
wtndakrt,
wtnderrc
);
create unique index watnbda4 on watnbdaf
(
wtndbtch,
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtnderrc
);
revoke all on watnbdaf from public ; 
grant select on watnbdaf to public ; 
