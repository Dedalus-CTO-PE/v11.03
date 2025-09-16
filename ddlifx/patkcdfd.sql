create table patkcdaf
(
ptcditm     char(9),
ptcdkwd     char(15),
ptcdspa     char(10),
lf          char(1)
);
create unique index patkcda1 on patkcdaf
(
ptcditm,
ptcdkwd
);
create unique index patkcda2 on patkcdaf
(
ptcdkwd,
ptcditm
);
revoke all on patkcdaf from public ; 
grant select on patkcdaf to public ; 
