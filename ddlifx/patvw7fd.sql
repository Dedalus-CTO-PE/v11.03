create table patvw7af
(
ptw7drgc    char(4),
ptw7sdmt    char(1),
ptw7mvel    char(1),
ptw7cpay    char(1),
ptw7libp    decimal(4,0),
ptw7hibp    decimal(4,0),
ptw7ilos    decimal(6,2),
ptw7sdod    char(1),
ptw7fsdw    decimal(10,4),
ptw7vsdw    decimal(10,4),
ptw7tsdw    decimal(10,4),
ptw7fodw    decimal(10,4),
ptw7vodw    decimal(10,4),
ptw7todw    decimal(10,4),
ptw7flom    decimal(10,4),
ptw7vlom    decimal(10,4),
ptw7tlom    decimal(10,4),
ptw7fimw    decimal(10,4),
ptw7vimw    decimal(10,4),
ptw7timw    decimal(10,4),
ptw7fhom    decimal(10,4),
ptw7vhom    decimal(10,4),
ptw7thom    decimal(10,4),
ptw7spar    char(50),
lf          char(1)
);
create unique index patvw7a1 on patvw7af
(
ptw7drgc
);
revoke all on patvw7af from public ; 
grant select on patvw7af to public ; 
