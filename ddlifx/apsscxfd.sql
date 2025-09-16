create table apsscxaf
(
  apsccod     char(12) default ' ' not null,
  apscled     char(2) default ' ' not null,
  apscsub     char(12) default ' ' not null,
  apsctyp     char(1) default ' ' not null,
  apscspa     char(19) default ' ' not null,
  lf          char(1)
);
create unique index apsscxa1 on apsscxaf
(
apsccod,
apscled,
apscsub
);
create unique index apsscxa2 on apsscxaf
(
apscled,
apscsub,
apsccod
);
revoke all on apsscxaf from public ; 
grant select on apsscxaf to public ; 
