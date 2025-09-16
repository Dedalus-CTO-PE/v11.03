create table oprtsmaf
(
optsunid    char(10),
optstmno    char(1),
doptssin    char(2),
optsscde    char(6),
optssdat    char(8),
optsstim    char(8),
optsedat    char(8),
optsetim    char(8),
optsslev    char(3),
optsstyp    char(3),
optsinst    char(1),
optsuy01    char(1),
optsspar    char(9),
lf          char(1)
);
create unique index oprtsma1 on oprtsmaf
(
optsunid,
optstmno,
doptssin,
optsscde,
optssdat,
optsstim
);
revoke all on oprtsmaf from public ; 
grant select on oprtsmaf to public ; 
