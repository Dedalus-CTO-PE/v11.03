create table patad1af
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index patad1a1 on patad1af
(
sector
);
revoke all on patad1af from public ;
grant select on patad1af to public ;
