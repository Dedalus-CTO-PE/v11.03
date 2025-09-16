create table patkcd7f
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index patk7da1 on patkcd7f
(
ptcditm,
ptcdkwd
);
create unique index patk7da2 on patkcd7f
(
ptcdkwd,
ptcditm
);
revoke all on patkcd7f from public ; 
grant select on patkcd7f to public ; 
