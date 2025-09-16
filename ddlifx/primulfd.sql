create table primultf
(
prmucode    char(5),
prmudate    char(8),
dprmunum    char(3),
prmudesc    char(30),
prmuitmn    char(9),
prmusubn    char(3),
prmuaman    char(9),
prmuspar    char(4),
lf          char(1)
);
create unique index primult1 on primultf
(
prmucode,
prmudate,
dprmunum
);
create unique index primult2 on primultf
(
prmudesc,
prmucode,
prmudate,
dprmunum
);
revoke all on primultf from public ; 
grant select on primultf to public ; 
