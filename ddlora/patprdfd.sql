create table patprdaf
(
  ptpdcmbs    varchar2(9) default ' ' not null,
  ptpdpdrg    varchar2(4) default ' ' not null,
  ptpdwght    varchar2(3) default ' ' not null,
  ptpdpsex    varchar2(1) default ' ' not null,
  ptpdsday    varchar2(1) default ' ' not null,
  ptpdagef    varchar2(2) default ' ' not null,
  ptpdaget    varchar2(3) default ' ' not null,
  ptpdactv    varchar2(1) default ' ' not null,
  ptpdspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patprda1 primary key( 
ptpdcmbs,
ptpdpdrg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patprda2 on patprdaf
(
ptpdcmbs,
ptpdwght,
ptpdpdrg
)
  tablespace pas_indx; 
