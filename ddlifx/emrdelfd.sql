create table emrdelaf
(
  emdevisn    char(8) default ' ' not null,
  emdedate    char(8) default ' ' not null,
  emdetime    char(8) default ' ' not null,
  emdetype    char(3) default ' ' not null,
  emdecntr    char(2) default ' ' not null,
  emdereas    char(3) default ' ' not null,
  emdedelt    char(1) default ' ' not null,
  emdecuid    char(10) default ' ' not null,
  emdecdat    char(8) default ' ' not null,
  emdectim    char(8) default ' ' not null,
  emdeuuid    char(10) default ' ' not null,
  emdeudat    char(8) default ' ' not null,
  emdeutim    char(8) default ' ' not null,
  emdedr02    char(3) default ' ' not null,
  emdedr03    char(3) default ' ' not null,
  emdedr04    char(3) default ' ' not null,
  emdedr05    char(3) default ' ' not null,
  emdedr06    char(3) default ' ' not null,
  emdedr07    char(3) default ' ' not null,
  emdedr08    char(3) default ' ' not null,
  emdedr09    char(3) default ' ' not null,
  emdedr10    char(3) default ' ' not null,
  emdecomm    char(300) default ' ' not null,
  emdespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrdela1 on emrdelaf
(
emdevisn,
emdedate,
emdetime,
emdetype,
emdecntr
);
revoke all on emrdelaf from public ; 
grant select on emrdelaf to public ; 
