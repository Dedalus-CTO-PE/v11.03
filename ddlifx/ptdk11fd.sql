create table patdk11f
(
  ptcditm     char(9) default ' ' not null,
  ptcdkwd     char(15) default ' ' not null,
  ptcdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ptdk11a1 on patdk11f
(
ptcditm,
ptcdkwd
);
create unique index ptdk11a2 on patdk11f
(
ptcdkwd,
ptcditm
);
revoke all on patdk11f from public ; 
grant select on patdk11f to public ; 
