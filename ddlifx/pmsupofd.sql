create table pmsupoaf
(
pmuourno    char(8),
pmuoatyp    char(3),
pmuoclam    char(3),
pmuofund    char(6),
pmuotabt    char(3),
pmuoedat    char(8),
pmuovtyp    char(3),
pmuomaxo    char(3),
pmuowaro    char(3),
pmuomano    char(3),
pmuocdat    char(8),
pmuoctim    char(8),
pmuocuid    char(10),
pmuoudat    char(8),
pmuoutim    char(8),
pmuouuid    char(10),
pmuospar    char(50),
lf          char(1)
);
create unique index pmsupoa1 on pmsupoaf
(
pmuourno,
pmuoatyp,
pmuoclam,
pmuofund,
pmuotabt,
pmuoedat,
pmuovtyp
);
revoke all on pmsupoaf from public ; 
grant select on pmsupoaf to public ; 
