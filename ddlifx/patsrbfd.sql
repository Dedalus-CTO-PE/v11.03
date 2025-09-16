create table patsrbaf
(
ptsbcode    char(3),
ptsbfund    char(6),
ptsbtblt    char(3),
ptsbcscd    char(9),
ptsbbrcd    char(3),
ptsbamnt    decimal(14,2),
ptsbcnid    char(6),
ptsbspar    char(24),
lf          char(1)
);
create unique index patsrba1 on patsrbaf
(
ptsbcnid,
ptsbcode,
ptsbfund,
ptsbtblt,
ptsbcscd,
ptsbbrcd
);
revoke all on patsrbaf from public ; 
grant select on patsrbaf to public ; 
