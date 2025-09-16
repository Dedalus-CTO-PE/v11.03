create table emrchaaf
(
  emchvisn    char(8) default ' ' not null,
  emchdate    char(8) default ' ' not null,
  emchtime    char(8) default ' ' not null,
  emchusid    char(10) default ' ' not null,
  emchupty    char(2) default ' ' not null,
  emchreas    char(3) default ' ' not null,
  emchoval    char(80) default ' ' not null,
  emchcval    char(80) default ' ' not null,
  emchspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrchaa1 on emrchaaf
(
emchvisn,
emchdate,
emchtime
);
create unique index emrchaa2 on emrchaaf
(
emchdate,
emchtime,
emchvisn
);
revoke all on emrchaaf from public ; 
grant select on emrchaaf to public ; 
