create table patkco9f
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk9oa1 on patkco9f
(
ptcoitm,
ptcokwd
);
create unique index patk9oa2 on patkco9f
(
ptcokwd,
ptcoitm
);
revoke all on patkco9f from public ; 
grant select on patkco9f to public ; 
