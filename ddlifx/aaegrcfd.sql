create table aaegrcaf
(
  aerccode    char(2) default ' ' not null,
  aercdesc    char(20) default ' ' not null,
  aercflag    char(1) default ' ' not null,
  aercspar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index aaegrca1 on aaegrcaf
(
aerccode
);
revoke all on aaegrcaf from public ; 
grant select on aaegrcaf to public ; 
