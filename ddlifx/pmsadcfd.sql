create table pmsadcaf
(
pmaccode    char(6),
pmacdesc    char(30),
pmacachs    char(1),
pmacdeci    char(1),
pmacinfc    char(3),
pmacshrd    char(100),
pmacvld1    char(1),
pmacvld2    char(1),
pmacvld3    char(1),
pmacvld4    char(1),
pmacvld5    char(1),
pmacvld6    char(1),
pmacvld7    char(1),
pmacvld8    char(1),
pmacvld9    char(1),
pmacvl10    char(1),
pmacvlna    char(1),
pmacinac    char(1),
pmacwebc    char(10),
pmacdatc    char(8),
pmactimc    char(8),
pmacwebu    char(10),
pmacdatu    char(8),
pmactimu    char(8),
pmacspar    char(50),
lf          char(1)
);
create unique index pmsadca1 on pmsadcaf
(
pmaccode
);
create unique index pmsadca2 on pmsadcaf
(
pmacdesc,
pmaccode
);
revoke all on pmsadcaf from public ; 
grant select on pmsadcaf to public ; 
