create table allrsaaf
(
  alravisn    char(8) default ' ' not null,
  alraladm    char(8) default ' ' not null,
  alracdat    char(8) default ' ' not null,
  alractim    char(8) default ' ' not null,
  alracuid    char(10) default ' ' not null,
  alraudat    char(8) default ' ' not null,
  alrautim    char(8) default ' ' not null,
  alrauuid    char(10) default ' ' not null,
  alraspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allrsaa1 on allrsaaf
(
alravisn,
alraladm
);
create unique index allrsaa2 on allrsaaf
(
alraladm,
alravisn
);
revoke all on allrsaaf from public ; 
grant select on allrsaaf to public ; 
