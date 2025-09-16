create table opraudra
(
opraaudd    char(8),
opraaudt    char(8),
opraaudp    char(2),
opraaudr    char(1),
opraauds    decimal(1,0),
opraaudo    char(4),
opradate    char(8),
opraroom    char(6),
opravail    decimal(4,0),
opraspar    char(30),
lf          char(1)
);
create index opraudra on opraudra
(
opraaudd,
opraaudt,
opraaudp,
opraaudr
);
revoke all on opraudra from public ; 
grant select on opraudra to public ; 
create table oproraaf
(
opradate    char(8),
opraroom    char(6),
opravail    decimal(4,0),
opraspar    char(30),
lf          char(1)
);
create unique index oproraa1 on oproraaf
(
opradate,
opraroom
);
create unique index oproraa2 on oproraaf
(
opraroom,
opradate
);
revoke all on oproraaf from public ; 
grant select on oproraaf to public ; 
