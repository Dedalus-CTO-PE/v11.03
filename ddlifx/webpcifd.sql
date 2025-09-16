create table webpciaf
(
  wbpihosp    char(3) default ' ' not null,
  dwbpiflg    char(2) default ' ' not null,
  wbpimodl    char(1) default ' ' not null,
  wbpiuniq    char(8) default ' ' not null,
  wbpiinvn    char(8) default ' ' not null,
  wbpibatn    char(8) default ' ' not null,
  wbpiurno    char(8) default ' ' not null,
  wbpipbat    char(8) default ' ' not null,
  wbpinbat    char(8) default ' ' not null,
  wbpitrid    char(24) default ' ' not null,
  wbpiamtc    decimal(14,2) default 0 not null,
  wbpistat    char(2) default ' ' not null,
  wbpimsid    char(36) default ' ' not null,
  wbpictyp    char(1) default ' ' not null,
  wbpieror    char(4) default ' ' not null,
  wbpiresn    char(500) default ' ' not null,
  wbpispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpcia1 on webpciaf
(
wbpihosp,
dwbpiflg,
wbpimodl,
wbpiuniq,
wbpiinvn,
wbpibatn
);
create unique index webpcia2 on webpciaf
(
wbpiinvn,
wbpibatn,
wbpimodl
);
create unique index webpcia3 on webpciaf
(
wbpibatn,
wbpiuniq,
wbpiinvn
);
create unique index webpcia4 on webpciaf
(
wbpiuniq,
wbpiinvn,
wbpibatn
);
create unique index webpcia5 on webpciaf
(
wbpihosp,
wbpiurno,
wbpiuniq,
wbpiinvn,
wbpibatn
);
create unique index webpcia6 on webpciaf
(
wbpitrid,
wbpiinvn,
wbpibatn
);
create unique index webpcia7 on webpciaf
(
wbpimsid,
wbpiinvn,
wbpibatn,
wbpimodl
);
create unique index webpcia8 on webpciaf
(
dwbpiflg,
wbpihosp,
wbpimodl,
wbpiuniq,
wbpiinvn,
wbpibatn
);
revoke all on webpciaf from public ; 
grant select on webpciaf to public ; 
