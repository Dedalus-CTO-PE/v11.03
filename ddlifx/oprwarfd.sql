create table oprwaraf
(
opwadate    char(6),
opwaward    char(3),
opwancas    decimal(6,0),
opwanopr    decimal(6,0),
opwaspar    char(10),
lf          char(1)
);
create unique index oprwara1 on oprwaraf
(
opwadate,
opwaward
);
revoke all on oprwaraf from public ; 
grant select on oprwaraf to public ; 
