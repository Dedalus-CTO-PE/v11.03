create table oprmopaf
(
opmouniq    char(10),
opmoteam    char(1),
dopmocnt    char(2),
opmocode    char(9),
opmobamt    decimal(14,2),
opmogsta    char(1),
opmogstc    char(6),
opmospar    char(12),
lf          char(1)
);
create unique index oprmopa1 on oprmopaf
(
opmouniq,
opmoteam,
dopmocnt
);
revoke all on oprmopaf from public ; 
grant select on oprmopaf to public ; 
