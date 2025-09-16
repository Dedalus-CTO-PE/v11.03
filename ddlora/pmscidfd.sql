create table pmscidaf
(
  pmcicntr    varchar2(6) default ' ' not null,
  pmcifdat    varchar2(8) default ' ' not null,
  pmcitdat    varchar2(8) default ' ' not null,
  pmcidesc    varchar2(80) default ' ' not null,
  pmcidele    varchar2(1) default ' ' not null,
  pmcicuid    varchar2(10) default ' ' not null,
  pmcicdat    varchar2(8) default ' ' not null,
  pmcictim    varchar2(8) default ' ' not null,
  pmciuuid    varchar2(10) default ' ' not null,
  pmciudat    varchar2(8) default ' ' not null,
  pmciutim    varchar2(8) default ' ' not null,
  pmcipinv    varchar2(1) default ' ' not null,
  pmcicldt    varchar2(8) default ' ' not null,
  pmcispar    varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmscida1 primary key( 
pmcicntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
