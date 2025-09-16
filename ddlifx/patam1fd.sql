create table patam1af
(
  sector      char(10) default ' ' not null,
  data        char(255) default ' ' not null,
  lf          char(1)
);
create unique index patam1a1 on patam1af
(
sector
);
revoke all on patam1af from public ;
grant select on patam1af to public ;
