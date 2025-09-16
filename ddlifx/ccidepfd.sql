create table ccidepaf
(
  ccdpdept    char(3) default ' ' not null,
  ccdpdesc    char(30) default ' ' not null,
  dccdpman    char(1) default ' ' not null,
  ccdpiopa    decimal(1,0) default 0 not null,
  ccdpspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccidepa1 on ccidepaf
(
ccdpdept
);
create unique index ccidepa2 on ccidepaf
(
ccdpdesc,
ccdpdept
);
create unique index ccidepa3 on ccidepaf
(
dccdpman,
ccdpdesc,
ccdpdept
);
revoke all on ccidepaf from public ; 
grant select on ccidepaf to public ; 
