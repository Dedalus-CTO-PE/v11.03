create table ccsatyaf
(
  ccataty     char(4) default ' ' not null,
  ccatdes     char(35) default ' ' not null,
  ccattqy     decimal(16,4) default 0 not null,
  ccatspa     char(31) default ' ' not null,
  lf          char(1)
);
create unique index ccsatya1 on ccsatyaf
(
ccataty
);
create unique index ccsatya2 on ccsatyaf
(
ccatdes,
ccataty
);
revoke all on ccsatyaf from public ; 
grant select on ccsatyaf to public ; 
