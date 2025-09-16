create table oprrecaf
(
oporuniq    char(10),
oporteam    char(1),
oporclnd    char(3),
oporline    char(70),
oporspar    char(14),
lf          char(1)
);
create unique index oprreca1 on oprrecaf
(
oporuniq,
oporteam,
oporclnd
);
revoke all on oprrecaf from public ; 
grant select on oprrecaf to public ; 
