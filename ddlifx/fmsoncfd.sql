create table fmsoncaf
(
  fmoncode    char(3) default ' ' not null,
  fmondesc    char(20) default ' ' not null,
  fmonperc    decimal(6,2) default 0 not null,
  fmonspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsonca1 on fmsoncaf
(
fmoncode
);
revoke all on fmsoncaf from public ; 
grant select on fmsoncaf to public ; 
