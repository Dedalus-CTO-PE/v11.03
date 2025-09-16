create table outdiagf
(
dopdiout    char(8),
opdicode    char(9),
opdidesc    char(50),
opdicod2    char(9),
opdides2    char(50),
opdicod3    char(9),
opdides3    char(50),
opdicod4    char(9),
opdides4    char(50),
opdicod5    char(9),
opdides5    char(50),
opdispar    char(50),
lf          char(1)
);
create unique index outdiag1 on outdiagf
(
dopdiout
);
revoke all on outdiagf from public ; 
grant select on outdiagf to public ; 
