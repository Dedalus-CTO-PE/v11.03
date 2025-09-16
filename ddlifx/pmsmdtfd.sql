create table pmsmdtaf
(
pmmdurno    char(8),
pmmdnote    char(6),
pmmddate    char(8),
pmmdtime    char(8),
pmmduser    char(10),
pmmdoccg    char(3),
pmmddelt    char(1),
pmmdddat    char(8),
pmmddtim    char(8),
pmmdduse    char(10),
pmmddocc    char(3),
pmmdspar    char(98),
lf          char(1)
);
create unique index pmsmdta1 on pmsmdtaf
(
pmmdurno,
pmmdnote
);
revoke all on pmsmdtaf from public ; 
grant select on pmsmdtaf to public ; 
