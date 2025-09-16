create table emreclaf
(
  emeluniq    char(10) default ' ' not null,
  emeltype    char(3) default ' ' not null,
  emelnote    char(6) default ' ' not null,
  emelline    char(3) default ' ' not null,
  emelcmnt    char(100) default ' ' not null,
  emelspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index emrecla1 on emreclaf
(
emeluniq,
emeltype,
emelnote,
emelline
);
revoke all on emreclaf from public ; 
grant select on emreclaf to public ; 
