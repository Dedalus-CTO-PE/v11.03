create table legdadaf
(
  dlptdaad    char(8) default ' ' not null,
  lptdaadt    char(5) default ' ' not null,
  lptdadct    char(5) default ' ' not null,
  lptdaspa    char(11) default ' ' not null,
  lf          char(1)
);
create unique index legdada1 on legdadaf
(
dlptdaad
);
revoke all on legdadaf from public ; 
grant select on legdadaf to public ; 
