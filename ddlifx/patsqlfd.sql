create table patsqlaf
(
ptsqprog    char(8),
ptsqpath    char(60),
ptsqspar    char(30),
lf          char(1)
);
create unique index patsqla1 on patsqlaf
(
ptsqprog
);
revoke all on patsqlaf from public ; 
grant select on patsqlaf to public ; 
