create table mrtstfaf
(
mrstcode    char(6),
mrsttitl    char(6),
mrstsnam    char(20),
mrstgnam    char(25),
mrstdept    char(3),
mrstcont    char(30),
mrstieph    char(12),
mrstbhph    char(12),
mrstahph    char(12),
mrstpagr    char(12),
mrstbcod    char(20),
mrststat    decimal(1,0),
mrstusag    decimal(1,0),
mrstspar    char(12),
lf          char(1)
);
create unique index mrtstfa1 on mrtstfaf
(
mrstcode
);
create unique index mrtstfa2 on mrtstfaf
(
mrstdept,
mrstcode
);
create unique index mrtstfa3 on mrtstfaf
(
mrstsnam,
mrstcode
);
revoke all on mrtstfaf from public ; 
grant select on mrtstfaf to public ; 
