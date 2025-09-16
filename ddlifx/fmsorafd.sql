create table fmsoraaf
(
  fmorledg    char(2) default ' ' not null,
  fmoracct    char(12) default ' ' not null,
  fmorintr    char(3) default ' ' not null,
  fmorspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsoraa1 on fmsoraaf
(
fmorledg,
fmoracct
);
revoke all on fmsoraaf from public ; 
grant select on fmsoraaf to public ; 
