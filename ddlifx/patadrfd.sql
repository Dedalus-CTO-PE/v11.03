create table patraud
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index patraud1 on patraud
(
sector
);
revoke all on patraud from public ;
grant select on patraud to public ;
