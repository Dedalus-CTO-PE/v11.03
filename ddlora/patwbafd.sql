create table patwbaaf
(
  ptwaward    varchar2(3) default ' ' not null,
  ptwabed     varchar2(3) default ' ' not null,
  ptwabatr    varchar2(3) default ' ' not null,
  ptwahosp    varchar2(3) default ' ' not null,
  ptwadtcr    varchar2(8) default ' ' not null,
  ptwatmcr    varchar2(8) default ' ' not null,
  ptwaidcr    varchar2(10) default ' ' not null,
  ptwadtup    varchar2(8) default ' ' not null,
  ptwatmup    varchar2(8) default ' ' not null,
  ptwaidup    varchar2(10) default ' ' not null,
  ptwaspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patwbaa1 primary key( 
ptwaward,
ptwabed,
ptwabatr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patwbaa2 on patwbaaf
(
ptwabatr,
ptwaward,
ptwabed
)
  tablespace pas_indx; 
create unique index patwbaa3 on patwbaaf
(
ptwabatr,
ptwahosp,
ptwaward,
ptwabed
)
  tablespace pas_indx; 
create unique index patwbaa4 on patwbaaf
(
ptwahosp,
ptwabatr,
ptwaward,
ptwabed
)
  tablespace pas_indx; 
