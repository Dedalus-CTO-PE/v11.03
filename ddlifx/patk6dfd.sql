create table patkcd6f
(
ptcditm     char(9),
ptcdkwd     char(15),
ptcdspa     char(10),
lf          char(1)
);
create unique index patk6da1 on patkcd6f
(
ptcditm,
ptcdkwd
);
create unique index patk6da2 on patkcd6f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd6f from public ; 
grant select on patkcd6f to public ; 
