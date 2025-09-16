create table watespaf
(
wtepurno    char(8),
wtepedat    char(8),
wteppdob    char(8),
wteppsex    char(1),
wtepmedi    char(10),
wtepmref    char(1),
wtepresi    char(3),
wteppost    char(4),
wtepsubr    char(35),
wtepwebc    char(10),
wtepcdat    char(8),
wtepctim    char(8),
wtepwebu    char(10),
wtepudat    char(8),
wteputim    char(8),
wtepabrg    char(3),
wtepedob    char(1),
wtepspar    char(46),
lf          char(1)
);
create unique index watespa1 on watespaf
(
wtepurno,
wtepedat
);
create unique index watespa2 on watespaf
(
wtepedat,
wtepurno
);
revoke all on watespaf from public ; 
grant select on watespaf to public ; 
