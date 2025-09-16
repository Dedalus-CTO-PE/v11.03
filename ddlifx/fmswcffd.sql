create table fmswcfaf
(
  fmwcledg    char(2) default ' ' not null,
  fmwcacct    char(12) default ' ' not null,
  fmwcur1     char(25) default ' ' not null,
  fmwcur2     char(25) default ' ' not null,
  fmwcud1     char(8) default ' ' not null,
  fmwcud2     char(8) default ' ' not null,
  fmwcuy1     char(1) default ' ' not null,
  fmwcuy2     char(1) default ' ' not null,
  fmwcspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmswcfa1 on fmswcfaf
(
fmwcledg,
fmwcacct
);
revoke all on fmswcfaf from public ; 
grant select on fmswcfaf to public ; 
