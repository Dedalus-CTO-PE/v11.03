create table fmsdisaf
(
  fmdscode    char(5) default ' ' not null,
  fmdsdesc    char(20) default ' ' not null,
  fmdsspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsdisa1 on fmsdisaf
(
fmdscode
);
revoke all on fmsdisaf from public ; 
grant select on fmsdisaf to public ; 
