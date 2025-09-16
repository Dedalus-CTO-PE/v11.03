create table mrtrqdaf
(
  mrrdrqno    char(10) default ' ' not null,
  mrrdrkey    char(10) default ' ' not null,
  mrrdfill    char(1) default ' ' not null,
  mrrdfuid    char(10) default ' ' not null,
  mrrdspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mrtrqdr1 on mrtrqdaf
(
mrrdrqno,
mrrdrkey
);
create unique index mrtrqdr2 on mrtrqdaf
(
mrrdrkey,
mrrdrqno
);
revoke all on mrtrqdaf from public ; 
grant select on mrtrqdaf to public ; 
