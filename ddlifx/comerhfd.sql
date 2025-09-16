create table comerhaf
(
  cmrhuniq    char(20) default ' ' not null,
  cmrhdate    char(8) default ' ' not null,
  cmrhtime    char(8) default ' ' not null,
  cmrhstat    char(2) default ' ' not null,
  cmrhedat    char(8) default ' ' not null,
  cmrhurno    char(8) default ' ' not null,
  cmrhvisn    char(8) default ' ' not null,
  cmrhpcod    char(9) default ' ' not null,
  cmrhpcnt    char(2) default ' ' not null,
  cmrhhosp    char(3) default ' ' not null,
  cmrhbtyp    char(3) default ' ' not null,
  cmrhadoc    char(100) default ' ' not null,
  cmrheref    char(20) default ' ' not null,
  cmrhlhrd    char(8) default ' ' not null,
  cmrhlhdt    char(3) default ' ' not null,
  cmrhudat    char(8) default ' ' not null,
  cmrhutim    char(8) default ' ' not null,
  cmrhuuid    char(10) default ' ' not null,
  cmrhspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index comerha1 on comerhaf
(
cmrhuniq
);
create unique index comerha2 on comerhaf
(
cmrhedat,
cmrhhosp,
cmrhstat,
cmrhuniq
);
create unique index comerha3 on comerhaf
(
cmrhurno,
cmrhedat,
cmrhstat,
cmrhuniq
);
create unique index comerha4 on comerhaf
(
cmrhhosp,
cmrhedat,
cmrhstat,
cmrhuniq
);
create unique index comerha5 on comerhaf
(
cmrhvisn,
cmrhuniq
);
create unique index comerha6 on comerhaf
(
cmrheref,
cmrhuniq
);
create unique index comerha7 on comerhaf
(
cmrhdate,
cmrhhosp,
cmrhstat,
cmrhuniq
);
revoke all on comerhaf from public ; 
grant select on comerhaf to public ; 
