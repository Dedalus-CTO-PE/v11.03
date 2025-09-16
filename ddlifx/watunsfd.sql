create table watunsaf
(
wtundate    char(6),
wtununit    char(3),
wtundoct    char(6),
wtunprty    char(3),
wtunrng1    decimal(8,0),
wtunrng2    decimal(8,0),
wtunrng3    decimal(8,0),
wtunrng4    decimal(8,0),
wtunrng5    decimal(8,0),
wtunrng6    decimal(8,0),
wtundycs    decimal(8,0),
wtuninpt    decimal(8,0),
wtunspar    char(1),
lf          char(1)
);
create unique index watunsa1 on watunsaf
(
wtundate,
wtununit,
wtundoct,
wtunprty
);
revoke all on watunsaf from public ; 
grant select on watunsaf to public ; 
