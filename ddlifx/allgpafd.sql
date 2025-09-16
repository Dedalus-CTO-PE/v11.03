create table allgpaaf
(
  algacont    char(8) default ' ' not null,
  algaurno    char(8) default ' ' not null,
  algarefn    char(8) default ' ' not null,
  algacurp    char(1) default ' ' not null,
  algapsta    char(3) default ' ' not null,
  algameal    char(1) default ' ' not null,
  algamohx    char(1) default ' ' not null,
  algacdat    char(8) default ' ' not null,
  algactim    char(8) default ' ' not null,
  algacuid    char(10) default ' ' not null,
  algaudat    char(8) default ' ' not null,
  algautim    char(8) default ' ' not null,
  algauuid    char(10) default ' ' not null,
  algarcst    char(1) default ' ' not null,
  algaspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index allgpaa1 on allgpaaf
(
algacont,
algarefn
);
create unique index allgpaa2 on allgpaaf
(
algarefn,
algacont
);
revoke all on allgpaaf from public ; 
grant select on allgpaaf to public ; 
