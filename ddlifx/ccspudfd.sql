create table ccspudaf
(
  ccpucls     char(1) default ' ' not null,
  ccpucod     char(4) default ' ' not null,
  ccpudes     char(35) default ' ' not null,
  ccpuspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccspuda1 on ccspudaf
(
ccpucls,
ccpucod
);
revoke all on ccspudaf from public ; 
grant select on ccspudaf to public ; 
