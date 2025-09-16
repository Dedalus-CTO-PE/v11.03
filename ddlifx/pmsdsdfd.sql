create table pmsdsdaf
(
  pmddvisn    char(8) default ' ' not null,
  pmddcpid    char(4) default ' ' not null,
  pmdddate    char(8) default ' ' not null,
  pmddtime    char(8) default ' ' not null,
  pmdddest    char(20) default ' ' not null,
  pmddfaxn    char(20) default ' ' not null,
  pmddcuid    char(10) default ' ' not null,
  pmddhcpc    char(10) default ' ' not null,
  pmddhcpp    char(10) default ' ' not null,
  pmddhcpt    char(2) default ' ' not null,
  pmddfaxs    char(1) default ' ' not null,
  pmddesnt    char(1) default ' ' not null,
  pmddspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsdsda1 on pmsdsdaf
(
pmddvisn,
pmddcpid,
pmdddate,
pmddtime
);
revoke all on pmsdsdaf from public ; 
grant select on pmsdsdaf to public ; 
