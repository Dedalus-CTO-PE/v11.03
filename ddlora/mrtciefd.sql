create table mrtcieaf
(
  mrcedate    varchar2(8) default ' ' not null,
  mrcetime    varchar2(8) default ' ' not null,
  mrceurno    varchar2(8) default ' ' not null,
  mrcevisn    varchar2(8) default ' ' not null,
  mrcefnam    varchar2(100) default ' ' not null,
  mrceerrm    varchar2(200) default ' ' not null,
  mrceproc    varchar2(1) default ' ' not null,
  mrceufap    varchar2(10) default ' ' not null,
  mrcedfap    varchar2(8) default ' ' not null,
  mrcetfap    varchar2(8) default ' ' not null,
  mrcespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtciea1 primary key( 
mrcedate,
mrcetime,
mrcevisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtciea2 on mrtcieaf
(
mrcevisn,
mrcedate,
mrcetime
)
  tablespace pas_indx; 
