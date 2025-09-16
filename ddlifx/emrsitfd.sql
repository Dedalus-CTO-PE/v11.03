create table emrsitaf
(
  emstscod    char(3) default ' ' not null,
  emstdesc    char(25) default ' ' not null,
  emsthrpw    decimal(6,0) default 0 not null,
  emstdpty    char(3) default ' ' not null,
  emstspco    char(3) default ' ' not null,
  emstspno    char(10) default ' ' not null,
  emsthsno    char(3) default ' ' not null,
  emstdloc    char(3) default ' ' not null,
  emstdrlc    char(4) default ' ' not null,
  emstdres    char(4) default ' ' not null,
  emstedst    char(6) default ' ' not null,
  emstedfp    char(6) default ' ' not null,
  emstactv    char(1) default ' ' not null,
  emstpprv    char(8) default ' ' not null,
  emstspar    char(74) default ' ' not null,
  lf          char(1)
);
create unique index emrsita1 on emrsitaf
(
emstscod
);
create unique index emrsita2 on emrsitaf
(
emstdesc,
emstscod
);
revoke all on emrsitaf from public ; 
grant select on emrsitaf to public ; 
