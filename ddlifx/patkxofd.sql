create table patkcoxf
(
  ptcoitm     char(9) default ' ' not null,
  ptcokwd     char(15) default ' ' not null,
  ptcospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patkxoa1 on patkcoxf
(
ptcoitm,
ptcokwd
);
create unique index patkxoa2 on patkcoxf
(
ptcokwd,
ptcoitm
);
revoke all on patkcoxf from public ; 
grant select on patkcoxf to public ; 
