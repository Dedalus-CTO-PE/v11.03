create table sysfilaf
(
  syfisys     varchar2(2) default ' ' not null,
  syfifil     varchar2(2) default ' ' not null,
  syfiid3     varchar2(3) default ' ' not null,
  syfides     varchar2(35) default ' ' not null,
  syfiaud     number(1,0) default 0 not null,
  syfitio     number(1,0) default 0 not null,
  syfiid4     varchar2(1) default ' ' not null,
  syfiasec    number(5,0) default 0 not null,
  syfiapos    number(3,0) default 0 not null,
  syfiloc     number(1,0) default 0 not null,
  syfirel     varchar2(5) default ' ' not null,
  syfivers    number(3,0) default 0 not null,
  syfispa     varchar2(58) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sysfila1 primary key( 
syfisys,
syfifil)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sysfila2 on sysfilaf
(
syfisys,
syfiid3
)
  tablespace pas_indx; 
