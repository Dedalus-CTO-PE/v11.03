create table pmspbraf
(
  pmpbadmn    char(8) default ' ' not null,
  pmpbclty    char(3) default ' ' not null,
  pmpbdeft    char(1) default ' ' not null,
  pmpbcntr    char(3) default ' ' not null,
  pmpbicnt    char(3) default ' ' not null,
  pmpbitem    char(9) default ' ' not null,
  pmpbefdt    char(8) default ' ' not null,
  pmpbetdt    char(8) default ' ' not null,
  pmpbregm    char(10) default ' ' not null,
  pmpbmaxb    decimal(14,2) default 0 not null,
  pmpbmaxd    decimal(14,2) default 0 not null,
  pmpbcuid    char(10) default ' ' not null,
  pmpbcdat    char(8) default ' ' not null,
  pmpbctim    char(8) default ' ' not null,
  pmpbuuid    char(10) default ' ' not null,
  pmpbudat    char(8) default ' ' not null,
  pmpbutim    char(8) default ' ' not null,
  pmpbspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmspbra1 on pmspbraf
(
pmpbadmn,
pmpbclty,
pmpbefdt,
pmpbicnt
);
create unique index pmspbra2 on pmspbraf
(
pmpbadmn,
pmpbitem,
pmpbclty,
pmpbefdt,
pmpbicnt
);
create unique index pmspbra3 on pmspbraf
(
pmpbadmn,
pmpbclty,
pmpbefdt,
pmpbdeft,
pmpbicnt
);
create unique index pmspbra4 on pmspbraf
(
pmpbadmn,
pmpbicnt,
pmpbdeft,
pmpbcntr,
pmpbclty,
pmpbefdt
);
revoke all on pmspbraf from public ; 
grant select on pmspbraf to public ; 
