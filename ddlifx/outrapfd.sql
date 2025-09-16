create table outrapaf
(
dotrpobk    char(8),
dotrprbk    char(8),
otrpdate    char(8),
otrptime    char(5),
otrplogi    char(4),
otrpspar    char(26),
lf          char(1)
);
create unique index outrapa1 on outrapaf
(
dotrpobk,
dotrprbk
);
create unique index outrapa2 on outrapaf
(
dotrprbk,
dotrpobk
);
revoke all on outrapaf from public ; 
grant select on outrapaf to public ; 
