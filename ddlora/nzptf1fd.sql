create table nzptf1af
(
  nztfhosp    varchar2(3) default ' ' not null,
  nztfsest    varchar2(3) default ' ' not null,
  nztfclam    varchar2(3) default ' ' not null,
  nztffund    varchar2(6) default ' ' not null,
  nztfftab    varchar2(8) default ' ' not null,
  nztfedat    varchar2(8) default ' ' not null,
  nztfiseq    varchar2(2) default ' ' not null,
  nztfactv    varchar2(1) default ' ' not null,
  nztfmuni    number(5,0) default 0 not null,
  nztfuntp    number(14,2) default 0 not null,
  nztfminu    number(5,0) default 0 not null,
  nztfmaxu    number(5,0) default 0 not null,
  nztfcdat    varchar2(8) default ' ' not null,
  nztfctim    varchar2(8) default ' ' not null,
  nztfcuid    varchar2(10) default ' ' not null,
  nztfudat    varchar2(8) default ' ' not null,
  nztfutim    varchar2(8) default ' ' not null,
  nztfuuid    varchar2(10) default ' ' not null,
  nztfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzptf1a1 primary key( 
nztfhosp,
nztfsest,
nztfclam,
nztffund,
nztfftab,
nztfedat,
nztfiseq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzptf1a2 on nzptf1af
(
nztfhosp,
nztfiseq,
nztfsest,
nztfclam,
nztffund,
nztfftab,
nztfedat
)
  tablespace pas_indx; 
