create table patkco7f
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk7oa1 on patkco7f
(
ptcoitm,
ptcokwd
);
create unique index patk7oa2 on patkco7f
(
ptcokwd,
ptcoitm
);
revoke all on patkco7f from public ; 
grant select on patkco7f to public ; 
