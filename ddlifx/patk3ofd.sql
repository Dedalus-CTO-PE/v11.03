create table patkco3f
(
ptcoitm     char(9),
ptcokwd     char(15),
ptcospa     char(10),
lf          char(1)
);
create unique index patk3oa1 on patkco3f
(
ptcoitm,
ptcokwd
);
create unique index patk3oa2 on patkco3f
(
ptcokwd,
ptcoitm
);
revoke all on patkco3f from public ; 
grant select on patkco3f to public ; 
