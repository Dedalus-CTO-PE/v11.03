create table patsusaf
(
ptssurno    char(8),
ptssfdat    char(8),
ptsstdat    char(8),
ptssrfcs    char(3),
ptssreas    char(3),
ptsswebc    char(10),
ptssdatc    char(8),
ptsstimc    char(8),
ptsswebu    char(10),
ptssdatu    char(8),
ptsstimu    char(8),
ptsscom1    char(100),
ptsscom2    char(100),
ptssspar    char(50),
lf          char(1)
);
create unique index patsusa1 on patsusaf
(
ptssurno,
ptssfdat
);
revoke all on patsusaf from public ; 
grant select on patsusaf to public ; 
