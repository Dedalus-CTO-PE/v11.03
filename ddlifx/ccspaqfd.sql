create table ccspaqaf
(
  ccpaport    char(2) default ' ' not null,
  ccpapcd     char(8) default ' ' not null,
  ccpades     char(35) default ' ' not null,
  ccpanum     decimal(10,2) default 0 not null,
  ccpastd     decimal(14,2) default 0 not null,
  ccpaact     decimal(14,2) default 0 not null,
  ccpabud     decimal(14,2) default 0 not null,
  ccpaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccspaqa1 on ccspaqaf
(
ccpaport,
ccpapcd
);
revoke all on ccspaqaf from public ; 
grant select on ccspaqaf to public ; 
