create table emrutyaf
(
  emututy     char(5) default ' ' not null,
  emutdes     char(35) default ' ' not null,
  emutslv     char(2) default ' ' not null,
  emutsid     char(1) default ' ' not null,
  emutpwd     char(1) default ' ' not null,
  emutspa     char(60) default ' ' not null,
  lf          char(1)
);
create unique index emrutya1 on emrutyaf
(
emututy
);
revoke all on emrutyaf from public ; 
grant select on emrutyaf to public ; 
