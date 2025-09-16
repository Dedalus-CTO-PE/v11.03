create table pathaud
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index pathaud1 on pathaud
(
sector
);
revoke all on pathaud from public ;
grant select on pathaud to public ;
