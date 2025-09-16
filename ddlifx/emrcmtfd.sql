create table emrcmtaf
(
  emcmline    char(2) default ' ' not null,
  emcmcmnt    char(70) default ' ' not null,
  emcmspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index emrcmta1 on emrcmtaf
(
emcmline
);
revoke all on emrcmtaf from public ; 
grant select on emrcmtaf to public ; 
