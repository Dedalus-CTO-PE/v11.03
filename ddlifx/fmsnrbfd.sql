create table fmsnrbaf
(
  fmnbcode    char(3) default ' ' not null,
  fmnbtcod    char(12) default ' ' not null,
  fmnbtlev    char(3) default ' ' not null,
  fmnbdesc    char(40) default ' ' not null,
  fmnbprtc    char(3) default ' ' not null,
  fmnbspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrba1 on fmsnrbaf
(
fmnbcode,
fmnbtcod
);
create unique index fmsnrba2 on fmsnrbaf
(
fmnbcode,
fmnbtlev,
fmnbtcod
);
revoke all on fmsnrbaf from public ; 
grant select on fmsnrbaf to public ; 
