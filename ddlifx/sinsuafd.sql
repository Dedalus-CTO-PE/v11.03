create table sinaudsa
(
sisaaudd    char(8),
sisaaudt    char(8),
sisaaudp    char(2),
sisaaudr    char(1),
sisaauds    decimal(1,0),
sisaaudo    char(4),
sisacode    char(5),
sisadesc    char(30),
sisacomm    char(6),
sisagli     char(12),
sisaur1     char(15),
sisaur2     char(15),
sisaud1     char(8),
sisaud2     char(8),
sisauc1     char(3),
sisauc2     char(3),
sisauy1     char(1),
sisauy2     char(1),
sisaspa     char(19),
lf          char(1)
);
create index sinaudsa on sinaudsa
(
sisaaudd,
sisaaudt,
sisaaudp,
sisaaudr
);
revoke all on sinaudsa from public ; 
grant select on sinaudsa to public ; 
create table sinsuaaf
(
sisacode    char(5),
sisadesc    char(30),
sisacomm    char(6),
sisagli     char(12),
sisaur1     char(15),
sisaur2     char(15),
sisaud1     char(8),
sisaud2     char(8),
sisauc1     char(3),
sisauc2     char(3),
sisauy1     char(1),
sisauy2     char(1),
sisaspa     char(19),
lf          char(1)
);
create unique index sinsuaa1 on sinsuaaf
(
sisacode
);
create unique index sinsuaa2 on sinsuaaf
(
sisadesc,
sisacode
);
create unique index sinsuaa3 on sinsuaaf
(
sisacomm,
sisacode
);
revoke all on sinsuaaf from public ; 
grant select on sinsuaaf to public ; 
