create table sinbpsaf
(
sibpwar     char(5),
sibpcst     char(5),
sibpdel     char(50),
sibprac     char(8),
sibpcat     char(7),
sibptyp     char(1),
sibpreq     char(7),
sibprqt     decimal(14,2),
sibpaqt     decimal(14,2),
sibpbqt     decimal(14,2),
sibppfl     char(2),
sibpresi    char(10),
sibpspa     char(10),
lf          char(1)
);
create unique index sinbpsa1 on sinbpsaf
(
sibpwar,
sibpcst,
sibpdel,
sibprac,
sibpcat,
sibptyp,
sibpreq
);
revoke all on sinbpsaf from public ; 
grant select on sinbpsaf to public ; 
