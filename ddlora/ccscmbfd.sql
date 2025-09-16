create table ccscmbaf
(
  ccmbhcd     varchar2(2) default ' ' not null,
  ccmbdpt     varchar2(8) default ' ' not null,
  ccmbyear    varchar2(4) default ' ' not null,
  ccmbper     varchar2(2) default ' ' not null,
  ccmbcty     varchar2(4) default ' ' not null,
  ccmbdir     number(14,2) default 0 not null,
  ccmbind     number(14,2) default 0 not null,
  ccmbflx     number(14,2) default 0 not null,
  ccmbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmba1 primary key( 
ccmbhcd,
ccmbdpt,
ccmbyear,
ccmbper,
ccmbcty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscmba2 on ccscmbaf
(
ccmbhcd,
ccmbdpt,
ccmbcty,
ccmbyear,
ccmbper
)
  tablespace pas_indx; 
