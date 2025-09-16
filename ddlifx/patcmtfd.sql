create table patcmtaf
(
  ptcmccod    char(3) default ' ' not null,
  ptcmhfun    char(6) default ' ' not null,
  ptcmhfty    char(3) default ' ' not null,
  ptcmcntr    char(6) default ' ' not null,
  ptcmspre    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patcmta1 on patcmtaf
(
ptcmccod,
ptcmhfun,
ptcmhfty,
ptcmcntr
);
create unique index patcmta2 on patcmtaf
(
ptcmcntr,
ptcmccod,
ptcmhfun,
ptcmhfty
);
revoke all on patcmtaf from public ; 
grant select on patcmtaf to public ; 
