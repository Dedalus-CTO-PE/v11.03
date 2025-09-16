create table pcpaudin
(
pcinaudd    char(8),
pcinaudt    char(8),
pcinaudp    char(2),
pcinaudr    char(1),
pcinauds    decimal(1,0),
pcinaudo    char(4),
pcinuniq    char(10),
pcincode    char(9),
pcindcod    char(4),
pcinfreq    char(9),
pcinstaf    char(3),
pcintime    decimal(4,0),
pcinodte    char(8),
pcinosft    char(3),
pcinspar    char(5),
lf          char(1)
);
create index pcpaudin on pcpaudin
(
pcinaudd,
pcinaudt,
pcinaudp,
pcinaudr
);
revoke all on pcpaudin from public ; 
grant select on pcpaudin to public ; 
create table pcpintaf
(
pcinuniq    char(10),
pcincode    char(9),
pcindcod    char(4),
pcinfreq    char(9),
pcinstaf    char(3),
pcintime    decimal(4,0),
pcinodte    char(8),
pcinosft    char(3),
pcinspar    char(5),
lf          char(1)
);
create unique index pcpinta1 on pcpintaf
(
pcinuniq,
pcincode
);
revoke all on pcpintaf from public ; 
grant select on pcpintaf to public ; 
