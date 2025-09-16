create table pmsatcaf
(
  pmatreqn    char(10) default ' ' not null,
  pmattype    char(3) default ' ' not null,
  pmatcntr    char(3) default ' ' not null,
  pmatline    char(3) default ' ' not null,
  pmatdata    char(100) default ' ' not null,
  pmatspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsatca1 on pmsatcaf
(
pmatreqn,
pmattype,
pmatcntr,
pmatline
);
revoke all on pmsatcaf from public ; 
grant select on pmsatcaf to public ; 
