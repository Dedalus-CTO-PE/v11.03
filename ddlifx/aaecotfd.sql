create table aaecotaf
(
  aectdate    char(8) default ' ' not null,
  aecttime    char(5) default ' ' not null,
  aectcons    char(6) default ' ' not null,
  aectspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index aaecota1 on aaecotaf
(
aectdate,
aecttime
);
revoke all on aaecotaf from public ; 
grant select on aaecotaf to public ; 
