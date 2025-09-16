create table ccsctyaf
(
  ccctcty     varchar2(4) default ' ' not null,
  ccctdes     varchar2(35) default ' ' not null,
  ccctfix     varchar2(1) default ' ' not null,
  ccctlab     varchar2(1) default ' ' not null,
  ccctind     varchar2(1) default ' ' not null,
  ccctspa     varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsctya1 primary key( 
ccctcty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsctya2 on ccsctyaf
(
ccctdes,
ccctcty
)
  tablespace pas_indx; 
