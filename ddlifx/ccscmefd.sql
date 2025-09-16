create table ccscmeaf
(
  ccmehcd     char(2) default ' ' not null,
  ccmedpt     char(8) default ' ' not null,
  ccmeyear    char(4) default ' ' not null,
  ccmeper     char(2) default ' ' not null,
  ccmepcd     char(8) default ' ' not null,
  ccmeqty     decimal(12,2) default 0 not null,
  ccmecst     decimal(18,6) default 0 not null,
  ccmeflx     decimal(18,6) default 0 not null,
  ccmespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscmea1 on ccscmeaf
(
ccmehcd,
ccmedpt,
ccmeyear,
ccmeper,
ccmepcd
);
create unique index ccscmea2 on ccscmeaf
(
ccmehcd,
ccmedpt,
ccmepcd,
ccmeyear,
ccmeper
);
revoke all on ccscmeaf from public ; 
grant select on ccscmeaf to public ; 
