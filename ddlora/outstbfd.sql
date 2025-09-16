create table outstbaf
(
  osbsite     varchar2(6) default ' ' not null,
  osbcata     varchar2(2) default ' ' not null,
  osbcode     varchar2(3) default ' ' not null,
  osbdate     varchar2(6) default ' ' not null,
  osbnumb     number(8,0) default 0 not null,
  osbspar     varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outstba1 primary key( 
osbsite,
osbcata,
osbcode,
osbdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
