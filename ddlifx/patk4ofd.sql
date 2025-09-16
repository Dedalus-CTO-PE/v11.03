create table patkco4f
(
ptcoitm     char(9),
ptcokwd     char(15),
ptcospa     char(10),
lf          char(1)
);
create unique index patk4oa1 on patkco4f
(
ptcoitm,
ptcokwd
);
create unique index patk4oa2 on patkco4f
(
ptcokwd,
ptcoitm
);
revoke all on patkco4f from public ; 
grant select on patkco4f to public ; 
