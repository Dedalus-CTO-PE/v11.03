create table sinallpp
(
sialcst     char(5),
sialsub     char(5),
sialwar     char(5),
sialcat     char(7),
sialdat     char(6),
sialuqt     decimal(14,2),
sialuam     decimal(14,2),
sinallnm    char(8),
lf          char(1)
);
create unique index sinalla1 on sinallpp
(
sialsub,
sialcat,
sialcst,
sialwar,
sialdat
);
create unique index sinalla2 on sinallpp
(
sialcst,
sialsub,
sialdat,
sialwar,
sialcat
);
create unique index sinalla3 on sinallpp
(
sialcst,
sialcat,
sialdat,
sialwar,
sialsub
);
create  index sinalla4 on sinallpp
(
sialcat,
sialdat
);
create  index sinalla5 on sinallpp
(
sialcat,
sialcst,
sialdat
);
revoke all on sinallpp from public ; 
grant select on sinallpp to public ; 
