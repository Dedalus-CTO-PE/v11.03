create table aaegilaf
(
  aeilmain    char(4) default ' ' not null,
  aeilcode    char(2) default ' ' not null,
  aeildesc    char(20) default ' ' not null,
  aeilspar    char(23) default ' ' not null,
  lf          char(1)
);
create unique index aaegila1 on aaegilaf
(
aeilmain,
aeilcode
);
revoke all on aaegilaf from public ; 
grant select on aaegilaf to public ; 
