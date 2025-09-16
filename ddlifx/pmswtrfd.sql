create table pmswtraf
(
  pmwthosp    char(3) default ' ' not null,
  pmwtvisn    char(8) default ' ' not null,
  pmwtsdat    char(8) default ' ' not null,
  pmwtmdat    char(8) default ' ' not null,
  pmwtcdat    char(8) default ' ' not null,
  pmwtctim    char(8) default ' ' not null,
  pmwtwebc    char(10) default ' ' not null,
  pmwtspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmswtra1 on pmswtraf
(
pmwthosp,
pmwtvisn,
pmwtsdat
);
create unique index pmswtra2 on pmswtraf
(
pmwthosp,
pmwtsdat,
pmwtvisn
);
revoke all on pmswtraf from public ; 
grant select on pmswtraf to public ; 
