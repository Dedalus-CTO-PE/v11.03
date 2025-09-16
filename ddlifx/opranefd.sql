create table opranaef
(
opandate    char(6),
opandoct    char(6),
opantype    char(3),
opannumb    decimal(6,0),
opanspar    char(10),
lf          char(1)
);
create unique index opranae1 on opranaef
(
opandate,
opandoct,
opantype
);
revoke all on opranaef from public ; 
grant select on opranaef to public ; 
