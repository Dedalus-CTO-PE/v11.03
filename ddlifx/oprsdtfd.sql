create table oprsdtaf
(
  opsduniq    char(10) default ' ' not null,
  opsdtnum    char(1) default ' ' not null,
  opsdstyp    char(2) default ' ' not null,
  opsdsnam    char(60) default ' ' not null,
  opsdsdat    char(8) default ' ' not null,
  opsdstim    char(8) default ' ' not null,
  opsdedat    char(8) default ' ' not null,
  opsdetim    char(8) default ' ' not null,
  opsdslev    char(3) default ' ' not null,
  opsdstcc    char(3) default ' ' not null,
  opsdfict    char(1) default ' ' not null,
  opsduyn1    char(1) default ' ' not null,
  opsdspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index oprsdta1 on oprsdtaf
(
opsduniq,
opsdtnum,
opsdstyp,
opsdsnam,
opsdsdat,
opsdstim
);
revoke all on oprsdtaf from public ; 
grant select on oprsdtaf to public ; 
