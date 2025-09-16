create table patwbaaf
(
  ptwaward    char(3) default ' ' not null,
  ptwabed     char(3) default ' ' not null,
  ptwabatr    char(3) default ' ' not null,
  ptwahosp    char(3) default ' ' not null,
  ptwadtcr    char(8) default ' ' not null,
  ptwatmcr    char(8) default ' ' not null,
  ptwaidcr    char(10) default ' ' not null,
  ptwadtup    char(8) default ' ' not null,
  ptwatmup    char(8) default ' ' not null,
  ptwaidup    char(10) default ' ' not null,
  ptwaspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index patwbaa1 on patwbaaf
(
ptwaward,
ptwabed,
ptwabatr
);
create unique index patwbaa2 on patwbaaf
(
ptwabatr,
ptwaward,
ptwabed
);
create unique index patwbaa3 on patwbaaf
(
ptwabatr,
ptwahosp,
ptwaward,
ptwabed
);
create unique index patwbaa4 on patwbaaf
(
ptwahosp,
ptwabatr,
ptwaward,
ptwabed
);
revoke all on patwbaaf from public ; 
grant select on patwbaaf to public ; 
