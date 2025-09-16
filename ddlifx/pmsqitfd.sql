create table pmsqitaf
(
dpmqimes    char(20),
pmqitran    char(6),
pmqiitem    char(9),
pmqitdat    char(8),
pmqiserv    decimal(5,0),
pmqittyp    char(1),
pmqidoct    char(10),
pmqisess    char(2),
pmqiamnt    decimal(14,2),
pmqigstc    char(6),
pmqihfnd    char(6),
pmqistim    char(8),
pmqispar    char(21),
lf          char(1)
);
create unique index pmsqita1 on pmsqitaf
(
dpmqimes
);
revoke all on pmsqitaf from public ; 
grant select on pmsqitaf to public ; 
