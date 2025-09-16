create table fmslipaf
(
  fmlicode    char(3) default ' ' not null,
  fmliledg    char(2) default ' ' not null,
  fmlidesc    char(30) default ' ' not null,
  fmliref     char(15) default ' ' not null,
  fmlidiss    char(5) default ' ' not null,
  fmliresp    char(4) default ' ' not null,
  fmlicrac    char(12) default ' ' not null,
  fmlicraa    char(12) default ' ' not null,
  fmlispar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmslipa1 on fmslipaf
(
fmlicode,
fmliledg
);
revoke all on fmslipaf from public ; 
grant select on fmslipaf to public ; 
