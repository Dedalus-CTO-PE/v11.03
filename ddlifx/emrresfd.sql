create table emrresaf
(
  emreresp    char(3) default ' ' not null,
  emresdat    char(8) default ' ' not null,
  emreedat    char(8) default ' ' not null,
  emrestat    char(1) default ' ' not null,
  emregdat    char(8) default ' ' not null,
  emregtim    char(8) default ' ' not null,
  emrecuid    char(10) default ' ' not null,
  emrecdat    char(8) default ' ' not null,
  emrectim    char(8) default ' ' not null,
  emreuuid    char(10) default ' ' not null,
  emreudat    char(8) default ' ' not null,
  emreutim    char(8) default ' ' not null,
  emrespar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index emrresa1 on emrresaf
(
emreresp,
emresdat
);
revoke all on emrresaf from public ; 
grant select on emrresaf to public ; 
