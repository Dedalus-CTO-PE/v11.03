create table ccssdcaf
(
  ccsdhcd     varchar2(2) default ' ' not null,
  ccsddpt     varchar2(8) default ' ' not null,
  ccsdyear    varchar2(4) default ' ' not null,
  ccsdper     varchar2(2) default ' ' not null,
  ccsddir     number(14,2) default 0 not null,
  ccsddrb     number(14,2) default 0 not null,
  ccsdind     number(14,2) default 0 not null,
  ccsdinb     number(14,2) default 0 not null,
  ccsdfbu     number(14,2) default 0 not null,
  ccsdstd     number(14,2) default 0 not null,
  ccsdchg     number(14,2) default 0 not null,
  ccsdspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccssdca1 primary key( 
ccsdhcd,
ccsddpt,
ccsdyear,
ccsdper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccssdca2 on ccssdcaf
(
ccsdhcd,
ccsdyear,
ccsdper,
ccsddpt
)
  tablespace pas_indx; 
