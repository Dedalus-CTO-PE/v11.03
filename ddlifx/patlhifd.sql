create table patlhisf
(
  dptlhadm    char(8) default ' ' not null,
  ptlhdate    char(8) default ' ' not null,
  dptlhlco    char(3) default ' ' not null,
  ptlhtime    char(8) default ' ' not null,
  ptlhseid    char(4) default ' ' not null,
  ptlhspar    char(9) default ' ' not null,
  lf          char(1)
);
create unique index patlhis1 on patlhisf
(
dptlhadm,
ptlhdate,
dptlhlco
);
create unique index patlhis2 on patlhisf
(
dptlhlco,
ptlhdate,
dptlhadm
);
revoke all on patlhisf from public ; 
grant select on patlhisf to public ; 
