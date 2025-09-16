create table emrecaaf
(
  emeainvn    char(8) default ' ' not null,
  emeadate    char(8) default ' ' not null,
  emeatime    char(8) default ' ' not null,
  emeabatn    char(8) default ' ' not null,
  emeastat    decimal(2,0) default 0 not null,
  emeatype    char(2) default ' ' not null,
  emeaoper    char(10) default ' ' not null,
  emeatrid    char(24) default ' ' not null,
  emeaeror    char(4) default ' ' not null,
  emeaerot    char(100) default ' ' not null,
  emeamodl    char(1) default ' ' not null,
  emeaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrecaa1 on emrecaaf
(
emeainvn,
emeadate,
emeatime,
emeatype,
emeamodl
);
create unique index emrecaa2 on emrecaaf
(
emeadate,
emeatime,
emeatype,
emeainvn,
emeamodl
);
create unique index emrecaa3 on emrecaaf
(
emeainvn,
emeabatn,
emeadate,
emeatime,
emeatype,
emeamodl
);
revoke all on emrecaaf from public ; 
grant select on emrecaaf to public ; 
