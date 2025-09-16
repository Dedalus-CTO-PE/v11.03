create table pathfrec
(
  hfrinvr     varchar2(8) default ' ' not null,
  hfrstat     number(1,0) default 0 not null,
  lf          varchar2(1) default ' ' not null,
constraint pathfre1 primary key( 
hfrinvr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
