create table pmscdnaf
(
pmdnvisn    char(8),
pmdnurno    char(8),
pmdnstat    char(1),
pmdnpw01    char(5),
pmdnpw02    char(5),
pmdnpw03    char(5),
pmdnpw04    char(5),
pmdnpw05    char(5),
pmdnpw06    char(5),
pmdnpw07    char(5),
pmdnpw08    char(5),
pmdnpw09    char(5),
pmdnpw10    char(5),
pmdnspar    char(50),
lf          char(1)
);
create unique index pmscdna1 on pmscdnaf
(
pmdnvisn
);
create unique index pmscdna2 on pmscdnaf
(
pmdnurno,
pmdnvisn
);
revoke all on pmscdnaf from public ; 
grant select on pmscdnaf to public ; 
