create table pmsqccaf
(
dpmqcmes    char(20),
pmcdurno    char(8),
pmcdctyp    char(3),
pmcdcnum    char(20),
pmcdexdt    char(8),
pmqcspar    char(20),
lf          char(1)
);
create unique index pmsqcca1 on pmsqccaf
(
dpmqcmes
);
revoke all on pmsqccaf from public ; 
grant select on pmsqccaf to public ; 
