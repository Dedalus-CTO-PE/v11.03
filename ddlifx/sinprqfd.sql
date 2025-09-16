create table sinprqaf
(
siprwar     char(5),
siprcst     char(5),
siprdel     char(50),
siprrac     char(8),
siprcat     char(7),
siprtyp     char(1),
siprreq     char(7),
siprrqt     decimal(14,2),
sipraqt     decimal(14,2),
siprbqt     decimal(14,2),
siprpfl     char(2),
siprspa     char(20),
lf          char(1)
);
create unique index sinprqa1 on sinprqaf
(
siprwar,
siprcst,
siprdel,
siprrac,
siprcat,
siprtyp,
siprreq
);
create unique index sinprqa2 on sinprqaf
(
siprcat,
siprwar,
siprtyp,
siprreq,
siprcst,
siprdel,
siprrac
);
revoke all on sinprqaf from public ; 
grant select on sinprqaf to public ; 
