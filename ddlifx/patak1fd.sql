create table patak1af
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index patak1a1 on patak1af
(
sector
);
revoke all on patak1af from public ;
grant select on patak1af to public ;
