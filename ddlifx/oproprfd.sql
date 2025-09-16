create table opraudrm
(
oprmaudd    char(8),
oprmaudt    char(8),
oprmaudp    char(2),
oprmaudr    char(1),
oprmauds    decimal(1,0),
oprmaudo    char(4),
oprmroom    char(6),
oprmdesc    char(40),
oprmloc     char(20),
oprmusr1    char(3),
oprmusr2    char(3),
oprmusr3    char(3),
oprmusr4    char(3),
oprmusr5    char(3),
oprmstat    decimal(1,0),
oprmsun     decimal(4,0),
oprmmon     decimal(4,0),
oprmtue     decimal(4,0),
oprmwed     decimal(4,0),
oprmthu     decimal(4,0),
oprmfri     decimal(4,0),
oprmsat     decimal(4,0),
oprmgldg    char(14),
oprmhosp    char(3),
oprmspar    char(50),
lf          char(1)
);
create index opraudrm on opraudrm
(
oprmaudd,
oprmaudt,
oprmaudp,
oprmaudr
);
revoke all on opraudrm from public ; 
grant select on opraudrm to public ; 
create table opropraf
(
oprmroom    char(6),
oprmdesc    char(40),
oprmloc     char(20),
oprmusr1    char(3),
oprmusr2    char(3),
oprmusr3    char(3),
oprmusr4    char(3),
oprmusr5    char(3),
oprmstat    decimal(1,0),
oprmsun     decimal(4,0),
oprmmon     decimal(4,0),
oprmtue     decimal(4,0),
oprmwed     decimal(4,0),
oprmthu     decimal(4,0),
oprmfri     decimal(4,0),
oprmsat     decimal(4,0),
oprmgldg    char(14),
oprmhosp    char(3),
oprmspar    char(50),
lf          char(1)
);
create unique index opropra1 on opropraf
(
oprmroom
);
create unique index opropra2 on opropraf
(
oprmdesc,
oprmroom
);
revoke all on opropraf from public ; 
grant select on opropraf to public ; 
