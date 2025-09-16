create table priikiaf
(
priktflg    char(2),
prikkitm    char(9),
prikkkwd    char(15),
prikkspa    char(10),
lf          char(1)
);
create unique index priikia1 on priikiaf
(
priktflg,
prikkitm,
prikkkwd
);
create unique index priikia2 on priikiaf
(
priktflg,
prikkkwd,
prikkitm
);
revoke all on priikiaf from public ; 
grant select on priikiaf to public ; 
