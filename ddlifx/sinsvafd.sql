create table sinsvaaf
(
sivacod     char(4),
sivades     char(30),
sivacst     char(5),
sivaprd     char(5),
sivapn      char(30),
sivasut     char(15),
sivaled     decimal(4,0),
sivaqty     decimal(14,2),
sivaamt     decimal(16,4),
sivagsta    decimal(16,4),
sivagst     char(6),
sivaur1     char(15),
sivaur2     char(15),
sivaud1     char(8),
sivaud2     char(8),
sivauy1     char(1),
sivauy2     char(1),
sivaspa     char(20),
lf          char(1)
);
create unique index sinsvaa1 on sinsvaaf
(
sivacod
);
revoke all on sinsvaaf from public ; 
grant select on sinsvaaf to public ; 
