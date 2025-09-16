create table priicmaf
(
  pricinvn    char(8) default ' ' not null,
  pricctyp    char(3) default ' ' not null,
  pricnote    char(6) default ' ' not null,
  pricidat    char(8) default ' ' not null,
  pricitim    char(8) default ' ' not null,
  priciusr    char(10) default ' ' not null,
  priciocg    char(3) default ' ' not null,
  pricdind    char(1) default ' ' not null,
  pricddat    char(8) default ' ' not null,
  pricdtim    char(8) default ' ' not null,
  pricdusr    char(10) default ' ' not null,
  pricdocg    char(3) default ' ' not null,
  pricspar    char(127) default ' ' not null,
  lf          char(1)
);
create unique index priicma1 on priicmaf
(
pricinvn,
pricctyp,
pricnote
);
revoke all on priicmaf from public ; 
grant select on priicmaf to public ; 
