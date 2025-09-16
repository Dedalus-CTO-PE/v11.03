create table priaudpr
(
  prpraudd    char(8) default ' ' not null,
  prpraudt    char(8) default ' ' not null,
  prpraudp    char(2) default ' ' not null,
  prpraudr    char(1) default ' ' not null,
  prprauds    decimal(1,0) default 0 not null,
  prpraudo    char(4) default ' ' not null,
  prprcode    char(6) default ' ' not null,
  prprdesc    char(30) default ' ' not null,
  prprpdoc    char(10) default ' ' not null,
  prpradd1    char(25) default ' ' not null,
  prpradd2    char(25) default ' ' not null,
  prpradd3    char(25) default ' ' not null,
  prprpost    char(4) default ' ' not null,
  prprtelp    char(12) default ' ' not null,
  prprstat    decimal(1,0) default 0 not null,
  prprtime    decimal(1,0) default 0 not null,
  prprrang    char(3) default ' ' not null,
  prprpmci    char(8) default ' ' not null,
  prprpyee    char(10) default ' ' not null,
  prprregi    char(3) default ' ' not null,
  prprrdat    char(8) default ' ' not null,
  prprspar    char(46) default ' ' not null,
  lf          char(1)
);
create index priaudpr on priaudpr
(
prpraudd,
prpraudt,
prpraudp,
prpraudr
);
revoke all on priaudpr from public ; 
grant select on priaudpr to public ; 
create table pripracf
(
  prprcode    char(6) default ' ' not null,
  prprdesc    char(30) default ' ' not null,
  prprpdoc    char(10) default ' ' not null,
  prpradd1    char(25) default ' ' not null,
  prpradd2    char(25) default ' ' not null,
  prpradd3    char(25) default ' ' not null,
  prprpost    char(4) default ' ' not null,
  prprtelp    char(12) default ' ' not null,
  prprstat    decimal(1,0) default 0 not null,
  prprtime    decimal(1,0) default 0 not null,
  prprrang    char(3) default ' ' not null,
  prprpmci    char(8) default ' ' not null,
  prprpyee    char(10) default ' ' not null,
  prprregi    char(3) default ' ' not null,
  prprrdat    char(8) default ' ' not null,
  prprspar    char(46) default ' ' not null,
  lf          char(1)
);
create unique index priprac1 on pripracf
(
prprcode
);
create unique index priprac2 on pripracf
(
prprdesc,
prprcode
);
revoke all on pripracf from public ; 
grant select on pripracf to public ; 
