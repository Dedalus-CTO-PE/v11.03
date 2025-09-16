create table pmsmtxaf
(
pmmturno    char(8),
pmmtnote    char(6),
pmmtuniq    char(3),
pmmtcmnt    char(70),
pmmtspar    char(30),
lf          char(1)
);
create unique index pmsmtxa1 on pmsmtxaf
(
pmmturno,
pmmtnote,
pmmtuniq
);
revoke all on pmsmtxaf from public ; 
grant select on pmsmtxaf to public ; 
