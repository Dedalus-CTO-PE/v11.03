create table obspinaf
(
obpnvisn    char(8),
obpnpdia    char(9),
obpnppro    char(9),
obpnreaa    char(3),
obpnspar    char(50),
lf          char(1)
);
create unique index obspina1 on obspinaf
(
obpnvisn
);
revoke all on obspinaf from public ; 
grant select on obspinaf to public ; 
