create table ccsgkmaf
(
  ccgkkey     varchar2(20) default ' ' not null,
  ccgkdes     varchar2(35) default ' ' not null,
  ccgkspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsgkma1 primary key( 
ccgkkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsgkma2 on ccsgkmaf
(
ccgkdes,
ccgkkey
)
  tablespace pas_indx; 
