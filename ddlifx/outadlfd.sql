create table outadlaf
(
otalseid    char(4),
otalsedc    char(35),
otalbdfr    char(8),
otalbdto    char(8),
otalbkty    char(1),
otalsifr    char(6),
otalsito    char(6),
otalclfr    char(6),
otalclto    char(6),
otalstfr    char(5),
otalstto    char(5),
otalurfr    char(8),
otalurto    char(8),
otaldpyn    char(1),
otalvtfr    char(3),
otalvtto    char(3),
otalmdfr    char(8),
otalmdto    char(8),
otalctfr    char(6),
otalctto    char(6),
otalocfr    char(3),
otalocto    char(3),
otalltyp    char(3),
otalspar    char(20),
lf          char(1)
);
create unique index outadla1 on outadlaf
(
otalseid
);
revoke all on outadlaf from public ; 
grant select on outadlaf to public ; 
