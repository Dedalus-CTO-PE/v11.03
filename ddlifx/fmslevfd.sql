create table fmslevaf
(
  fmlvcode    char(3) default ' ' not null,
  fmlvdesc    char(20) default ' ' not null,
  fmlvspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsleva1 on fmslevaf
(
fmlvcode
);
revoke all on fmslevaf from public ; 
grant select on fmslevaf to public ; 
