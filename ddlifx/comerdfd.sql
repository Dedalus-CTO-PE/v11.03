create table comerdaf
(
  cmrduniq    char(20) default ' ' not null,
  cmrdprid    char(8) default ' ' not null,
  cmrdwbid    char(8) default ' ' not null,
  cmrdnval    decimal(18,4) default 0 not null,
  cmrddval    char(8) default ' ' not null,
  cmrdvalu    char(600) default ' ' not null,
  cmrdspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index comerda1 on comerdaf
(
cmrduniq,
cmrdprid
);
revoke all on comerdaf from public ; 
grant select on comerdaf to public ; 
