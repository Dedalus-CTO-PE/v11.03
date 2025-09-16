create table pathlfaf
(
pthlclmn    char(3),
pthlhfnd    char(6),
pthltabt    char(3),
pthlcasm    char(9),
pthldes1    char(30),
pthldes2    char(35),
pthllreb    decimal(14,2),
pthllpat    decimal(14,2),
pthlcoff    decimal(5,0),
pthlinvb    decimal(1,0),
pthlinvi    decimal(1,0),
pthlninv    decimal(1,0),
pthlcnid    char(6),
pthlspar    char(9),
lf          char(1)
);
create unique index pathlfa1 on pathlfaf
(
pthlcnid,
pthlclmn,
pthlhfnd,
pthltabt,
pthlcasm
);
create unique index pathlfa2 on pathlfaf
(
pthlclmn,
pthlhfnd,
pthltabt,
pthlcasm,
pthlcnid
);
revoke all on pathlfaf from public ; 
grant select on pathlfaf to public ; 
