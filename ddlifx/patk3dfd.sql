create table patkcd3f
(
ptcditm     char(9),
ptcdkwd     char(15),
ptcdspa     char(10),
lf          char(1)
);
create unique index patk3da1 on patkcd3f
(
ptcditm,
ptcdkwd
);
create unique index patk3da2 on patkcd3f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd3f from public ; 
grant select on patkcd3f to public ; 
