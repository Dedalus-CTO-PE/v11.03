create table patwaud
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index patwaud1 on patwaud
(
sector
);
revoke all on patwaud from public ;
grant select on patwaud to public ;
