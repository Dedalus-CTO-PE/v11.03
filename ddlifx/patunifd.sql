create table patuniaf
(
ptuispec    char(3),
ptuidoct    char(6),
ptuiteam    char(6),
ptuisdat    char(8),
ptuiedat    char(8),
ptuispar    char(40),
lf          char(1)
);
create unique index patunia1 on patuniaf
(
ptuispec,
ptuidoct
);
create unique index patunia2 on patuniaf
(
ptuidoct,
ptuispec
);
create unique index patunia3 on patuniaf
(
ptuiteam,
ptuispec,
ptuidoct
);
revoke all on patuniaf from public ; 
grant select on patuniaf to public ; 
