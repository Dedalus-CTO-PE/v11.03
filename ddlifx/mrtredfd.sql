create table mrtredaf
(
mredeid     char(4),
mredvis     char(8),
mredlev1    char(10),
mredlev2    char(10),
mredlev3    char(10),
mredlev4    char(10),
mredanl1    decimal(16,4),
mredanl2    decimal(16,4),
mredanl3    decimal(16,4),
mreddel     char(1),
mredurno    char(8),
mredtdig    char(8),
mredspar    char(4),
lf          char(1)
);
create unique index mrtreda1 on mrtredaf
(
mredeid,
mredvis
);
create unique index mrtreda2 on mrtredaf
(
mredlev1,
mredlev2,
mredlev3,
mredlev4,
mredeid,
mredvis
);
create unique index mrtreda3 on mrtredaf
(
mredeid,
mredtdig,
mredvis
);
revoke all on mrtredaf from public ; 
grant select on mrtredaf to public ; 
