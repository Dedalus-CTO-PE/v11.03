create table emrociaf
(
  emocvisn    char(8) default ' ' not null,
  emoccntr    char(2) default ' ' not null,
  emoctype    char(3) default ' ' not null,
  emocordr    char(1) default ' ' not null,
  emocctod    char(8) default ' ' not null,
  emocctot    char(8) default ' ' not null,
  emocpret    char(1) default ' ' not null,
  emocctrd    char(8) default ' ' not null,
  emocctrt    char(8) default ' ' not null,
  emocrsfl    char(1) default ' ' not null,
  emocctsd    char(8) default ' ' not null,
  emocctst    char(8) default ' ' not null,
  emocpccd    char(3) default ' ' not null,
  emoccuid    char(10) default ' ' not null,
  emoccdat    char(8) default ' ' not null,
  emocctim    char(8) default ' ' not null,
  emocuuid    char(10) default ' ' not null,
  emocudat    char(8) default ' ' not null,
  emocutim    char(8) default ' ' not null,
  emocspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrocia1 on emrociaf
(
emocvisn,
emoccntr
);
revoke all on emrociaf from public ; 
grant select on emrociaf to public ; 
