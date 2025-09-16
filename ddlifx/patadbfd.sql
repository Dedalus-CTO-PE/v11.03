create table patbaud
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index patbaud1 on patbaud
(
sector
);
revoke all on patbaud from public ;
grant select on patbaud to public ;
