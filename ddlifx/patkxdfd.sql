create table patkcdxf
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patkxda1 on patkcdxf
(
ptcditm,
ptcdkwd
);
create unique index patkxda2 on patkcdxf
(
ptcdkwd,
ptcditm
);
revoke all on patkcdxf from public ; 
grant select on patkcdxf to public ; 
