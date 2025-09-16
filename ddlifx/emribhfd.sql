create table emribhaf
(
  emibbthn    char(8) default ' ' not null,
  emibbhtl    decimal(14,2) default 0 not null,
  emibtrib    decimal(6,0) default 0 not null,
  emibdtbc    char(8) default ' ' not null,
  emibtmbc    char(8) default ' ' not null,
  emiboper    char(10) default ' ' not null,
  emibefnm    char(18) default ' ' not null,
  emiblocn    char(8) default ' ' not null,
  emibsnid    char(60) default ' ' not null,
  emibspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index emribha1 on emribhaf
(
emibbthn
);
create unique index emribha2 on emribhaf
(
emibdtbc,
emibbthn
);
revoke all on emribhaf from public ; 
grant select on emribhaf to public ; 
