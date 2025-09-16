create table emraciaf
(
  emrasubv    char(30) default ' ' not null,
  emrafdat    char(8) default ' ' not null,
  emratdat    char(8) default ' ' not null,
  emrasubd    char(256) default ' ' not null,
  emracode    char(30) default ' ' not null,
  emracint    decimal(12,8) default 0 not null,
  emracits    decimal(12,8) default 0 not null,
  emradatc    char(8) default ' ' not null,
  emratimc    char(8) default ' ' not null,
  emrausrc    char(10) default ' ' not null,
  emradatu    char(8) default ' ' not null,
  emratimu    char(8) default ' ' not null,
  emrausru    char(10) default ' ' not null,
  emraaflg    char(1) default ' ' not null,
  emraspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emracia1 on emraciaf
(
emrasubv,
emrafdat
);
revoke all on emraciaf from public ; 
grant select on emraciaf to public ; 
