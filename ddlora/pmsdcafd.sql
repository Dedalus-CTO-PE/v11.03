create table pmsdcaaf
(
  pmdcfile    varchar2(8) default ' ' not null,
  pmdcuniq    varchar2(3) default ' ' not null,
  pmdccont    varchar2(6) default ' ' not null,
  pmdcrkey    varchar2(127) default ' ' not null,
  pmdcduid    varchar2(10) default ' ' not null,
  pmdcddat    varchar2(8) default ' ' not null,
  pmdcdtim    varchar2(8) default ' ' not null,
  pmdcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdcaa1 primary key( 
pmdcfile,
pmdcddat,
pmdcdtim,
pmdcuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsdcaa2 on pmsdcaaf
(
pmdccont,
pmdcfile,
pmdcddat,
pmdcdtim,
pmdcuniq
)
  tablespace pas_indx; 
create unique index pmsdcaa3 on pmsdcaaf
(
pmdcduid,
pmdcddat,
pmdcdtim,
pmdcfile,
pmdcuniq
)
  tablespace pas_indx; 
create unique index pmsdcaa4 on pmsdcaaf
(
pmdccont,
pmdcduid,
pmdcfile,
pmdcddat,
pmdcdtim,
pmdcuniq
)
  tablespace pas_indx; 
