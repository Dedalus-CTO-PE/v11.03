create table ibacodef
(
  prxcata     varchar2(2) default ' ' not null,
  prxcode     varchar2(3) default ' ' not null,
  prxdesc     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibacode1 primary key( 
prxcata,
prxcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibacode2 on ibacodef
(
prxcode,
prxdesc,
prxcata
)
  tablespace pas_indx; 
