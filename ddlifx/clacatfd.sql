create table clacataf
(
  cactsite    char(6) default ' ' not null,
  dcactuni    char(2) default ' ' not null,
  cactcode    char(2) default ' ' not null,
  cactchge    char(2) default ' ' not null,
  cactspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index clacata1 on clacataf
(
cactsite,
dcactuni
);
revoke all on clacataf from public ; 
grant select on clacataf to public ; 
