create table oprdedaf
(
  opdduniq    char(10) default ' ' not null,
  opddtype    char(3) default ' ' not null,
  opddline    char(3) default ' ' not null,
  opdddata    char(70) default ' ' not null,
  opddspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index oprdeda1 on oprdedaf
(
opdduniq,
opddtype,
opddline
);
revoke all on oprdedaf from public ; 
grant select on oprdedaf to public ; 
