create table prifltrf
(
dprflnum    char(3),
dprfllin    char(3),
prfltext    char(70),
prflvarb    decimal(1,0),
prflmbot    decimal(2,0),
prflmtop    decimal(2,0),
prflplen    decimal(3,0),
prflleft    decimal(2,0),
prlespar    char(8),
lf          char(1)
);
create unique index prifltr1 on prifltrf
(
dprflnum,
dprfllin
);
create unique index prifltr2 on prifltrf
(
dprfllin,
dprflnum
);
revoke all on prifltrf from public ; 
grant select on prifltrf to public ; 
