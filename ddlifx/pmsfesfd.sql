create table pmsfesaf
(
pmfsquot    char(12),
dpmfsuni    char(5),
pmfsurno    char(8),
pmfsrect    char(1),
pmfslumh    decimal(14,2),
pmfslumf    decimal(14,2),
pmfsdafr    decimal(5,0),
pmfsdayt    decimal(5,0),
pmfsdayh    decimal(14,2),
pmfsdahf    decimal(14,2),
pmfsthit    char(9),
pmfstheh    decimal(14,2),
pmfsthef    decimal(14,2),
pmfsquan    decimal(3,0),
pmfsbtyp    char(3),
pmfsgsta    decimal(14,2),
pmfsgstp    char(1),
pmfsgstc    char(6),
pmfsspar    char(30),
lf          char(1)
);
create unique index pmsfesa1 on pmsfesaf
(
pmfsquot,
dpmfsuni
);
create unique index pmsfesa2 on pmsfesaf
(
pmfsquot,
pmfsrect,
dpmfsuni
);
revoke all on pmsfesaf from public ; 
grant select on pmsfesaf to public ; 
