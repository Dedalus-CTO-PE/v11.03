create table pmstaaaf
(
pmtafacl    char(3),
pmtaadd1    char(35),
pmtaadd2    char(35),
pmtaadd3    char(35),
pmtaadd4    char(35),
pmtapost    char(8),
pmtatelp    char(35),
pmtatelb    char(35),
pmtatelm    char(35),
pmtaemai    char(80),
pmtamelw    char(20),
pmtaspar    char(50),
lf          char(1)
);
create unique index pmstaaa1 on pmstaaaf
(
pmtafacl
);
revoke all on pmstaaaf from public ; 
grant select on pmstaaaf to public ; 
