create table pmsdunaf
(
pmdudoct    char(6),
pmduunit    char(3),
pmduhead    char(1),
pmduspar    char(79),
lf          char(1)
);
create unique index pmsduna1 on pmsdunaf
(
pmdudoct,
pmduunit
);
create unique index pmsduna2 on pmsdunaf
(
pmduunit,
pmduhead,
pmdudoct
);
revoke all on pmsdunaf from public ; 
grant select on pmsdunaf to public ; 
