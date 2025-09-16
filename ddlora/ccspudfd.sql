create table ccspudaf
(
  ccpucls     varchar2(1) default ' ' not null,
  ccpucod     varchar2(4) default ' ' not null,
  ccpudes     varchar2(35) default ' ' not null,
  ccpuspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspuda1 primary key( 
ccpucls,
ccpucod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
