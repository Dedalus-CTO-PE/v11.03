create table pcpauddi
(
pcdiaudd    char(8),
pcdiaudt    char(8),
pcdiaudp    char(2),
pcdiaudr    char(1),
pcdiauds    decimal(1,0),
pcdiaudo    char(4),
dpcdiadm    char(8),
pcdidate    char(8),
pcditime    char(8),
pcdidiag    char(9),
pcdiuniq    char(10),
pcdictyp    char(9),
pcdiclin    char(9),
pcdinurs    char(6),
pcdidcod    char(4),
pcdistat    decimal(1,0),
pcdispar    char(12),
lf          char(1)
);
create index pcpauddi on pcpauddi
(
pcdiaudd,
pcdiaudt,
pcdiaudp,
pcdiaudr
);
revoke all on pcpauddi from public ; 
grant select on pcpauddi to public ; 
create table pcpdiaaf
(
dpcdiadm    char(8),
pcdidate    char(8),
pcditime    char(8),
pcdidiag    char(9),
pcdiuniq    char(10),
pcdictyp    char(9),
pcdiclin    char(9),
pcdinurs    char(6),
pcdidcod    char(4),
pcdistat    decimal(1,0),
pcdispar    char(12),
lf          char(1)
);
create unique index pcpdiaa1 on pcpdiaaf
(
dpcdiadm,
pcdidate,
pcditime,
pcdidiag
);
create unique index pcpdiaa2 on pcpdiaaf
(
pcdiuniq
);
revoke all on pcpdiaaf from public ; 
grant select on pcpdiaaf to public ; 
