create table patkco8f
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk8oa1 on patkco8f
(
ptcoitm,
ptcokwd
);
create unique index patk8oa2 on patkco8f
(
ptcokwd,
ptcoitm
);
revoke all on patkco8f from public ; 
grant select on patkco8f to public ; 
