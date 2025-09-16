create table ccsarcaf
(
  ccararc     varchar2(4) default ' ' not null,
  ccardes     varchar2(35) default ' ' not null,
  ccarcmp     number(1,0) default 0 not null,
  ccardir     varchar2(40) default ' ' not null,
  ccarspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsarca1 primary key( 
ccararc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
