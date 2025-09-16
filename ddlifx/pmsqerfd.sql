create table pmsqeraf
(
  pmqehosp    char(3) default ' ' not null,
  pmqeyear    char(4) default ' ' not null,
  pmqerunn    char(3) default ' ' not null,
  pmqeedat    char(8) default ' ' not null,
  pmqespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsqera1 on pmsqeraf
(
pmqehosp,
pmqeyear,
pmqerunn
);
create unique index pmsqera2 on pmsqeraf
(
pmqehosp,
pmqeedat,
pmqeyear,
pmqerunn
);
revoke all on pmsqeraf from public ; 
grant select on pmsqeraf to public ; 
