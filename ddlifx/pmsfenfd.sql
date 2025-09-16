create table pmsfenaf
(
pmfnquot    char(12),
pmfntitl    char(4),
pmfnsnam    char(20),
pmfngnam    char(25),
pmfnadd1    char(25),
pmfnadd2    char(25),
pmfnsubr    char(15),
pmfnpost    char(4),
pmfnbdat    char(8),
pmfnphon    char(20),
pmfnspar    char(2),
lf          char(1)
);
create unique index pmsfena1 on pmsfenaf
(
pmfnquot
);
create unique index pmsfena2 on pmsfenaf
(
pmfnsnam,
pmfnquot
);
revoke all on pmsfenaf from public ; 
grant select on pmsfenaf to public ; 
