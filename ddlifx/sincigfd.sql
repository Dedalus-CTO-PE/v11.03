create table sincigaf
(
siigcat     char(7),
siigwar     char(5),
siiglin     char(3),
siigcom     char(78),
siigspa     char(20),
lf          char(1)
);
create unique index sinciga1 on sincigaf
(
siigcat,
siigwar,
siiglin
);
revoke all on sincigaf from public ; 
grant select on sincigaf to public ; 
