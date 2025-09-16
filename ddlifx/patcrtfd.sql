create table patcrtaf
(
ptcilocn    char(8),
ptcifdte    char(8),
ptciiden    char(10),
ptcitdte    char(8),
ptcisnid    char(60),
ptcispar    char(20),
lf          char(1)
);
create unique index patcrta1 on patcrtaf
(
ptcilocn,
ptcifdte
);
revoke all on patcrtaf from public ; 
grant select on patcrtaf to public ; 
