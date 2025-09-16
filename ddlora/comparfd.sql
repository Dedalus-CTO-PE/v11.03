create table comparaf
(
  cmpahosp    varchar2(3) default ' ' not null,
  cmpaparm    varchar2(8) default ' ' not null,
  cmpadesc    varchar2(256) default ' ' not null,
  cmpavalu    varchar2(256) default ' ' not null,
  cmpatype    varchar2(3) default ' ' not null,
  cmpaactv    varchar2(1) default ' ' not null,
  cmpacdat    varchar2(8) default ' ' not null,
  cmpactim    varchar2(8) default ' ' not null,
  cmpacuid    varchar2(10) default ' ' not null,
  cmpaudat    varchar2(8) default ' ' not null,
  cmpautim    varchar2(8) default ' ' not null,
  cmpauuid    varchar2(10) default ' ' not null,
  cmpasyst    varchar2(3) default ' ' not null,
  cmpavcon    varchar2(1) default ' ' not null,
  cmpaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint compara1 primary key( 
cmpahosp,
cmpaparm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index compara2 on comparaf
(
cmpasyst,
cmpahosp,
cmpaparm
)
  tablespace pas_indx; 
