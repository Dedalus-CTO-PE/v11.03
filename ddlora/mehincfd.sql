create table mehincaf
(
  mhinseid    varchar2(4) default ' ' not null,
  mhindesc    varchar2(20) default ' ' not null,
  mhinfdat    varchar2(8) default ' ' not null,
  mhintdat    varchar2(8) default ' ' not null,
  mhinrecn    number(6,0) default 0 not null,
  mhinerrn    number(6,0) default 0 not null,
  mhincuid    varchar2(10) default ' ' not null,
  mhincdat    varchar2(8) default ' ' not null,
  mhinctim    varchar2(8) default ' ' not null,
  mhinuuid    varchar2(10) default ' ' not null,
  mhinudat    varchar2(8) default ' ' not null,
  mhinutim    varchar2(8) default ' ' not null,
  mhinfiln    varchar2(12) default ' ' not null,
  mhineflg    varchar2(2) default ' ' not null,
  mhinspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehinca1 primary key( 
mhinseid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehinca2 on mehincaf
(
mhinfdat,
mhinseid
)
  tablespace pas_indx; 
