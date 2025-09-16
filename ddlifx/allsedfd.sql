create table allsedaf
(
  alseurno    char(8) default ' ' not null,
  alsevisn    char(8) default ' ' not null,
  alseenct    char(8) default ' ' not null,
  alsedttm    char(14) default ' ' not null,
  alsemtyp    char(7) default ' ' not null,
  alseerid    char(9) default ' ' not null,
  dalsecnt    char(3) default ' ' not null,
  alsedesc    char(100) default ' ' not null,
  alsespar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index allseda1 on allsedaf
(
alseurno,
alsevisn,
alseenct,
alsedttm,
alsemtyp,
alseerid,
dalsecnt
);
create unique index allseda2 on allsedaf
(
alseerid,
alseurno,
alsevisn,
alseenct,
alsedttm,
alsemtyp,
dalsecnt
);
revoke all on allsedaf from public ; 
grant select on allsedaf to public ; 
