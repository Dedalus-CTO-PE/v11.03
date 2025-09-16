create table webihcaf
(
  dwbicflg    char(2) default ' ' not null,
  wbichfnd    char(6) default ' ' not null,
  wbicadmn    char(8) default ' ' not null,
  wbicinvn    char(8) default ' ' not null,
  wbicbatn    char(8) default ' ' not null,
  wbicurno    char(8) default ' ' not null,
  wbicpbat    char(8) default ' ' not null,
  wbicnbat    char(8) default ' ' not null,
  wbicccfl    char(1) default ' ' not null,
  wbictrid    char(24) default ' ' not null,
  dwbiceet    char(1) default ' ' not null,
  wbicamtc    decimal(14,2) default 0 not null,
  wbicamtp    decimal(14,2) default 0 not null,
  wbicpdat    char(8) default ' ' not null,
  wbicstat    char(2) default ' ' not null,
  wbicftid    char(24) default ' ' not null,
  wbichosp    char(3) default ' ' not null,
  wbicpcti    char(24) default ' ' not null,
  wbicctyp    char(2) default ' ' not null,
  wbicmsid    char(36) default ' ' not null,
  wbicspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihca1 on webihcaf
(
wbichosp,
dwbicflg,
wbichfnd,
wbicadmn,
wbicinvn,
wbicbatn
);
create unique index webihca2 on webihcaf
(
wbicinvn,
wbicbatn
);
create unique index webihca3 on webihcaf
(
wbicbatn,
wbicadmn,
wbicinvn
);
create unique index webihca4 on webihcaf
(
wbicadmn,
wbicinvn,
wbicbatn
);
create unique index webihca5 on webihcaf
(
wbichosp,
wbicurno,
wbicadmn,
wbicinvn,
wbicbatn
);
create unique index webihca6 on webihcaf
(
wbictrid,
wbicinvn,
wbicbatn
);
create unique index webihca7 on webihcaf
(
wbicmsid,
wbicinvn,
wbicbatn
);
create unique index webihca8 on webihcaf
(
dwbicflg,
wbichfnd,
wbicadmn,
wbicinvn,
wbicbatn,
wbichosp
);
revoke all on webihcaf from public ; 
grant select on webihcaf to public ; 
