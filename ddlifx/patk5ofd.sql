create table patkco5f
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk5oa1 on patkco5f
(
ptcoitm,
ptcokwd
);
create unique index patk5oa2 on patkco5f
(
ptcokwd,
ptcoitm
);
revoke all on patkco5f from public ; 
grant select on patkco5f to public ; 
