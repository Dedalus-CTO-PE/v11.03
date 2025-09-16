create table priaudpr
(
  prpraudd    varchar2(8) default ' ' not null,
  prpraudt    varchar2(8) default ' ' not null,
  prpraudp    varchar2(2) default ' ' not null,
  prpraudr    varchar2(1) default ' ' not null,
  prprauds    number(1,0) default 0 not null,
  prpraudo    varchar2(4) default ' ' not null,
  prprcode    varchar2(6) default ' ' not null,
  prprdesc    varchar2(30) default ' ' not null,
  prprpdoc    varchar2(10) default ' ' not null,
  prpradd1    varchar2(25) default ' ' not null,
  prpradd2    varchar2(25) default ' ' not null,
  prpradd3    varchar2(25) default ' ' not null,
  prprpost    varchar2(4) default ' ' not null,
  prprtelp    varchar2(12) default ' ' not null,
  prprstat    number(1,0) default 0 not null,
  prprtime    number(1,0) default 0 not null,
  prprrang    varchar2(3) default ' ' not null,
  prprpmci    varchar2(8) default ' ' not null,
  prprpyee    varchar2(10) default ' ' not null,
  prprregi    varchar2(3) default ' ' not null,
  prprrdat    varchar2(8) default ' ' not null,
  prprspar    varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index priaudpr on priaudpr
(
prpraudd,
prpraudt,
prpraudp,
prpraudr
)
tablespace pas_indx; 
create table pripracf
(
  prprcode    varchar2(6) default ' ' not null,
  prprdesc    varchar2(30) default ' ' not null,
  prprpdoc    varchar2(10) default ' ' not null,
  prpradd1    varchar2(25) default ' ' not null,
  prpradd2    varchar2(25) default ' ' not null,
  prpradd3    varchar2(25) default ' ' not null,
  prprpost    varchar2(4) default ' ' not null,
  prprtelp    varchar2(12) default ' ' not null,
  prprstat    number(1,0) default 0 not null,
  prprtime    number(1,0) default 0 not null,
  prprrang    varchar2(3) default ' ' not null,
  prprpmci    varchar2(8) default ' ' not null,
  prprpyee    varchar2(10) default ' ' not null,
  prprregi    varchar2(3) default ' ' not null,
  prprrdat    varchar2(8) default ' ' not null,
  prprspar    varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priprac1 primary key( 
prprcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index priprac2 on pripracf
(
prprdesc,
prprcode
)
  tablespace pas_indx; 
