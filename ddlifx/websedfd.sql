create table websedaf
(
  wbsdarid    char(20) default ' ' not null,
  wbsdrptc    char(3) default ' ' not null,
  wbsdscod    char(11) default ' ' not null,
  wbsdsrvc    char(3) default ' ' not null,
  wbsdsfec    char(4) default ' ' not null,
  wbsdsexc    char(3) default ' ' not null,
  wbsdsfet    char(80) default ' ' not null,
  wbsdtrid    char(24) default ' ' not null,
  wbsdmsid    char(36) default ' ' not null,
  wbsdspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webseda1 on websedaf
(
wbsdarid,
wbsdrptc,
wbsdscod,
wbsdsrvc,
wbsdsfec,
wbsdsexc
);
create unique index webseda2 on websedaf
(
wbsdtrid,
wbsdarid,
wbsdrptc,
wbsdscod,
wbsdsrvc,
wbsdsfec,
wbsdsexc
);
create unique index webseda3 on websedaf
(
wbsdmsid,
wbsdarid,
wbsdrptc,
wbsdscod,
wbsdsrvc,
wbsdsfec,
wbsdsexc
);
revoke all on websedaf from public ; 
grant select on websedaf to public ; 
