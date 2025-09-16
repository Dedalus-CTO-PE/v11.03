create table ccsaadaf
(
  ccaddef     varchar2(1) default ' ' not null,
  ccadpc      varchar2(10) default ' ' not null,
  ccaddes     varchar2(30) default ' ' not null,
  ccadlv2     varchar2(10) default ' ' not null,
  ccadlv3     varchar2(10) default ' ' not null,
  ccadlv4     varchar2(10) default ' ' not null,
  ccadspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsaada1 primary key( 
ccaddef,
ccadpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsaada2 on ccsaadaf
(
ccaddef,
ccadlv2,
ccadlv3,
ccadlv4,
ccadpc
)
  tablespace pas_indx; 
