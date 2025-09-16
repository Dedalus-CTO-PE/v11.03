create table accdmaaf
(
  acdmhosp    varchar2(3) default ' ' not null,
  acdmcclm    varchar2(3) default ' ' not null,
  acdmsyst    varchar2(1) default ' ' not null,
  acdmctyp    varchar2(3) default ' ' not null,
  acdmilos    varchar2(3) default ' ' not null,
  acdmdtyp    varchar2(3) default ' ' not null,
  acdmiact    varchar2(1) default ' ' not null,
  acdmdelt    varchar2(1) default ' ' not null,
  acdmcusr    varchar2(10) default ' ' not null,
  acdmcdte    varchar2(8) default ' ' not null,
  acdmctim    varchar2(8) default ' ' not null,
  acdmuusr    varchar2(10) default ' ' not null,
  acdmudte    varchar2(8) default ' ' not null,
  acdmutim    varchar2(8) default ' ' not null,
  acdmdusr    varchar2(10) default ' ' not null,
  acdmddte    varchar2(8) default ' ' not null,
  acdmdtim    varchar2(8) default ' ' not null,
  acdmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint accdmaa1 primary key( 
acdmhosp,
acdmcclm,
acdmsyst,
acdmctyp,
acdmilos,
acdmdtyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index accdmaa2 on accdmaaf
(
acdmcclm,
acdmsyst,
acdmctyp,
acdmilos,
acdmdtyp,
acdmhosp
)
  tablespace pas_indx; 
