create table patkcd4f
(
ptcditm     char(9),
ptcdkwd     char(15),
ptcdspa     char(10),
lf          char(1)
);
create unique index patk4da1 on patkcd4f
(
ptcditm,
ptcdkwd
);
create unique index patk4da2 on patkcd4f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd4f from public ; 
grant select on patkcd4f to public ; 
