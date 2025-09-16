create table allritaf
(
  alrtvisn    char(8) default ' ' not null,
  alrtitmc    char(2) default ' ' not null,
  alrtiflg    char(2) default ' ' not null,
  alrtitmn    char(9) default ' ' not null,
  alrtsubn    char(3) default ' ' not null,
  alrtcdat    char(8) default ' ' not null,
  alrtctim    char(8) default ' ' not null,
  alrtcuid    char(10) default ' ' not null,
  alrtudat    char(8) default ' ' not null,
  alrtutim    char(8) default ' ' not null,
  alrtuuid    char(10) default ' ' not null,
  alrtpuse    char(20) default ' ' not null,
  alrtspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allrita1 on allritaf
(
alrtvisn,
alrtitmc
);
revoke all on allritaf from public ; 
grant select on allritaf to public ; 
