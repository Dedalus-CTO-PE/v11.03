create table emrexpaf
(
  emexuniq    char(10) default ' ' not null,
  emexurno    char(8) default ' ' not null,
  emexsnam    char(20) default ' ' not null,
  emexgnam    char(25) default ' ' not null,
  emexsex     char(1) default ' ' not null,
  emexdob     char(8) default ' ' not null,
  emexage     char(3) default ' ' not null,
  emexcomp    char(3) default ' ' not null,
  emexcom1    char(50) default ' ' not null,
  emexcom2    char(50) default ' ' not null,
  emexcom3    char(50) default ' ' not null,
  emexcom4    char(50) default ' ' not null,
  emexcom5    char(50) default ' ' not null,
  emexcom6    char(50) default ' ' not null,
  emextran    char(3) default ' ' not null,
  emexambl    char(15) default ' ' not null,
  emexedat    char(8) default ' ' not null,
  emexetim    char(5) default ' ' not null,
  emexgpcd    char(10) default ' ' not null,
  emexcuid    char(10) default ' ' not null,
  emexcdat    char(8) default ' ' not null,
  emexctim    char(8) default ' ' not null,
  emexuuid    char(10) default ' ' not null,
  emexudat    char(8) default ' ' not null,
  emexutim    char(8) default ' ' not null,
  emexatsr    char(3) default ' ' not null,
  emexacps    char(3) default ' ' not null,
  emexacpt    char(3) default ' ' not null,
  emexetad    char(8) default ' ' not null,
  emexetat    char(8) default ' ' not null,
  emextrig    char(3) default ' ' not null,
  emexexpl    char(3) default ' ' not null,
  emexsite    char(3) default ' ' not null,
  emexcont    char(1) default ' ' not null,
  emexdelt    char(1) default ' ' not null,
  emexremv    char(3) default ' ' not null,
  emextsrc    char(5) default ' ' not null,
  emexcall    char(100) default ' ' not null,
  emexain1    char(100) default ' ' not null,
  emexain2    char(100) default ' ' not null,
  emexain3    char(100) default ' ' not null,
  emexain4    char(100) default ' ' not null,
  emexain5    char(100) default ' ' not null,
  emexspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrexpa1 on emrexpaf
(
emexuniq
);
create unique index emrexpa2 on emrexpaf
(
emexsnam,
emexgnam,
emexuniq
);
create unique index emrexpa3 on emrexpaf
(
emexurno,
emexuniq
);
create unique index emrexpa4 on emrexpaf
(
emexsite,
emexedat,
emexuniq
);
revoke all on emrexpaf from public ; 
grant select on emrexpaf to public ; 
