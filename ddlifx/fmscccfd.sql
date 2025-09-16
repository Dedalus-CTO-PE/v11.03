create table fmscccaf
(
  fmcfledg    char(2) default ' ' not null,
  fmcfccos    char(12) default ' ' not null,
  fmcfscos    char(12) default ' ' not null,
  fmcfdesc    char(35) default ' ' not null,
  fmcfppos    char(5) default ' ' not null,
  fmcfprt     char(3) default ' ' not null,
  fmcfcrp     char(1) default ' ' not null,
  fmcfspar    char(16) default ' ' not null,
  lf          char(1)
);
create unique index fmsccca1 on fmscccaf
(
fmcfledg,
fmcfccos,
fmcfscos
);
create unique index fmsccca2 on fmscccaf
(
fmcfledg,
fmcfscos,
fmcfccos
);
revoke all on fmscccaf from public ; 
grant select on fmscccaf to public ; 
