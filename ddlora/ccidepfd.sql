create table ccidepaf
(
  ccdpdept    varchar2(3) default ' ' not null,
  ccdpdesc    varchar2(30) default ' ' not null,
  dccdpman    varchar2(1) default ' ' not null,
  ccdpiopa    number(1,0) default 0 not null,
  ccdpspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccidepa1 primary key( 
ccdpdept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccidepa2 on ccidepaf
(
ccdpdesc,
ccdpdept
)
  tablespace pas_indx; 
create unique index ccidepa3 on ccidepaf
(
dccdpman,
ccdpdesc,
ccdpdept
)
  tablespace pas_indx; 
