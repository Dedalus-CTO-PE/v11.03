create table webskiaf
(
  wbskusid    char(10) default ' ' not null,
  wbskkwrd    char(80) default ' ' not null,
  wbskspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index webskia1 on webskiaf
(
wbskusid,
wbskkwrd
);
create unique index webskia2 on webskiaf
(
wbskkwrd,
wbskusid
);
revoke all on webskiaf from public ; 
grant select on webskiaf to public ; 
