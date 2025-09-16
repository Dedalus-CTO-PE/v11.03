create table ccscmbaf
(
  ccmbhcd     char(2) default ' ' not null,
  ccmbdpt     char(8) default ' ' not null,
  ccmbyear    char(4) default ' ' not null,
  ccmbper     char(2) default ' ' not null,
  ccmbcty     char(4) default ' ' not null,
  ccmbdir     decimal(14,2) default 0 not null,
  ccmbind     decimal(14,2) default 0 not null,
  ccmbflx     decimal(14,2) default 0 not null,
  ccmbspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscmba1 on ccscmbaf
(
ccmbhcd,
ccmbdpt,
ccmbyear,
ccmbper,
ccmbcty
);
create unique index ccscmba2 on ccscmbaf
(
ccmbhcd,
ccmbdpt,
ccmbcty,
ccmbyear,
ccmbper
);
revoke all on ccscmbaf from public ; 
grant select on ccscmbaf to public ; 
