create table pmsdaaaf
(
pmdatype    char(3),
pmdaadd1    char(35),
pmdaadd2    char(35),
pmdaadd3    char(35),
pmdaadd4    char(35),
pmdapost    char(8),
pmdaphon    char(20),
pmdaspar    char(20),
lf          char(1)
);
create unique index pmsdaaa1 on pmsdaaaf
(
pmdatype
);
revoke all on pmsdaaaf from public ; 
grant select on pmsdaaaf to public ; 
