create table patkcd9f
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk9da1 on patkcd9f
(
ptcditm,
ptcdkwd
);
create unique index patk9da2 on patkcd9f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd9f from public ; 
grant select on patkcd9f to public ; 
