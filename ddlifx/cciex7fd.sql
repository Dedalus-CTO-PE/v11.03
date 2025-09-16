create table cciex7af
(
  clexstat    char(1) default ' ' not null,
  dclextyp    char(2) default ' ' not null,
  dclexvis    char(8) default ' ' not null,
  clexspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index cciex7a1 on cciex7af
(
clexstat,
dclextyp,
dclexvis
);
revoke all on cciex7af from public ; 
grant select on cciex7af to public ; 
