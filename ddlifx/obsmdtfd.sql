create table obsmdtaf
(
obmdurno    char(8),
obmdnote    char(6),
obmddate    char(8),
obmdtime    char(8),
obmduser    char(10),
obmdoccg    char(3),
obmddelt    char(1),
obmdddat    char(8),
obmddtim    char(8),
obmdduse    char(10),
obmdspar    char(101),
lf          char(1)
);
create unique index obsmdta1 on obsmdtaf
(
obmdurno,
obmdnote
);
revoke all on obsmdtaf from public ; 
grant select on obsmdtaf to public ; 
