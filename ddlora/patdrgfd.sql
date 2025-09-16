create table patdrgaf
(
  drgfdte     varchar2(8) default ' ' not null,
  drgtdte     varchar2(8) default ' ' not null,
  drgyr       varchar2(4) default ' ' not null,
  drgnum      varchar2(2) default ' ' not null,
  drgcyr      varchar2(4) default ' ' not null,
  drgcnum     varchar2(2) default ' ' not null,
  drgldsc     varchar2(20) default ' ' not null,
  drgmdsc     varchar2(9) default ' ' not null,
  drgsdsc     varchar2(3) default ' ' not null,
  drgspar     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdrga1 primary key( 
drgyr,
drgnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdrga2 on patdrgaf
(
drgtdte,
drgyr,
drgnum
)
  tablespace pas_indx; 
create unique index patdrga3 on patdrgaf
(
drgcyr,
drgcnum
)
  tablespace pas_indx; 
