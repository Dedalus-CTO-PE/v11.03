create table ccsgcraf
(
  ccgchcd     char(2) default ' ' not null,
  ccgcdpt     char(8) default ' ' not null,
  ccgcgcd     char(4) default ' ' not null,
  ccgccty     char(4) default ' ' not null,
  ccgcrvi     decimal(18,6) default 0 not null,
  ccgcspa     char(29) default ' ' not null,
  lf          char(1)
);
create unique index ccsgcra1 on ccsgcraf
(
ccgchcd,
ccgcdpt,
ccgcgcd,
ccgccty
);
revoke all on ccsgcraf from public ; 
grant select on ccsgcraf to public ; 
