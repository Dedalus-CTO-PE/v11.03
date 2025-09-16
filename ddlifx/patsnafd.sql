create table patsnaaf
(
ptsnurno    char(8),
ptsnyear    char(4),
ptsnamnt    decimal(6,2),
ptsnspar    char(30),
lf          char(1)
);
create unique index patsnaa1 on patsnaaf
(
ptsnurno,
ptsnyear
);
revoke all on patsnaaf from public ; 
grant select on patsnaaf to public ; 
