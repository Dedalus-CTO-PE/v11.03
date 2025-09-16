create table patlocaf
(
  lsname      char(40) default ' ' not null,
  lgname      char(40) default ' ' not null,
  dladmno     char(8) default ' ' not null,
  lurno       char(8) default ' ' not null,
  lpcondc     char(3) default ' ' not null,
  lpcondd     char(35) default ' ' not null,
  lpcdate     char(8) default ' ' not null,
  lpctime     char(5) default ' ' not null,
  lpconam     char(3) default ' ' not null,
  ptlcgnm2    char(40) default ' ' not null,
  locspar     char(49) default ' ' not null,
  lf          char(1)
);
create unique index patloca1 on patlocaf
(
lsname,
lgname,
dladmno
);
revoke all on patlocaf from public ; 
grant select on patlocaf to public ; 
