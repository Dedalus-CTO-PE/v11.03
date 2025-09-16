create table pmsndbaf
(
  pmnbdnam    varchar2(50) default ' ' not null,
  pmnbddsc    varchar2(100) default ' ' not null,
  pmnbgdat    varchar2(50) default ' ' not null,
  pmnbdpth    varchar2(500) default ' ' not null,
  pmnbhosp    varchar2(3) default ' ' not null,
  pmnbedat    varchar2(50) default ' ' not null,
  pmnbnpur    varchar2(255) default ' ' not null,
  pmnbnsur    varchar2(255) default ' ' not null,
  pmnbnmur    varchar2(255) default ' ' not null,
  pmnbcuid    varchar2(10) default ' ' not null,
  pmnbcdat    varchar2(8) default ' ' not null,
  pmnbctim    varchar2(8) default ' ' not null,
  pmnbuuid    varchar2(10) default ' ' not null,
  pmnbudat    varchar2(8) default ' ' not null,
  pmnbutim    varchar2(8) default ' ' not null,
  pmnbspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsndba1 primary key( 
pmnbdnam,
pmnbhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsndba2 on pmsndbaf
(
pmnbhosp,
pmnbdnam
)
  tablespace pas_indx; 
