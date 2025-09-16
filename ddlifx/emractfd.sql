create table emractaf
(
  ematcode    char(30) default ' ' not null,
  ematfdat    char(8) default ' ' not null,
  emattdat    char(8) default ' ' not null,
  ematadmf    decimal(9,6) default 0 not null,
  ematdsdc    decimal(9,6) default 0 not null,
  ematraba    decimal(9,6) default 0 not null,
  ematrtah    decimal(9,6) default 0 not null,
  ematabam    decimal(9,6) default 0 not null,
  emattct1    decimal(9,6) default 0 not null,
  emattct2    decimal(9,6) default 0 not null,
  emattct3    decimal(9,6) default 0 not null,
  emattct4    decimal(9,6) default 0 not null,
  emattct5    decimal(9,6) default 0 not null,
  ematcdat    char(8) default ' ' not null,
  ematctim    char(8) default ' ' not null,
  ematcuid    char(10) default ' ' not null,
  ematudat    char(8) default ' ' not null,
  ematutim    char(8) default ' ' not null,
  ematuuid    char(10) default ' ' not null,
  emataflg    char(1) default ' ' not null,
  ematspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emracta1 on emractaf
(
ematcode,
ematfdat
);
revoke all on emractaf from public ; 
grant select on emractaf to public ; 
