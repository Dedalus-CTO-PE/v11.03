create table fmscnsaf
(
  fmcncled    char(2) default ' ' not null,
  fmcnrept    char(2) default ' ' not null,
  fmcnledg    char(2) default ' ' not null,
  fmcnspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index fmscnsa1 on fmscnsaf
(
fmcncled,
fmcnrept,
fmcnledg
);
revoke all on fmscnsaf from public ; 
grant select on fmscnsaf to public ; 
