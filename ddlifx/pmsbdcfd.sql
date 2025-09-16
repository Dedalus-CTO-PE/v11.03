create table pmsbdcaf
(
pmbcward    char(3),
pmbcbed     char(3),
pmbcfrdt    char(8),
pmbcfrtm    char(8),
pmbcfrpr    char(1),
pmbctodt    char(8),
pmbctotm    char(8),
pmbctopr    char(1),
pmbcreas    char(3),
pmbccrdt    char(8),
pmbccrtm    char(8),
pmbccrid    char(10),
pmbcupdt    char(8),
pmbcuptm    char(8),
pmbcupid    char(10),
pmbcdoct    char(10),
pmbcftrc    char(50),
pmbcspar    char(50),
lf          char(1)
);
create unique index pmsbdca1 on pmsbdcaf
(
pmbcward,
pmbcbed,
pmbcfrdt,
pmbcfrtm
);
create unique index pmsbdca2 on pmsbdcaf
(
pmbcfrpr,
pmbcfrdt,
pmbcfrtm,
pmbcward,
pmbcbed
);
create unique index pmsbdca3 on pmsbdcaf
(
pmbctopr,
pmbctodt,
pmbctotm,
pmbcward,
pmbcbed,
pmbcfrdt,
pmbcfrtm
);
revoke all on pmsbdcaf from public ; 
grant select on pmsbdcaf to public ; 
