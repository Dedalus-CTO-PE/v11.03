create table emrscmaf
(
  emscsite    char(3) default ' ' not null,
  emscline    char(2) default ' ' not null,
  emsccmnt    char(70) default ' ' not null,
  emscspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrscma1 on emrscmaf
(
emscsite,
emscline
);
revoke all on emrscmaf from public ; 
grant select on emrscmaf to public ; 
