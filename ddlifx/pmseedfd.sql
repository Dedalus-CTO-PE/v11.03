create table pmseedaf
(
pmdearid    char(20),
pmderptc    char(3),
pmdecfec    char(4),
pmdeexpc    char(3),
pmdecfet    char(80),
pmdectid    char(24),
pmdespar    char(30),
lf          char(1)
);
create unique index pmseeda1 on pmseedaf
(
pmdearid,
pmderptc,
pmdecfec,
pmdeexpc
);
revoke all on pmseedaf from public ; 
grant select on pmseedaf to public ; 
