create table legvisaf
(
  lviurno     char(8) default ' ' not null,
  lvidate     char(8) default ' ' not null,
  dlvibill    char(8) default ' ' not null,
  lvitype     decimal(1,0) default 0 not null,
  lvidoct     char(6) default ' ' not null,
  lvistat     decimal(1,0) default 0 not null,
  lvitran     decimal(6,0) default 0 not null,
  lvilock     char(2) default ' ' not null,
  lvisite     char(6) default ' ' not null,
  lvilett     char(8) default ' ' not null,
  lvispar     char(9) default ' ' not null,
  lf          char(1)
);
create unique index legvisa1 on legvisaf
(
dlvibill
);
create unique index legvisa2 on legvisaf
(
lviurno,
lvidate,
dlvibill
);
create unique index legvisa3 on legvisaf
(
lvidoct,
lvidate,
dlvibill
);
revoke all on legvisaf from public ; 
grant select on legvisaf to public ; 
