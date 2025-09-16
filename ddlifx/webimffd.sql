create table webimfaf
(
  wbiffbid    char(3) default ' ' not null,
  wbifarid    char(20) default ' ' not null,
  wbifclid    char(6) default ' ' not null,
  wbifrptc    char(3) default ' ' not null,
  wbifmecn    char(2) default ' ' not null,
  wbifsvcn    char(4) default ' ' not null,
  wbifmeid    char(2) default ' ' not null,
  wbifsvid    char(4) default ' ' not null,
  wbifsvbe    char(9) default ' ' not null,
  wbifsvca    char(9) default ' ' not null,
  wbifsvds    char(8) default ' ' not null,
  wbifsvec    char(3) default ' ' not null,
  wbifsvin    char(5) default ' ' not null,
  wbifsvsf    char(9) default ' ' not null,
  wbiftrid    char(24) default ' ' not null,
  wbifmsid    char(36) default ' ' not null,
  wbifspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimfa1 on webimfaf
(
wbiffbid,
wbifarid,
wbifclid,
wbifrptc,
wbifmecn,
wbifsvcn
);
create unique index webimfa2 on webimfaf
(
wbiftrid,
wbiffbid,
wbifarid,
wbifclid,
wbifrptc,
wbifmecn,
wbifsvcn
);
create unique index webimfa3 on webimfaf
(
wbifmsid,
wbiffbid,
wbifarid,
wbifclid,
wbifrptc,
wbifmecn,
wbifsvcn
);
revoke all on webimfaf from public ; 
grant select on webimfaf to public ; 
