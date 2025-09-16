create table priibhaf
(
  pribbthn    char(8) default ' ' not null,
  pribhfnd    char(6) default ' ' not null,
  pribbhtl    decimal(14,2) default 0 not null,
  pribtrib    decimal(6,0) default 0 not null,
  pribdtbc    char(8) default ' ' not null,
  pribtmbc    char(8) default ' ' not null,
  priboper    char(10) default ' ' not null,
  dpiebeet    char(1) default ' ' not null,
  pribefnm    char(18) default ' ' not null,
  priblocn    char(8) default ' ' not null,
  pribsnid    char(60) default ' ' not null,
  pribspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index priibha1 on priibhaf
(
pribbthn
);
create unique index priibha2 on priibhaf
(
pribdtbc,
pribbthn
);
revoke all on priibhaf from public ; 
grant select on priibhaf to public ; 
