create table sincijaf
(
siijcat     char(7),
siijlin     char(3),
siijcom     char(78),
siijspa     char(10),
lf          char(1)
);
create unique index sincija1 on sincijaf
(
siijcat,
siijlin
);
revoke all on sincijaf from public ; 
grant select on sincijaf to public ; 
