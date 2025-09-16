create table allgreaf
(
  algecont    char(8) default ' ' not null,
  algesesn    char(8) default ' ' not null,
  algelocn    char(3) default ' ' not null,
  algegdte    char(8) default ' ' not null,
  algegtim    char(8) default ' ' not null,
  algedurn    char(3) default ' ' not null,
  algecdat    char(8) default ' ' not null,
  algectim    char(8) default ' ' not null,
  algecuid    char(10) default ' ' not null,
  algeudat    char(8) default ' ' not null,
  algeutim    char(8) default ' ' not null,
  algeuuid    char(10) default ' ' not null,
  algespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allgrea1 on allgreaf
(
algecont
);
create unique index allgrea2 on allgreaf
(
algesesn,
algecont
);
create unique index allgrea3 on allgreaf
(
algegdte,
algesesn,
algecont
);
revoke all on allgreaf from public ; 
grant select on allgreaf to public ; 
