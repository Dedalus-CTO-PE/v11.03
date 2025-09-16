create table sinipsaf
(
siipwar     char(5),
siipcst     char(5),
siipdel     char(50),
siiprac     char(8),
siipcat     char(7),
siiptyp     char(1),
siipreq     char(7),
siiprqt     decimal(14,2),
siipaqt     decimal(14,2),
siipbqt     decimal(14,2),
siippfl     char(2),
siipimp     char(4),
siipresi    char(10),
siipspa     char(10),
lf          char(1)
);
create unique index sinipsa1 on sinipsaf
(
siipwar,
siipcst,
siipdel,
siiprac,
siipcat,
siiptyp,
siipreq
);
create unique index sinipsa2 on sinipsaf
(
siipwar,
siipcst,
siipdel,
siipimp,
siiprac,
siipcat,
siiptyp,
siipreq
);
revoke all on sinipsaf from public ; 
grant select on sinipsaf to public ; 
