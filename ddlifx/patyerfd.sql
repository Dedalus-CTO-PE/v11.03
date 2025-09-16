create table patyears
(
dfstyear    char(4),
fstday      decimal(1,0),
fstspar     char(20),
lf          char(1)
);
create unique index patyear1 on patyears
(
dfstyear
);
revoke all on patyears from public ; 
grant select on patyears to public ; 
