create table fmsnraaf
(
  fmnacode    char(3) default ' ' not null,
  fmnaledg    char(2) default ' ' not null,
  fmnadesc    char(40) default ' ' not null,
  fmnaspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnraa1 on fmsnraaf
(
fmnacode
);
revoke all on fmsnraaf from public ; 
grant select on fmsnraaf to public ; 
