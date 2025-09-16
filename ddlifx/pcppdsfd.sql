create table pcpaudpd
(
pcpdaudd    char(8),
pcpdaudt    char(8),
pcpdaudp    char(2),
pcpdaudr    char(1),
pcpdauds    decimal(1,0),
pcpdaudo    char(4),
dpcpdadm    char(8),
pcpddcod    char(4),
dpcpdlin    char(2),
pcpddesc    char(60),
pcpdspar    char(10),
lf          char(1)
);
create index pcpaudpd on pcpaudpd
(
pcpdaudd,
pcpdaudt,
pcpdaudp,
pcpdaudr
);
revoke all on pcpaudpd from public ; 
grant select on pcpaudpd to public ; 
create table pcppdsaf
(
dpcpdadm    char(8),
pcpddcod    char(4),
dpcpdlin    char(2),
pcpddesc    char(60),
pcpdspar    char(10),
lf          char(1)
);
create unique index pcppdsa1 on pcppdsaf
(
dpcpdadm,
pcpddcod,
dpcpdlin
);
revoke all on pcppdsaf from public ; 
grant select on pcppdsaf to public ; 
