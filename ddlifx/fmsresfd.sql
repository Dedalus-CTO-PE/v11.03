create table fmsresaf
(
  fmrscode    char(4) default ' ' not null,
  fmrsdesc    char(35) default ' ' not null,
  fmrstele    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsresa1 on fmsresaf
(
fmrscode
);
revoke all on fmsresaf from public ; 
grant select on fmsresaf to public ; 
