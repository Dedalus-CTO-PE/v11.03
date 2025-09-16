create table pmscdgaf
(
dpmcgadn    char(8),
dpmcgcnr    char(8),
pmcgprmm    char(9),
dpmcgbsd    char(2),
dpmcgcdi    char(2),
pmcgcdds    char(50),
pmcgspar    char(30),
lf          char(1)
);
create unique index pmscdga1 on pmscdgaf
(
dpmcgadn,
dpmcgcnr,
pmcgprmm,
dpmcgbsd,
dpmcgcdi
);
revoke all on pmscdgaf from public ; 
grant select on pmscdgaf to public ; 
