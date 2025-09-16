create table watlhiaf
(
wtlhurno    char(8),
wtlhcode    char(9),
dwtlhcon    char(2),
wtlhdate    char(8),
dwtlhlnu    char(3),
wtlhrply    char(3),
wtlhactn    char(3),
wtlhrepr    char(8),
wtlhuser    char(10),
wtlhspar    char(12),
lf          char(1)
);
create unique index watlhia1 on watlhiaf
(
wtlhurno,
wtlhcode,
dwtlhcon,
wtlhdate,
dwtlhlnu
);
revoke all on watlhiaf from public ; 
grant select on watlhiaf to public ; 
