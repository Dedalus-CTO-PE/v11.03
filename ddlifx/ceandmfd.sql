create table ceandmaf
(
  cenddrgc    char(4) default ' ' not null,
  cendfc1     decimal(10,4) default 0 not null,
  cendfc2     decimal(10,4) default 0 not null,
  cendfc3     decimal(10,4) default 0 not null,
  cendfc4     decimal(10,4) default 0 not null,
  cendfc5     decimal(10,4) default 0 not null,
  cendspa     char(19) default ' ' not null,
  lf          char(1)
);
create unique index ceandma1 on ceandmaf
(
cenddrgc
);
revoke all on ceandmaf from public ; 
grant select on ceandmaf to public ; 
