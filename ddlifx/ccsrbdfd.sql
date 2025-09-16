create table ccsrbdaf
(
  ccrbhcd     char(2) default ' ' not null,
  ccrbeps     char(16) default ' ' not null,
  ccrbmid     char(3) default ' ' not null,
  ccrbfdr     decimal(14,2) default 0 not null,
  ccrbfid     decimal(14,2) default 0 not null,
  ccrbvdr     decimal(14,2) default 0 not null,
  ccrbvid     decimal(14,2) default 0 not null,
  ccrbspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsrbda1 on ccsrbdaf
(
ccrbhcd,
ccrbeps,
ccrbmid
);
revoke all on ccsrbdaf from public ; 
grant select on ccsrbdaf to public ; 
