create table patcomaf
(
ptcourno    char(8),
dptcocln    char(3),
ptcoline    char(70),
ptcooper    char(4),
ptcospar    char(14),
lf          char(1)
);
create unique index patcoma1 on patcomaf
(
ptcourno,
dptcocln
);
revoke all on patcomaf from public ; 
grant select on patcomaf to public ; 
