create table patscsaf
(
ptsschno    char(12),
dptsstra    char(3),
ptssadmn    char(8),
ptssdate    char(8),
ptsscamt    decimal(14,2),
ptsscent    decimal(2,0),
ptssyear    decimal(2,0),
ptssmon     decimal(2,0),
ptssday     decimal(2,0),
ptssrecn    char(8),
ptsspaym    decimal(1,0),
ptssdraw    char(30),
ptssbank    char(30),
ptssbrnc    char(30),
ptssaudf    decimal(1,0),
ptssdep     char(1),
ptssdtyp    char(3),
ptsssyst    decimal(1,0),
ptsspaye    char(30),
ptssspar    char(10),
lf          char(1)
);
create unique index patscsa1 on patscsaf
(
ptsschno,
dptsstra
);
revoke all on patscsaf from public ; 
grant select on patscsaf to public ; 
