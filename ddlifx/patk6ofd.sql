create table patkco6f
(
ptcoitm     char(9),
ptcokwd     char(15),
ptcospa     char(10),
lf          char(1)
);
create unique index patk6oa1 on patkco6f
(
ptcoitm,
ptcokwd
);
create unique index patk6oa2 on patkco6f
(
ptcokwd,
ptcoitm
);
revoke all on patkco6f from public ; 
grant select on patkco6f to public ; 
