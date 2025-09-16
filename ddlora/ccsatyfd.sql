create table ccsatyaf
(
  ccataty     varchar2(4) default ' ' not null,
  ccatdes     varchar2(35) default ' ' not null,
  ccattqy     number(16,4) default 0 not null,
  ccatspa     varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsatya1 primary key( 
ccataty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsatya2 on ccsatyaf
(
ccatdes,
ccataty
)
  tablespace pas_indx; 
