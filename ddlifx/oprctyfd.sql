create table oprctyaf
(
  opcyuniq    char(10) default ' ' not null,
  opcyteam    char(1) default ' ' not null,
  opcycntr    char(2) default ' ' not null,
  opcyitem    char(9) default ' ' not null,
  opcyctyp    char(1) default ' ' not null,
  opcyquan    decimal(4,0) default 0 not null,
  opcycdat    char(8) default ' ' not null,
  opcyctim    char(8) default ' ' not null,
  opcycuid    char(10) default ' ' not null,
  opcyudat    char(8) default ' ' not null,
  opcyutim    char(8) default ' ' not null,
  opcyuuid    char(10) default ' ' not null,
  opcyspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index oprctya1 on oprctyaf
(
opcyuniq,
opcyteam,
opcycntr
);
create unique index oprctya2 on oprctyaf
(
opcyuniq,
opcyteam,
opcyitem,
opcycntr
);
revoke all on oprctyaf from public ; 
grant select on oprctyaf to public ; 
