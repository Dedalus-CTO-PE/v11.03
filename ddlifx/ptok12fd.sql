create table patok12f
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ptok12a1 on patok12f
(
ptcoitm,
ptcokwd
);
create unique index ptok12a2 on patok12f
(
ptcokwd,
ptcoitm
);
revoke all on patok12f from public ; 
grant select on patok12f to public ; 
