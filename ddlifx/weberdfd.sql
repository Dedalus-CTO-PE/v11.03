create table weberdaf
(
  wbejftid    char(24) default ' ' not null,
  wbejradv    char(30) default ' ' not null,
  wbejpnum    char(4) default ' ' not null,
  wbejtrid    char(24) default ' ' not null,
  wbejarid    char(20) default ' ' not null,
  wbejbamt    char(9) default ' ' not null,
  wbejccod    char(3) default ' ' not null,
  wbejldat    char(8) default ' ' not null,
  wbejpari    char(20) default ' ' not null,
  wbejptid    char(24) default ' ' not null,
  wbejstat    char(1) default ' ' not null,
  wbejltyp    char(2) default ' ' not null,
  wbejclid    char(6) default ' ' not null,
  wbejmsid    char(36) default ' ' not null,
  wbejspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index weberda1 on weberdaf
(
wbejftid,
wbejradv,
wbejpnum,
wbejtrid
);
create unique index weberda2 on weberdaf
(
wbejtrid,
wbejftid,
wbejradv,
wbejpnum
);
create unique index weberda3 on weberdaf
(
wbejarid,
wbejftid,
wbejradv,
wbejpnum,
wbejtrid
);
revoke all on weberdaf from public ; 
grant select on weberdaf to public ; 
