create table watnbraf
(
wtnburno    char(8),
wtnbcode    char(9),
wtnbcnt     char(2),
wtnbedat    char(8),
wtnbetim    char(8),
wtnbrtyp    char(1),
wtnbrsfl    char(1),
wtnbbnum    char(8),
wtnbudf1    char(3),
wtnbudf2    char(3),
wtnbudf3    char(3),
wtnbudf4    char(3),
wtnbudf5    char(3),
wtnbudf6    char(3),
wtnbudf7    char(3),
wtnbudf8    char(3),
wtnbdrsa    char(8),
wtnbdosa    char(8),
wtnbphsp    char(3),
wtnbtrag    char(4),
wtnbpchs    char(3),
wtnbbpro    char(2),
wtnbdtec    char(8),
wtnbspfl    char(3),
wtnbspar    char(80),
lf          char(1)
);
create unique index watnbra1 on watnbraf
(
wtnbrsfl,
wtnburno,
wtnbcode,
wtnbcnt,
wtnbedat,
wtnbetim
);
create unique index watnbra2 on watnbraf
(
wtnburno,
wtnbcode,
wtnbcnt,
wtnbedat,
wtnbetim
);
revoke all on watnbraf from public ; 
grant select on watnbraf to public ; 
