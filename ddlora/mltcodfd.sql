create table mltcodaf
(
  mlcohosp    varchar2(3) default ' ' not null,
  mlcotcod    varchar2(2) default ' ' not null,
  mlcoacod    varchar2(3) default ' ' not null,
  mlcospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mltcoda1 primary key( 
mlcohosp,
mlcotcod,
mlcoacod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mltcoda2 on mltcodaf
(
mlcotcod,
mlcoacod,
mlcohosp
)
  tablespace pas_indx; 
