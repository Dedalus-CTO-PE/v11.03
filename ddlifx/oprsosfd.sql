create table oprsosaf
(
opspdate    char(6),
opspdoct    char(6),
opspoper    char(9),
opspttim    decimal(6,0),
opspltim    decimal(6,0),
opsphtim    decimal(6,0),
opspncas    decimal(6,0),
opspnopr    decimal(6,0),
opspspar    char(13),
lf          char(1)
);
create unique index oprsosa1 on oprsosaf
(
opspdate,
opspdoct,
opspoper
);
create unique index oprsosa2 on oprsosaf
(
opspdate,
opspoper,
opspdoct
);
revoke all on oprsosaf from public ; 
grant select on oprsosaf to public ; 
