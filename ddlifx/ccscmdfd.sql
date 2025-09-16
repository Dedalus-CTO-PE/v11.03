create table ccscmdaf
(
  ccmdhcd     char(2) default ' ' not null,
  ccmddpt     char(8) default ' ' not null,
  ccmdyear    char(4) default ' ' not null,
  ccmdper     char(2) default ' ' not null,
  ccmdpcd     char(8) default ' ' not null,
  ccmdcty     char(4) default ' ' not null,
  ccmdcst     decimal(18,6) default 0 not null,
  ccmdflx     decimal(18,6) default 0 not null,
  ccmdrvi     decimal(18,6) default 0 not null,
  ccmdspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscmda1 on ccscmdaf
(
ccmdhcd,
ccmddpt,
ccmdyear,
ccmdper,
ccmdpcd,
ccmdcty
);
revoke all on ccscmdaf from public ; 
grant select on ccscmdaf to public ; 
