create table allstsaf
(
  alstvisn    char(8) default ' ' not null,
  alststat    char(1) default ' ' not null,
  alstsdat    char(8) default ' ' not null,
  alstcdat    char(8) default ' ' not null,
  alstctim    char(8) default ' ' not null,
  alstcuid    char(10) default ' ' not null,
  alstudat    char(8) default ' ' not null,
  alstutim    char(8) default ' ' not null,
  alstuuid    char(10) default ' ' not null,
  alstspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index allstsa1 on allstsaf
(
alstvisn,
alststat,
alstsdat
);
revoke all on allstsaf from public ; 
grant select on allstsaf to public ; 
