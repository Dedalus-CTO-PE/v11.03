create table outaudba
(
otbaaudd    char(8),
otbaaudt    char(8),
otbaaudp    char(2),
otbaaudr    char(1),
otbaauds    decimal(1,0),
otbaaudo    char(4),
obasite     char(6),
obaclin     char(6),
obadate     char(8),
obastrt     char(5),
dobaslot    char(3),
obatime     char(5),
obactyp     char(6),
obaurno     char(8),
obavisit    char(3),
dobaoutn    char(8),
dobastat    char(1),
obaday      decimal(1,0),
obaexsl     decimal(3,0),
obafinst    char(4),
obalock     char(2),
obapxray    decimal(1,0),
obabkdte    char(16),
obapull     decimal(1,0),
obasesst    char(3),
obadisch    char(3),
dotbares    char(2),
obaspara    char(1),
lf          char(1)
);
create index outaudba on outaudba
(
otbaaudd,
otbaaudt,
otbaaudp,
otbaaudr
);
revoke all on outaudba from public ; 
grant select on outaudba to public ; 
create table outbokaf
(
obasite     char(6),
obaclin     char(6),
obadate     char(8),
obastrt     char(5),
dobaslot    char(3),
obatime     char(5),
obactyp     char(6),
obaurno     char(8),
obavisit    char(3),
dobaoutn    char(8),
dobastat    char(1),
obaday      decimal(1,0),
obaexsl     decimal(3,0),
obafinst    char(4),
obalock     char(2),
obapxray    decimal(1,0),
obabkdte    char(16),
obapull     decimal(1,0),
obasesst    char(3),
obadisch    char(3),
dotbares    char(2),
obaspara    char(1),
lf          char(1)
);
create unique index outboka1 on outbokaf
(
obasite,
obaclin,
obadate,
obastrt,
dobaslot
);
create unique index outboka2 on outbokaf
(
obasite,
obactyp,
dobastat,
obadate,
obastrt,
dobaslot,
obaclin
);
create unique index outboka3 on outbokaf
(
obaurno,
obadate,
obastrt,
dobaslot,
obasite,
obaclin
);
create unique index outboka4 on outbokaf
(
obasite,
obactyp,
obaclin,
dobastat,
obadate,
obastrt,
dobaslot
);
create unique index outboka5 on outbokaf
(
obasite,
obactyp,
obadate,
obastrt,
obaclin,
dobastat,
dobaslot
);
create unique index outboka6 on outbokaf
(
dobaoutn,
obadate,
obastrt,
dobaslot,
obasite,
obaclin
);
revoke all on outbokaf from public ; 
grant select on outbokaf to public ; 
