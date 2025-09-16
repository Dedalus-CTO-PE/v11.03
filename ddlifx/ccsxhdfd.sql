create table ccsxhdaf
(
  ccxhsty     char(3) default ' ' not null,
  ccxhkey     char(10) default ' ' not null,
  ccxhdes     char(35) default ' ' not null,
  ccxhsum     char(10) default ' ' not null,
  ccxhspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ccsxhda1 on ccsxhdaf
(
ccxhsty,
ccxhkey
);
create unique index ccsxhda2 on ccsxhdaf
(
ccxhsty,
ccxhsum,
ccxhkey
);
create unique index ccsxhda3 on ccsxhdaf
(
ccxhsty,
ccxhdes,
ccxhkey
);
revoke all on ccsxhdaf from public ; 
grant select on ccsxhdaf to public ; 
