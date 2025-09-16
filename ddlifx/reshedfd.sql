create table reshedaf
(
  rehdrdt     char(8) default ' ' not null,
  rehdrtm     char(5) default ' ' not null,
  rehdrun     char(4) default ' ' not null,
  rehdrci     char(300) default ' ' not null,
  rehdspa     char(80) default ' ' not null,
  lf          char(1)
);
create unique index resheda1 on reshedaf
(
rehdrdt,
rehdrtm,
rehdrun
);
revoke all on reshedaf from public ; 
grant select on reshedaf to public ; 
