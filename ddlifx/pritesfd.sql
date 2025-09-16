create table pritestf
(
prtecode    char(9),
prtedate    char(8),
prtedesc    char(30),
prteitmn    char(9),
prtesubn    char(3),
prteaman    char(9),
prtemser    char(5),
prtetesn    decimal(3,0),
prteabrv    char(4),
lf          char(1)
);
create unique index pritest1 on pritestf
(
prtecode,
prtedate
);
create unique index pritest2 on pritestf
(
prtemser,
prtecode,
prtedate
);
create unique index pritest3 on pritestf
(
prtedesc,
prtecode,
prtedate
);
revoke all on pritestf from public ; 
grant select on pritestf to public ; 
