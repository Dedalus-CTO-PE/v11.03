create table ccscmcaf
(
  ccmchcd     varchar2(2) default ' ' not null,
  ccmcdpt     varchar2(8) default ' ' not null,
  ccmcyear    varchar2(4) default ' ' not null,
  ccmcper     varchar2(2) default ' ' not null,
  ccmcdir     number(14,2) default 0 not null,
  ccmcind     number(14,2) default 0 not null,
  ccmcflx     number(14,2) default 0 not null,
  ccmcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmca1 primary key( 
ccmchcd,
ccmcdpt,
ccmcyear,
ccmcper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscmca2 on ccscmcaf
(
ccmchcd,
ccmcyear,
ccmcper,
ccmcdpt
)
  tablespace pas_indx; 
