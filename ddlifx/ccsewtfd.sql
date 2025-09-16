create table ccsewtaf
(
  ccewhcd     char(2) default ' ' not null,
  cceweps     char(16) default ' ' not null,
  ccewfwt     decimal(12,4) default 0 not null,
  ccewvwt     decimal(12,4) default 0 not null,
  ccewtwt     decimal(12,4) default 0 not null,
  ccewspa     char(80) default ' ' not null,
  lf          char(1)
);
create unique index ccsewta1 on ccsewtaf
(
ccewhcd,
cceweps
);
revoke all on ccsewtaf from public ; 
grant select on ccsewtaf to public ; 
