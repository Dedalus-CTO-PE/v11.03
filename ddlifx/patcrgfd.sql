create table patcrgaf
(
dptcradn    char(8),
ptcrurno    char(8),
ptcrmult    char(3),
ptcrstay    decimal(2,0),
ptcrvert    char(1),
ptcrprim    char(9),
ptcrhist    char(9),
ptcrspar    char(9),
lf          char(1)
);
create unique index patcrga1 on patcrgaf
(
dptcradn
);
create unique index patcrga2 on patcrgaf
(
ptcrurno,
dptcradn
);
revoke all on patcrgaf from public ; 
grant select on patcrgaf to public ; 
