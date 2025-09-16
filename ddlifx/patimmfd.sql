create table patimmaf
(
ptimurno    char(8),
ptimdate    char(8),
ptimtype    char(3),
ptimprov    char(6),
ptimpvty    decimal(1,0),
ptimdued    char(8),
ptimspar    char(24),
lf          char(1)
);
create unique index patimma1 on patimmaf
(
ptimurno,
ptimdate,
ptimtype
);
revoke all on patimmaf from public ; 
grant select on patimmaf to public ; 
