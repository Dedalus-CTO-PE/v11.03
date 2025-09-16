create table allwlnaf
(
  alwlurno    char(8) default ' ' not null,
  alwlpcod    char(9) default ' ' not null,
  alwlpcnt    char(2) default ' ' not null,
  alwlvisn    char(8) default ' ' not null,
  alwlspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allwlna1 on allwlnaf
(
alwlurno,
alwlpcod,
alwlpcnt
);
create unique index allwlna2 on allwlnaf
(
alwlvisn,
alwlurno,
alwlpcod,
alwlpcnt
);
revoke all on allwlnaf from public ; 
grant select on allwlnaf to public ; 
