create table mehincaf
(
  mhinseid    char(4) default ' ' not null,
  mhindesc    char(20) default ' ' not null,
  mhinfdat    char(8) default ' ' not null,
  mhintdat    char(8) default ' ' not null,
  mhinrecn    decimal(6,0) default 0 not null,
  mhinerrn    decimal(6,0) default 0 not null,
  mhincuid    char(10) default ' ' not null,
  mhincdat    char(8) default ' ' not null,
  mhinctim    char(8) default ' ' not null,
  mhinuuid    char(10) default ' ' not null,
  mhinudat    char(8) default ' ' not null,
  mhinutim    char(8) default ' ' not null,
  mhinfiln    char(12) default ' ' not null,
  mhineflg    char(2) default ' ' not null,
  mhinspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index mehinca1 on mehincaf
(
mhinseid
);
create unique index mehinca2 on mehincaf
(
mhinfdat,
mhinseid
);
revoke all on mehincaf from public ; 
grant select on mehincaf to public ; 
