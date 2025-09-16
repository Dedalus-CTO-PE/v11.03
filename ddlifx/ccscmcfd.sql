create table ccscmcaf
(
  ccmchcd     char(2) default ' ' not null,
  ccmcdpt     char(8) default ' ' not null,
  ccmcyear    char(4) default ' ' not null,
  ccmcper     char(2) default ' ' not null,
  ccmcdir     decimal(14,2) default 0 not null,
  ccmcind     decimal(14,2) default 0 not null,
  ccmcflx     decimal(14,2) default 0 not null,
  ccmcspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscmca1 on ccscmcaf
(
ccmchcd,
ccmcdpt,
ccmcyear,
ccmcper
);
create unique index ccscmca2 on ccscmcaf
(
ccmchcd,
ccmcyear,
ccmcper,
ccmcdpt
);
revoke all on ccscmcaf from public ; 
grant select on ccscmcaf to public ; 
