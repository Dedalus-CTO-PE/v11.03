create table patgo1af
(
gcode       char(6),
gname       char(30),
gadd1       char(35),
gadd2       char(35),
gadd3       char(35),
gadd4       char(35),
gcont       char(30),
gpost       char(8),
gteleb      char(20),
gvbill      decimal(14,2),
gvaout      decimal(14,2),
gsort       char(6),
lf          char(1)
);
create unique index patgo1a1 on patgo1af
(
gcode
);
create unique index patgo1a2 on patgo1af
(
gsort,
gcode
);
create unique index patgo1a3 on patgo1af
(
gname,
gcode
);
revoke all on patgo1af from public ; 
grant select on patgo1af to public ; 
