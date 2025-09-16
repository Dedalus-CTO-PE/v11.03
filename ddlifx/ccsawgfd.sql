create table ccsawgaf
(
  ccawhcd     char(2) default ' ' not null,
  ccawdpt     char(8) default ' ' not null,
  ccawaty     char(4) default ' ' not null,
  ccawqty     decimal(16,4) default 0 not null,
  ccawspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ccsawga1 on ccsawgaf
(
ccawhcd,
ccawdpt,
ccawaty
);
create unique index ccsawga2 on ccsawgaf
(
ccawhcd,
ccawaty,
ccawdpt
);
revoke all on ccsawgaf from public ; 
grant select on ccsawgaf to public ; 
