create table patkcd5f
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk5da1 on patkcd5f
(
ptcditm,
ptcdkwd
);
create unique index patk5da2 on patkcd5f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd5f from public ; 
grant select on patkcd5f to public ; 
