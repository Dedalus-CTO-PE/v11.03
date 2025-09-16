create table patkcd8f
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk8da1 on patkcd8f
(
ptcditm,
ptcdkwd
);
create unique index patk8da2 on patkcd8f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd8f from public ; 
grant select on patkcd8f to public ; 
