create table sincibaf
(
siibcat     char(7),
siiblin     char(3),
siibcom     char(78),
siibspa     char(10),
lf          char(1)
);
create unique index sinciba1 on sincibaf
(
siibcat,
siiblin
);
revoke all on sincibaf from public ; 
grant select on sincibaf to public ; 
