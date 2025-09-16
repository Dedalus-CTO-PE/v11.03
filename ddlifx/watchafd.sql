create table watchaaf
(
  wtchurno    char(8) default ' ' not null,
  wtchproc    char(9) default ' ' not null,
  wtchpcnt    char(2) default ' ' not null,
  wtchdate    char(8) default ' ' not null,
  wtchtime    char(8) default ' ' not null,
  wtchusid    char(10) default ' ' not null,
  wtchupty    char(2) default ' ' not null,
  wtchreas    char(3) default ' ' not null,
  wtchoval    char(80) default ' ' not null,
  wtchcval    char(80) default ' ' not null,
  wtchspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index watchaa1 on watchaaf
(
wtchurno,
wtchproc,
wtchpcnt,
wtchdate,
wtchtime
);
create unique index watchaa2 on watchaaf
(
wtchdate,
wtchtime,
wtchupty,
wtchurno,
wtchproc,
wtchpcnt
);
revoke all on watchaaf from public ; 
grant select on watchaaf to public ; 
