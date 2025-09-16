create table fmstupaf
(
  fmtuport    char(2) default ' ' not null,
  fmtuspec    char(4) default ' ' not null,
  fmtutled    char(2) default ' ' not null,
  fmtutacc    char(12) default ' ' not null,
  fmtulev     char(3) default ' ' not null,
  fmtuact     char(1) default ' ' not null,
  fmtubud     char(1) default ' ' not null,
  fmtuspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index fmstupa1 on fmstupaf
(
fmtuport,
fmtuspec,
fmtutled,
fmtutacc
);
create unique index fmstupa2 on fmstupaf
(
fmtuport,
fmtuact,
fmtulev,
fmtuspec,
fmtutled,
fmtutacc
);
create unique index fmstupa3 on fmstupaf
(
fmtuport,
fmtubud,
fmtulev,
fmtuspec,
fmtutled,
fmtutacc
);
revoke all on fmstupaf from public ; 
grant select on fmstupaf to public ; 
