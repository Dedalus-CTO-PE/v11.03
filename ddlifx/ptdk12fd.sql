create table patdk12f
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ptdk12a1 on patdk12f
(
ptcditm,
ptcdkwd
);
create unique index ptdk12a2 on patdk12f
(
ptcdkwd,
ptcditm
);
revoke all on patdk12f from public ; 
grant select on patdk12f to public ; 
