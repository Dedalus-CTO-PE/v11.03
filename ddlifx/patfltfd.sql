create table patfltrf
(
  dptflltn    char(3) default ' ' not null,
  dptfllin    char(3) default ' ' not null,
  ptfltext    char(70) default ' ' not null,
  ptfllvar    decimal(1,0) default 0 not null,
  ptflpbot    decimal(2,0) default 0 not null,
  ptflptop    decimal(2,0) default 0 not null,
  ptflppag    decimal(3,0) default 0 not null,
  ptflptab    decimal(2,0) default 0 not null,
  ptflactv    char(1) default ' ' not null,
  ptflspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index patflet1 on patfltrf
(
dptflltn,
dptfllin
);
create unique index patflet2 on patfltrf
(
dptfllin,
dptflltn
);
revoke all on patfltrf from public ; 
grant select on patfltrf to public ; 
