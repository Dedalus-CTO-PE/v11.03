create table webihbaf
(
  wbijbthn    char(8) default ' ' not null,
  wbijhfnd    char(6) default ' ' not null,
  wbijbhtl    decimal(14,2) default 0 not null,
  wbijtrib    decimal(6,0) default 0 not null,
  wbijdtbc    char(8) default ' ' not null,
  wbijtmbc    char(8) default ' ' not null,
  wbijoper    char(10) default ' ' not null,
  dwbijeet    char(1) default ' ' not null,
  wbijefnm    char(18) default ' ' not null,
  wbijlocn    char(8) default ' ' not null,
  wbijsnid    char(60) default ' ' not null,
  wbijspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihba1 on webihbaf
(
wbijbthn
);
create unique index webihba2 on webihbaf
(
wbijdtbc,
wbijbthn
);
revoke all on webihbaf from public ; 
grant select on webihbaf to public ; 
