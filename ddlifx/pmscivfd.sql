create table pmscivaf
(
pmcvvisn    char(8),
pmcvsnam    char(60),
pmcvadr1    char(35),
pmcvadr2    char(35),
pmcvadr3    char(35),
pmcvadr4    char(35),
pmcvpcod    char(8),
pmcvphon    char(20),
pmcvmobn    char(20),
pmcvemla    char(80),
pmcvcnam    char(60),
pmcvcom1    char(75),
pmcvcom2    char(75),
pmcvrfno    char(30),
pmcvspar    char(40),
lf          char(1)
);
create unique index pmsciva1 on pmscivaf
(
pmcvvisn
);
revoke all on pmscivaf from public ; 
grant select on pmscivaf to public ; 
