create table allrioaf
(
  alrivisn    char(8) default ' ' not null,
  alridate    char(8) default ' ' not null,
  alritime    char(8) default ' ' not null,
  alrioutc    char(3) default ' ' not null,
  alrispar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allrioa1 on allrioaf
(
alrivisn,
alridate,
alritime,
alrioutc
);
revoke all on allrioaf from public ; 
grant select on allrioaf to public ; 
