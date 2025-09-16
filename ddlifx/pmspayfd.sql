create table pmspayaf
(
pmpaurno    char(8),
pmpapayc    char(6),
pmpaseqn    char(2),
pmpacomm    char(30),
pmpaactv    char(1),
pmpacdat    char(8),
pmpactim    char(8),
pmpacuid    char(10),
pmpaudat    char(8),
pmpautim    char(8),
pmpauuid    char(10),
pmpaspar    char(50),
lf          char(1)
);
create unique index pmspaya1 on pmspayaf
(
pmpaurno,
pmpapayc
);
create unique index pmspaya2 on pmspayaf
(
pmpaurno,
pmpaseqn
);
revoke all on pmspayaf from public ; 
grant select on pmspayaf to public ; 
