create table sinaudfa
(
sifaaudd    char(8),
sifaaudt    char(8),
sifaaudp    char(2),
sifaaudr    char(1),
sifaauds    decimal(1,0),
sifaaudo    char(4),
sifaissu    char(15),
sifasupp    char(15),
sifactor    decimal(4,0),
sifafill    char(15),
lf          char(1)
);
create index sinaudfa on sinaudfa
(
sifaaudd,
sifaaudt,
sifaaudp,
sifaaudr
);
revoke all on sinaudfa from public ; 
grant select on sinaudfa to public ; 
create table sinfacaf
(
sifaissu    char(15),
sifasupp    char(15),
sifactor    decimal(4,0),
sifafill    char(15),
lf          char(1)
);
create unique index sinfaca1 on sinfacaf
(
sifaissu,
sifasupp
);
create unique index sinfaca2 on sinfacaf
(
sifasupp,
sifaissu
);
revoke all on sinfacaf from public ; 
grant select on sinfacaf to public ; 
