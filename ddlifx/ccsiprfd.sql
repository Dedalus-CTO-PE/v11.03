create table ccsipraf
(
  ccipdrgc    char(4) default ' ' not null,
  ccippri     decimal(14,2) default 0 not null,
  ccipspa     char(29) default ' ' not null,
  lf          char(1)
);
create unique index ccsipra1 on ccsipraf
(
ccipdrgc
);
revoke all on ccsipraf from public ; 
grant select on ccsipraf to public ; 
