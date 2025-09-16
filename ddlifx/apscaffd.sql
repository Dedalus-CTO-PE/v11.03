create table apscafaf
(
  apcachq     char(15) default ' ' not null,
  apcacrd     char(5) default ' ' not null,
  apcainv     char(15) default ' ' not null,
  apcaled     char(2) default ' ' not null,
  apcaamt     decimal(14,2) default 0 not null,
  apcades     char(35) default ' ' not null,
  apcasort    char(6) default ' ' not null,
  lf          char(1)
);
create unique index apscafa1 on apscafaf
(
apcachq,
apcacrd,
apcainv,
apcaled
);
create unique index apscafa2 on apscafaf
(
apcaled,
apcachq,
apcacrd,
apcainv
);
create unique index apscafa3 on apscafaf
(
apcachq,
apcasort,
apcacrd,
apcainv,
apcaled
);
revoke all on apscafaf from public ; 
grant select on apscafaf to public ; 
