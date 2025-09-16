create table patechaf
(
ptecctyp    char(3),
ptecatyp    char(3),
ptecmbsc    char(9),
dptecuni    char(3),
ptecemch    char(9),
ptecoppc    char(3),
ptec1mcf    decimal(5,2),
ptec2mcf    decimal(5,2),
ptec3mcf    decimal(5,2),
ptecspar    char(57),
lf          char(1)
);
create unique index patecha1 on patechaf
(
ptecctyp,
ptecatyp,
ptecmbsc,
dptecuni
);
revoke all on patechaf from public ; 
grant select on patechaf to public ; 
