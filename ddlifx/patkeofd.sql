create table patkeoaf
(
ptkotype    char(1),
ptkocode    char(6),
ptkokwrd    char(15),
ptkospar    char(27),
lf          char(1)
);
create unique index patkeoa1 on patkeoaf
(
ptkotype,
ptkocode,
ptkokwrd
);
create unique index patkeoa2 on patkeoaf
(
ptkokwrd,
ptkotype,
ptkocode
);
create unique index patkeoa3 on patkeoaf
(
ptkotype,
ptkokwrd,
ptkocode
);
revoke all on patkeoaf from public ; 
grant select on patkeoaf to public ; 
