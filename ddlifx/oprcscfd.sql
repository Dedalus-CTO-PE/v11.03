create table oprcscaf
(
opccdate    char(6),
opccdoct    char(6),
opcctype    char(1),
opcctime    char(3),
dopcccty    char(1),
opcccode    char(3),
opccnumb    decimal(6,0),
opccdura    decimal(6,0),
opccbrkt    decimal(6,0),
opccspar    char(5),
lf          char(1)
);
create unique index oprcsca1 on oprcscaf
(
opccdate,
opccdoct,
opcctype,
opcctime,
dopcccty,
opcccode
);
revoke all on oprcscaf from public ; 
grant select on oprcscaf to public ; 
