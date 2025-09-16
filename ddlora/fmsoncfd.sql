create table fmsoncaf
(
  fmoncode    varchar2(3) default ' ' not null,
  fmondesc    varchar2(20) default ' ' not null,
  fmonperc    number(6,2) default 0 not null,
  fmonspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsonca1 primary key( 
fmoncode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
