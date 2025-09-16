create table pritkiaf
(
prtkptst    char(9),
prtkpkwd    char(15),
prtkpspa    char(10),
lf          char(1)
);
create unique index pritkia1 on pritkiaf
(
prtkptst,
prtkpkwd
);
create unique index pritkia2 on pritkiaf
(
prtkpkwd,
prtkptst
);
revoke all on pritkiaf from public ; 
grant select on pritkiaf to public ; 
