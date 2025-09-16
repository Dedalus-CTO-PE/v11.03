create table ccsmtsaf
(
  ccmtyear    char(4) default ' ' not null,
  ccmtcom     char(4) default ' ' not null,
  ccmthcd     char(2) default ' ' not null,
  ccmtdpt     char(8) default ' ' not null,
  ccmtpcd     char(8) default ' ' not null,
  ccmtuct     decimal(16,4) default 0 not null,
  ccmtqty     decimal(14,2) default 0 not null,
  ccmtcst     decimal(14,2) default 0 not null,
  ccmtfix     decimal(1,0) default 0 not null,
  ccmtfuc     decimal(16,4) default 0 not null,
  ccmtspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsmtsa1 on ccsmtsaf
(
ccmtyear,
ccmtcom,
ccmthcd,
ccmtdpt,
ccmtpcd
);
revoke all on ccsmtsaf from public ; 
grant select on ccsmtsaf to public ; 
