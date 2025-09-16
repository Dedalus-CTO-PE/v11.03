create table oprhisaf
(
ophiurno    char(8),
ophievnt    char(8),
ophiuniq    char(10),
ophiedat    char(8),
dophiucn    char(4),
ophidate    char(8),
ophichgd    char(3),
ophitchg    decimal(2,0),
ophispar    char(43),
lf          char(1)
);
create unique index oprhisa1 on oprhisaf
(
ophiurno,
ophievnt,
ophiuniq,
ophiedat,
dophiucn
);
revoke all on oprhisaf from public ; 
grant select on oprhisaf to public ; 
