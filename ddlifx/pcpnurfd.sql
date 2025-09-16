create table pcpaudnu
(
pcnuaudd    char(8),
pcnuaudt    char(8),
pcnuaudp    char(2),
pcnuaudr    char(1),
pcnuauds    decimal(1,0),
pcnuaudo    char(4),
pcnucode    char(6),
pcnuname    char(20),
pcnuclss    char(3),
dpcnusec    char(1),
pcnuspar    char(19),
lf          char(1)
);
create index pcpaudnu on pcpaudnu
(
pcnuaudd,
pcnuaudt,
pcnuaudp,
pcnuaudr
);
revoke all on pcpaudnu from public ; 
grant select on pcpaudnu to public ; 
create table pcpnuraf
(
pcnucode    char(6),
pcnuname    char(20),
pcnuclss    char(3),
dpcnusec    char(1),
pcnuspar    char(19),
lf          char(1)
);
create unique index pcpnura1 on pcpnuraf
(
pcnucode
);
create unique index pcpnura2 on pcpnuraf
(
pcnuname,
pcnucode
);
create unique index pcpnura3 on pcpnuraf
(
pcnuclss,
pcnuname,
pcnucode
);
revoke all on pcpnuraf from public ; 
grant select on pcpnuraf to public ; 
