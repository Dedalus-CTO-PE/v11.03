create table amslocaf
(
  amlobld     varchar2(3) default ' ' not null,
  amloloc     varchar2(6) default ' ' not null,
  amlodes     varchar2(35) default ' ' not null,
  amlour1     varchar2(30) default ' ' not null,
  amlour2     varchar2(30) default ' ' not null,
  amloud1     varchar2(8) default ' ' not null,
  amloud2     varchar2(8) default ' ' not null,
  amlouy1     varchar2(1) default ' ' not null,
  amlouy2     varchar2(1) default ' ' not null,
  amlospa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsloca1 primary key( 
amlobld,
amloloc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsloca2 on amslocaf
(
amloloc,
amlobld
)
  tablespace pas_indx; 
