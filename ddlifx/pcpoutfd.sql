create table pcpaudou
(
pcotaudd    char(8),
pcotaudt    char(8),
pcotaudp    char(2),
pcotaudr    char(1),
pcotauds    decimal(1,0),
pcotaudo    char(4),
pcotuniq    char(10),
pcotcode    char(9),
pcotdcod    char(4),
pcotdate    char(8),
pcottype    decimal(1,0),
pcotdywk    decimal(3,0),
pcotspar    char(13),
lf          char(1)
);
create index pcpaudou on pcpaudou
(
pcotaudd,
pcotaudt,
pcotaudp,
pcotaudr
);
revoke all on pcpaudou from public ; 
grant select on pcpaudou to public ; 
create table pcpoutaf
(
pcotuniq    char(10),
pcotcode    char(9),
pcotdcod    char(4),
pcotdate    char(8),
pcottype    decimal(1,0),
pcotdywk    decimal(3,0),
pcotspar    char(13),
lf          char(1)
);
create unique index pcpouta1 on pcpoutaf
(
pcotuniq,
pcotcode
);
revoke all on pcpoutaf from public ; 
grant select on pcpoutaf to public ; 
