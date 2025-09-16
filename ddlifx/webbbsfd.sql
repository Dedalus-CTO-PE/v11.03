create table webbbsaf
(
  wbbshosp    char(3) default ' ' not null,
  dwbbsflg    char(2) default ' ' not null,
  wbbsmodl    char(1) default ' ' not null,
  wbbsuniq    char(8) default ' ' not null,
  wbbsinvn    char(8) default ' ' not null,
  wbbsbatn    char(8) default ' ' not null,
  wbbsurno    char(8) default ' ' not null,
  wbbspbat    char(8) default ' ' not null,
  wbbsnbat    char(8) default ' ' not null,
  wbbstrid    char(24) default ' ' not null,
  wbbsamtc    decimal(14,2) default 0 not null,
  wbbsamtp    decimal(14,2) default 0 not null,
  wbbspdat    char(8) default ' ' not null,
  wbbsstat    char(2) default ' ' not null,
  wbbsclid    char(6) default ' ' not null,
  wbbsrkey    char(24) default ' ' not null,
  wbbsokey    char(36) default ' ' not null,
  wbbsmsid    char(36) default ' ' not null,
  wbbsprov    char(8) default ' ' not null,
  wbbsstyp    char(1) default ' ' not null,
  wbbsspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webbbsa1 on webbbsaf
(
wbbshosp,
dwbbsflg,
wbbsmodl,
wbbsuniq,
wbbsinvn,
wbbsbatn
);
create unique index webbbsa2 on webbbsaf
(
wbbsinvn,
wbbsbatn,
wbbsmodl
);
create unique index webbbsa3 on webbbsaf
(
wbbsbatn,
wbbsuniq,
wbbsinvn
);
create unique index webbbsa4 on webbbsaf
(
wbbsuniq,
wbbsinvn,
wbbsbatn
);
create unique index webbbsa5 on webbbsaf
(
wbbshosp,
wbbsurno,
wbbsuniq,
wbbsinvn,
wbbsbatn
);
create unique index webbbsa6 on webbbsaf
(
wbbstrid,
wbbsinvn,
wbbsbatn
);
create unique index webbbsa7 on webbbsaf
(
wbbsmsid,
wbbsinvn,
wbbsbatn,
wbbsmodl
);
create unique index webbbsa8 on webbbsaf
(
dwbbsflg,
wbbshosp,
wbbsmodl,
wbbsuniq,
wbbsinvn,
wbbsbatn
);
revoke all on webbbsaf from public ; 
grant select on webbbsaf to public ; 
