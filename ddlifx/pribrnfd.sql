create table pribrnaf
(
prbrprac    char(6),
prbrrang    char(3),
prbrfbat    char(8),
prbrtbat    char(8),
prbrnbat    char(8),
prbractv    char(1),
prbrcdat    char(8),
prbrctim    char(8),
prbrcuid    char(10),
prbrudat    char(8),
prbrutim    char(8),
prbruuid    char(10),
prbrspar    char(70),
lf          char(1)
);
create unique index pribrna1 on pribrnaf
(
prbrprac,
prbrrang
);
create unique index pribrna2 on pribrnaf
(
prbrfbat,
prbrtbat
);
create unique index pribrna3 on pribrnaf
(
prbrtbat,
prbrfbat
);
revoke all on pribrnaf from public ; 
grant select on pribrnaf to public ; 
