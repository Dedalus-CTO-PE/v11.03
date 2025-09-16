create table patcslaf
(
ptclurno    char(8),
dptcluni    char(3),
ptcldesc    char(30),
ptclspar    char(20),
lf          char(1)
);
create unique index patcsla1 on patcslaf
(
ptclurno,
dptcluni
);
create unique index patcsla2 on patcslaf
(
ptclurno,
ptcldesc,
dptcluni
);
revoke all on patcslaf from public ; 
grant select on patcslaf to public ; 
