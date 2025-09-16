create table watswsaf
(
wtswdate    char(6),
wtswunit    char(3),
wtswprty    char(3),
wtswatyp    char(3),
wtswclss    char(3),
dwtswsta    char(1),
wtswrng1    decimal(8,0),
wtswrng2    decimal(8,0),
wtswrng3    decimal(8,0),
wtswrng4    decimal(8,0),
wtswrng5    decimal(8,0),
wtswrng6    decimal(8,0),
wtswspar    char(30),
lf          char(1)
);
create unique index watswsa1 on watswsaf
(
wtswdate,
wtswunit,
wtswprty,
wtswatyp,
wtswclss,
dwtswsta
);
revoke all on watswsaf from public ; 
grant select on watswsaf to public ; 
