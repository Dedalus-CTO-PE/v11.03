create table patsurnf
(
sdxkey      char(10),
sdxsnam     char(20),
sdxgnam     char(25),
sdxurno     char(8),
dsdxbill    char(8),
sdxsys      decimal(1,0),
lf          char(1)
);
create unique index patsurn1 on patsurnf
(
sdxkey,
sdxgnam,
sdxsnam,
sdxurno,
dsdxbill
);
create unique index patsurn2 on patsurnf
(
sdxsnam,
sdxgnam,
sdxurno,
dsdxbill
);
create unique index patsurn3 on patsurnf
(
sdxurno,
dsdxbill,
sdxsnam,
sdxgnam
);
revoke all on patsurnf from public ; 
grant select on patsurnf to public ; 
