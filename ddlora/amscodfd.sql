create table amscodaf
(
  amcdcat     varchar2(2) default ' ' not null,
  amcdcod     varchar2(3) default ' ' not null,
  amcddes     varchar2(35) default ' ' not null,
  amcdur1     varchar2(30) default ' ' not null,
  amcdur2     varchar2(30) default ' ' not null,
  amcduy1     varchar2(1) default ' ' not null,
  amcduy2     varchar2(1) default ' ' not null,
  amcdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amscoda1 primary key( 
amcdcat,
amcdcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amscoda2 on amscodaf
(
amcdcod,
amcdcat
)
  tablespace pas_indx; 
