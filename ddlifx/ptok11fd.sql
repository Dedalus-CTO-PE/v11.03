create table patok11f
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ptok11a1 on patok11f
(
ptcoitm,
ptcokwd
);
create unique index ptok11a2 on patok11f
(
ptcokwd,
ptcoitm
);
revoke all on patok11f from public ; 
grant select on patok11f to public ; 
