create table pataa1af
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index pataa1a1 on pataa1af
(
sector
);
revoke all on pataa1af from public ;
grant select on pataa1af to public ;
