create table ceatcmaf
(
  cetcnt      char(3) default ' ' not null,
  cetcspc     char(3) default ' ' not null,
  cetcpsc     char(7) default ' ' not null,
  cetcstm     decimal(2,0) default 0 not null,
  cetcetm     decimal(2,0) default 0 not null,
  cetcspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatcma1 on ceatcmaf
(
cetcnt,
cetcspc,
cetcpsc
);
revoke all on ceatcmaf from public ; 
grant select on ceatcmaf to public ; 
