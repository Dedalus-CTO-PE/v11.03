create table apsordaf
(
  apodisc     varchar2(1) default ' ' not null,
  apodord     varchar2(7) default ' ' not null,
  apodcat     varchar2(6) default ' ' not null,
  apodled     varchar2(2) default ' ' not null,
  apodacc     varchar2(12) default ' ' not null,
  apoddis     varchar2(5) default ' ' not null,
  apodres     varchar2(4) default ' ' not null,
  apoddes     varchar2(35) default ' ' not null,
  apodamt     number(14,2) default 0 not null,
  apodgsta    number(14,2) default 0 not null,
  apoduct     number(16,4) default 0 not null,
  apodugs     number(16,4) default 0 not null,
  apodqty     number(14,2) default 0 not null,
  apodgst     varchar2(6) default ' ' not null,
  apodspa     varchar2(36) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsorda1 primary key( 
apodisc,
apodord,
apodcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsorda2 on apsordaf
(
apodled,
apodacc,
apodisc,
apodord,
apodcat
)
  tablespace pas_indx; 
