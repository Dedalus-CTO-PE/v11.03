create table apscafaf
(
  apcachq     varchar2(15) default ' ' not null,
  apcacrd     varchar2(5) default ' ' not null,
  apcainv     varchar2(15) default ' ' not null,
  apcaled     varchar2(2) default ' ' not null,
  apcaamt     number(14,2) default 0 not null,
  apcades     varchar2(35) default ' ' not null,
  apcasort    varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apscafa1 primary key( 
apcachq,
apcacrd,
apcainv,
apcaled)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apscafa2 on apscafaf
(
apcaled,
apcachq,
apcacrd,
apcainv
)
  tablespace pas_indx; 
create unique index apscafa3 on apscafaf
(
apcachq,
apcasort,
apcacrd,
apcainv,
apcaled
)
  tablespace pas_indx; 
