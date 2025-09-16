create table pmsdslaf
(
pmdlseli    char(4),
pmdlhcpc    char(10),
pmdldlst    char(1),
pmdlspar    char(20),
lf          char(1)
);
create unique index pmsdsla1 on pmsdslaf
(
pmdlseli,
pmdlhcpc
);
revoke all on pmsdslaf from public ; 
grant select on pmsdslaf to public ; 
