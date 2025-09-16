create table pmsdivaf
(
  pmdihosp    varchar2(3) default ' ' not null,
  pmdidivn    varchar2(3) default ' ' not null,
  pmdiunit    varchar2(3) default ' ' not null,
  pmditeam    varchar2(5) default ' ' not null,
  pmdiactv    varchar2(1) default ' ' not null,
  pmdicuid    varchar2(10) default ' ' not null,
  pmdicdat    varchar2(8) default ' ' not null,
  pmdictim    varchar2(8) default ' ' not null,
  pmdiuuid    varchar2(10) default ' ' not null,
  pmdiudat    varchar2(8) default ' ' not null,
  pmdiutim    varchar2(8) default ' ' not null,
  pmdispar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdiva1 primary key( 
pmdihosp,
pmdidivn,
pmdiunit,
pmditeam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsdiva2 on pmsdivaf
(
pmdihosp,
pmdiunit,
pmditeam,
pmdidivn
)
  tablespace pas_indx; 
