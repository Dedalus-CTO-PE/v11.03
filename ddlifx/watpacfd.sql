create table watpacaf
(
wtpcurno    char(8),
wtpcpcod    char(9),
wtpcpcnt    char(2),
wtpcline    char(2),
wtpccomm    char(70),
wtpcspar    char(28),
lf          char(1)
);
create unique index watpaca1 on watpacaf
(
wtpcurno,
wtpcpcod,
wtpcpcnt,
wtpcline
);
revoke all on watpacaf from public ; 
grant select on watpacaf to public ; 
