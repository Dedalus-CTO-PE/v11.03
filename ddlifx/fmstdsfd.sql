create table fmstdsaf
(
  fmtdcode    char(4) default ' ' not null,
  fmtddesc    char(35) default ' ' not null,
  lf          char(1)
);
create unique index fmstdsa1 on fmstdsaf
(
fmtdcode
);
revoke all on fmstdsaf from public ; 
grant select on fmstdsaf to public ; 
