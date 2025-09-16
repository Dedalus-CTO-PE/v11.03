create table accdmaaf
(
  acdmhosp    char(3) default ' ' not null,
  acdmcclm    char(3) default ' ' not null,
  acdmsyst    char(1) default ' ' not null,
  acdmctyp    char(3) default ' ' not null,
  acdmilos    char(3) default ' ' not null,
  acdmdtyp    char(3) default ' ' not null,
  acdmiact    char(1) default ' ' not null,
  acdmdelt    char(1) default ' ' not null,
  acdmcusr    char(10) default ' ' not null,
  acdmcdte    char(8) default ' ' not null,
  acdmctim    char(8) default ' ' not null,
  acdmuusr    char(10) default ' ' not null,
  acdmudte    char(8) default ' ' not null,
  acdmutim    char(8) default ' ' not null,
  acdmdusr    char(10) default ' ' not null,
  acdmddte    char(8) default ' ' not null,
  acdmdtim    char(8) default ' ' not null,
  acdmspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index accdmaa1 on accdmaaf
(
acdmhosp,
acdmcclm,
acdmsyst,
acdmctyp,
acdmilos,
acdmdtyp
);
create unique index accdmaa2 on accdmaaf
(
acdmcclm,
acdmsyst,
acdmctyp,
acdmilos,
acdmdtyp,
acdmhosp
);
revoke all on accdmaaf from public ; 
grant select on accdmaaf to public ; 
