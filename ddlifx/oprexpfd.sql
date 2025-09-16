create table oprexpaf
(
opexcode    char(6),
opexdesc    char(30),
opexrus     char(3),
opexmchg    char(9),
opexsicd    char(7),
opexactv    char(1),
opexspar    char(3),
lf          char(1)
);
create unique index oprexpa1 on oprexpaf
(
opexcode
);
create unique index oprexpa2 on oprexpaf
(
opexdesc,
opexcode
);
revoke all on oprexpaf from public ; 
grant select on oprexpaf to public ; 
