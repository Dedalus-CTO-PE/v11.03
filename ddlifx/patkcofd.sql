create table patkcoaf
(
ptcoitm     char(9),
ptcokwd     char(15),
ptcospa     char(10),
lf          char(1)
);
create unique index patkcoa1 on patkcoaf
(
ptcoitm,
ptcokwd
);
create unique index patkcoa2 on patkcoaf
(
ptcokwd,
ptcoitm
);
revoke all on patkcoaf from public ; 
grant select on patkcoaf to public ; 
