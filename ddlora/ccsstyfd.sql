create table ccsstyaf
(
  ccststy     varchar2(3) default ' ' not null,
  ccstdes     varchar2(35) default ' ' not null,
  ccstlen     number(3,0) default 0 not null,
  ccstjr      varchar2(1) default ' ' not null,
  ccstzf      varchar2(1) default ' ' not null,
  ccstde      varchar2(1) default ' ' not null,
  ccstspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsstya1 primary key( 
ccststy)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsstya2 on ccsstyaf
(
ccstdes,
ccststy
)
  tablespace pas_indx; 
