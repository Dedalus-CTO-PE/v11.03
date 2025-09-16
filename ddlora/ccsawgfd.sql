create table ccsawgaf
(
  ccawhcd     varchar2(2) default ' ' not null,
  ccawdpt     varchar2(8) default ' ' not null,
  ccawaty     varchar2(4) default ' ' not null,
  ccawqty     number(16,4) default 0 not null,
  ccawspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsawga1 primary key( 
ccawhcd,
ccawdpt,
ccawaty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsawga2 on ccsawgaf
(
ccawhcd,
ccawaty,
ccawdpt
)
  tablespace pas_indx; 
