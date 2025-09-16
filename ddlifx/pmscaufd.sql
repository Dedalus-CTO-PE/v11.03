create table pmscauaf
(
pmcavisn    char(8),
pmcadate    char(8),
pmcatime    char(8),
pmcaoclm    char(3),
pmcanclm    char(3),
pmcaoaty    char(3),
pmcanaty    char(3),
pmcaohfn    char(6),
pmcanhfn    char(6),
pmcaohft    char(8),
pmcanhft    char(8),
pmcawbid    char(10),
pmcaspar    char(100),
lf          char(1)
);
create unique index pmscaua1 on pmscauaf
(
pmcavisn,
pmcadate,
pmcatime
);
revoke all on pmscauaf from public ; 
grant select on pmscauaf to public ; 
