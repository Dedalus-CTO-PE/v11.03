create table ccscalaf
(
  cccayear    varchar2(4) default ' ' not null,
  cccaper     varchar2(2) default ' ' not null,
  cccades     varchar2(15) default ' ' not null,
  cccafdt     varchar2(8) default ' ' not null,
  cccatdt     varchar2(8) default ' ' not null,
  cccastat    number(1,0) default 0 not null,
  cccaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscala1 primary key( 
cccayear,
cccaper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscala2 on ccscalaf
(
cccaper,
cccayear
)
  tablespace pas_indx; 
create unique index ccscala3 on ccscalaf
(
cccatdt,
cccayear,
cccaper
)
  tablespace pas_indx; 
