create table weboemaf
(
  wboevisn    char(8) default ' ' not null,
  wboecntr    char(3) default ' ' not null,
  wboestat    char(2) default ' ' not null,
  wboeurno    char(8) default ' ' not null,
  wboearid    char(20) default ' ' not null,
  wboetrid    char(24) default ' ' not null,
  wboerqdt    char(8) default ' ' not null,
  wboeetyp    char(2) default ' ' not null,
  wboeerrc    char(4) default ' ' not null,
  wboeerrd    char(500) default ' ' not null,
  wboecdte    char(8) default ' ' not null,
  wboectim    char(8) default ' ' not null,
  wboeudte    char(8) default ' ' not null,
  wboeutim    char(8) default ' ' not null,
  wboehosp    char(3) default ' ' not null,
  wboeeleg    char(8) default ' ' not null,
  wboemsid    char(36) default ' ' not null,
  wboespar    char(101) default ' ' not null,
  lf          char(1)
);
create unique index weboema1 on weboemaf
(
wboevisn,
wboecntr
);
create unique index weboema2 on weboemaf
(
wboestat,
wboehosp,
wboevisn,
wboecntr
);
create unique index weboema3 on weboemaf
(
wboetrid,
wboevisn,
wboecntr
);
create unique index weboema4 on weboemaf
(
wboemsid,
wboevisn,
wboecntr
);
create unique index weboema5 on weboemaf
(
wboeeleg,
wboevisn,
wboecntr
);
create unique index weboema6 on weboemaf
(
wboehosp,
wboevisn,
wboecntr
);
revoke all on weboemaf from public ; 
grant select on weboemaf to public ; 
