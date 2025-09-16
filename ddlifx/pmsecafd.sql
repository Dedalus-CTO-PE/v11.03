create table pmsecaaf
(
pmeainvn    char(8),
pmeadate    char(8),
pmeatime    char(8),
pmeabatn    char(8),
pmeastat    decimal(2,0),
pmeatype    char(2),
pmeaoper    char(10),
pmeatrid    char(24),
pmeaeror    char(4),
pmeaerot    char(100),
pmeaspar    char(31),
lf          char(1)
);
create unique index pmsecaa1 on pmsecaaf
(
pmeainvn,
pmeadate,
pmeatime,
pmeatype
);
create unique index pmsecaa2 on pmsecaaf
(
pmeadate,
pmeatime,
pmeatype,
pmeainvn
);
create unique index pmsecaa3 on pmsecaaf
(
pmeainvn,
pmeabatn,
pmeadate,
pmeatime,
pmeatype
);
revoke all on pmsecaaf from public ; 
grant select on pmsecaaf to public ; 
