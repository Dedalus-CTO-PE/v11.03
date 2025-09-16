create table obsaltaf
(
obalcod     char(10),
obaldsc     char(35),
obaltyp     char(3),
obalisl     char(2),
obaldsl     char(2),
obaldal     char(1),
obaldcd     char(20),
obalicd     char(10),
oballus     char(10),
oballdt     char(8),
oballtm     char(8),
obalrf1     char(30),
obalrf2     char(30),
obalyn1     char(1),
obalyn2     char(1),
obalspa     char(12),
lf          char(1)
);
create unique index obsalta1 on obsaltaf
(
obalcod
);
create unique index obsalta2 on obsaltaf
(
obaldsc,
obalcod
);
create unique index obsalta3 on obsaltaf
(
obaltyp,
obaldsc,
obalcod
);
revoke all on obsaltaf from public ; 
grant select on obsaltaf to public ; 
