create table patvw8af
(
ptw8drgc    char(4),
ptw8sdmt    char(1),
ptw8mvel    char(1),
ptw8cpay    char(1),
ptw8libp    decimal(4,0),
ptw8hibp    decimal(4,0),
ptw8ilos    decimal(6,2),
ptw8sdod    char(1),
ptw8tsdw    decimal(10,4),
ptw8todw    decimal(10,4),
ptw8tlom    decimal(10,4),
ptw8timw    decimal(10,4),
ptw8thom    decimal(10,4),
ptw8spar    char(50),
lf          char(1)
);
create unique index patvw8a1 on patvw8af
(
ptw8drgc
);
revoke all on patvw8af from public ; 
grant select on patvw8af to public ; 
