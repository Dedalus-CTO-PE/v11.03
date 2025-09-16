create table fmshccaf
(
  fmhainst    char(3) default ' ' not null,
  fmhahccc    char(5) default ' ' not null,
  fmhaledg    char(2) default ' ' not null,
  fmhacoce    char(12) default ' ' not null,
  fmhaspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmshcca1 on fmshccaf
(
fmhainst,
fmhahccc
);
revoke all on fmshccaf from public ; 
grant select on fmshccaf to public ; 
