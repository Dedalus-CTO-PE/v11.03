create table watataaf
(
wtatdate    char(6),
wtatdoct    char(6),
wtatunit    char(3),
wtatproc    char(9),
wtatrng1    decimal(8,0),
wtatrng2    decimal(8,0),
wtatrng3    decimal(8,0),
wtatrng4    decimal(8,0),
wtatrng5    decimal(8,0),
wtatrng6    decimal(8,0),
wtatrng7    decimal(8,0),
wtatmean    decimal(4,0),
wtatmax     decimal(4,0),
wtatwith    decimal(8,0),
wtatodue    decimal(8,0),
wtathosp    decimal(8,0),
wtatpat     decimal(8,0),
wtatoth     decimal(8,0),
wtatspar    char(19),
lf          char(1)
);
create unique index watataa1 on watataaf
(
wtatdate,
wtatproc,
wtatdoct,
wtatunit
);
create unique index watataa2 on watataaf
(
wtatdate,
wtatdoct,
wtatproc,
wtatunit
);
create unique index watataa3 on watataaf
(
wtatdate,
wtatunit,
wtatproc,
wtatdoct
);
revoke all on watataaf from public ; 
grant select on watataaf to public ; 
