create table pmshacaf
(
  pmhacntr    char(6) default ' ' not null,
  pmhahacg    char(3) default ' ' not null,
  pmhahacf    char(3) default ' ' not null,
  pmhahacv    decimal(14,4) default 0 not null,
  pmhacdat    char(8) default ' ' not null,
  pmhactim    char(8) default ' ' not null,
  pmhacuid    char(10) default ' ' not null,
  pmhaudat    char(8) default ' ' not null,
  pmhautim    char(8) default ' ' not null,
  pmhauuid    char(10) default ' ' not null,
  pmhaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmshaca1 on pmshacaf
(
pmhacntr,
pmhahacg,
pmhahacf
);
create unique index pmshaca2 on pmshacaf
(
pmhahacg,
pmhahacf,
pmhacntr
);
revoke all on pmshacaf from public ; 
grant select on pmshacaf to public ; 
