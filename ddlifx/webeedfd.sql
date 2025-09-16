create table webeedaf
(
  wbedarid    char(20) default ' ' not null,
  wbedrptc    char(3) default ' ' not null,
  wbedcfec    char(4) default ' ' not null,
  wbedexpc    char(3) default ' ' not null,
  wbedcfet    char(80) default ' ' not null,
  wbedctid    char(24) default ' ' not null,
  wbedmsid    char(36) default ' ' not null,
  wbedspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webeeda1 on webeedaf
(
wbedarid,
wbedrptc,
wbedcfec,
wbedexpc
);
create unique index webeeda2 on webeedaf
(
wbedctid,
wbedarid,
wbedrptc,
wbedcfec,
wbedexpc
);
create unique index webeeda3 on webeedaf
(
wbedmsid,
wbedarid,
wbedrptc,
wbedcfec,
wbedexpc
);
revoke all on webeedaf from public ; 
grant select on webeedaf to public ; 
