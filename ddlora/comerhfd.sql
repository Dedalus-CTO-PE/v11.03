create table comerhaf
(
  cmrhuniq    varchar2(20) default ' ' not null,
  cmrhdate    varchar2(8) default ' ' not null,
  cmrhtime    varchar2(8) default ' ' not null,
  cmrhstat    varchar2(2) default ' ' not null,
  cmrhedat    varchar2(8) default ' ' not null,
  cmrhurno    varchar2(8) default ' ' not null,
  cmrhvisn    varchar2(8) default ' ' not null,
  cmrhpcod    varchar2(9) default ' ' not null,
  cmrhpcnt    varchar2(2) default ' ' not null,
  cmrhhosp    varchar2(3) default ' ' not null,
  cmrhbtyp    varchar2(3) default ' ' not null,
  cmrhadoc    varchar2(100) default ' ' not null,
  cmrheref    varchar2(20) default ' ' not null,
  cmrhlhrd    varchar2(8) default ' ' not null,
  cmrhlhdt    varchar2(3) default ' ' not null,
  cmrhudat    varchar2(8) default ' ' not null,
  cmrhutim    varchar2(8) default ' ' not null,
  cmrhuuid    varchar2(10) default ' ' not null,
  cmrhspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comerha1 primary key( 
cmrhuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index comerha2 on comerhaf
(
cmrhedat,
cmrhhosp,
cmrhstat,
cmrhuniq
)
  tablespace pas_indx; 
create unique index comerha3 on comerhaf
(
cmrhurno,
cmrhedat,
cmrhstat,
cmrhuniq
)
  tablespace pas_indx; 
create unique index comerha4 on comerhaf
(
cmrhhosp,
cmrhedat,
cmrhstat,
cmrhuniq
)
  tablespace pas_indx; 
create unique index comerha5 on comerhaf
(
cmrhvisn,
cmrhuniq
)
  tablespace pas_indx; 
create unique index comerha6 on comerhaf
(
cmrheref,
cmrhuniq
)
  tablespace pas_indx; 
create unique index comerha7 on comerhaf
(
cmrhdate,
cmrhhosp,
cmrhstat,
cmrhuniq
)
  tablespace pas_indx; 
