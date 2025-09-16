create table wattmaaf
(
wttmdate    char(6),
wttmproc    char(9),
wttmrng1    decimal(8,0),
wttmrng2    decimal(8,0),
wttmrng3    decimal(8,0),
wttmrng4    decimal(8,0),
wttmrng5    decimal(8,0),
wttmrng6    decimal(8,0),
wttmrng7    decimal(8,0),
wttmmean    decimal(4,0),
wttmmedn    decimal(4,0),
wttmmax     decimal(4,0),
wttmspar    char(10),
lf          char(1)
);
create unique index wattmaa1 on wattmaaf
(
wttmdate,
wttmproc
);
revoke all on wattmaaf from public ; 
grant select on wattmaaf to public ; 
