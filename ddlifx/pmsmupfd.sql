create table pmsmupaf
(
  pmmuurno    char(8) default ' ' not null,
  pmmucuid    char(8) default ' ' not null,
  pmmucdat    char(8) default ' ' not null,
  pmmuctim    char(8) default ' ' not null,
  pmmuuass    char(10) default ' ' not null,
  pmmudass    char(8) default ' ' not null,
  pmmutass    char(8) default ' ' not null,
  pmmuspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsmupa1 on pmsmupaf
(
pmmuurno
);
revoke all on pmsmupaf from public ; 
grant select on pmsmupaf to public ; 
