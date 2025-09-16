create table pmsmoraf
(
pmmrurno    char(8),
pmmradmn    char(8),
pmmrardt    char(8),
pmmrartm    char(8),
pmmrloca    char(3),
pmmrecby    char(3),
pmmrecdt    char(8),
pmmrectm    char(8),
pmmreccm    char(70),
pmmracby    char(3),
pmmracdt    char(8),
pmmractm    char(8),
pmmraccm    char(70),
pmmrhosp    char(3),
pmmrspar    char(97),
lf          char(1)
);
create unique index pmsmora1 on pmsmoraf
(
pmmradmn
);
create unique index pmsmora2 on pmsmoraf
(
pmmrardt,
pmmrartm,
pmmradmn
);
revoke all on pmsmoraf from public ; 
grant select on pmsmoraf to public ; 
