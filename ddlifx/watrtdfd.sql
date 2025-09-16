create table watrtdaf
(
wtrturno    char(8),
wtrtproc    char(9),
wtrtpcnt    char(2),
wtrtrefr    char(5),
wtrttdes    char(5),
wtrtspar    char(20),
lf          char(1)
);
create unique index watrtda1 on watrtdaf
(
wtrturno,
wtrtproc,
wtrtpcnt
);
revoke all on watrtdaf from public ; 
grant select on watrtdaf to public ; 
