create table patclcaf
(
  ptclurno    char(8) default ' ' not null,
  ptcltype    char(3) default ' ' not null,
  ptclfdat    char(8) default ' ' not null,
  dptcllcn    char(3) default ' ' not null,
  ptcltext    char(50) default ' ' not null,
  ptclspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index patclca1 on patclcaf
(
ptclurno,
ptcltype,
ptclfdat,
dptcllcn
);
revoke all on patclcaf from public ; 
grant select on patclcaf to public ; 
