create table primabdf
(
prmainvn    char(8),
dprmaunq    char(8),
prmarefn    char(20),
prmapols    char(20),
prmasoln    char(30),
prmasad1    char(25),
prmasad2    char(25),
prmasad3    char(25),
prmaspcd    char(4),
prmasolt    char(12),
prmarego    char(36),
prmaaloc    char(40),
prmaatim    char(5),
prmaengd    char(20),
prmainjd    char(30),
prmaudf1    char(3),
prmaudf2    char(3),
prmamsev    char(30),
prmarsev    char(20),
prmaodd1    char(30),
prmaodd2    char(30),
prmaodd3    char(30),
prmaspar    char(4),
lf          char(1)
);
create unique index primabd1 on primabdf
(
prmainvn,
dprmaunq
);
create unique index primabd2 on primabdf
(
dprmaunq,
prmainvn
);
revoke all on primabdf from public ; 
grant select on primabdf to public ; 
