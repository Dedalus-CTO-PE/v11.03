create table pmssinaf
(
pmsicode    char(3),
pmsifund    char(6),
pmsitblt    char(3),
pmsicscd    char(9),
pmsibkcd    char(3),
pmsiamnt    decimal(14,2),
pmsicnid    char(6),
pmsispar    char(24),
lf          char(1)
);
create unique index pmssina1 on pmssinaf
(
pmsicnid,
pmsicode,
pmsifund,
pmsitblt,
pmsicscd,
pmsibkcd
);
revoke all on pmssinaf from public ; 
grant select on pmssinaf to public ; 
