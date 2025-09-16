create table patattaf
(
ptataddr    char(6),
ptatengl    char(25),
ptathori    char(30),
ptatspar    char(9),
lf          char(1)
);
create unique index patatta1 on patattaf
(
ptataddr
);
revoke all on patattaf from public ; 
grant select on patattaf to public ; 
