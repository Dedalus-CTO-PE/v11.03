create table pcpaudre
(
pcreaudd    char(8),
pcreaudt    char(8),
pcreaudp    char(2),
pcreaudr    char(1),
pcreauds    decimal(1,0),
pcreaudo    char(4),
pcreuniq    char(10),
pcrefact    char(9),
pcredcod    char(4),
pcrespar    char(11),
lf          char(1)
);
create index pcpaudre on pcpaudre
(
pcreaudd,
pcreaudt,
pcreaudp,
pcreaudr
);
revoke all on pcpaudre from public ; 
grant select on pcpaudre to public ; 
create table pcprelaf
(
pcreuniq    char(10),
pcrefact    char(9),
pcredcod    char(4),
pcrespar    char(11),
lf          char(1)
);
create unique index pcprela1 on pcprelaf
(
pcreuniq,
pcrefact
);
revoke all on pcprelaf from public ; 
grant select on pcprelaf to public ; 
