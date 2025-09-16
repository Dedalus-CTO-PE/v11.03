create table mrtepsaf
(
  mrepeid     varchar2(4) default ' ' not null,
  mrepvis     varchar2(8) default ' ' not null,
  mreplev1    varchar2(10) default ' ' not null,
  mreplev2    varchar2(10) default ' ' not null,
  mreplev3    varchar2(10) default ' ' not null,
  mreplev4    varchar2(10) default ' ' not null,
  mrepanl1    number(16,4) default 0 not null,
  mrepanl2    number(16,4) default 0 not null,
  mrepanl3    number(16,4) default 0 not null,
  mrepdel     varchar2(1) default ' ' not null,
  mrepspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtepsa1 primary key( 
mrepeid,
mrepvis)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtepsa2 on mrtepsaf
(
mreplev1,
mreplev2,
mreplev3,
mreplev4,
mrepeid,
mrepvis
)
  tablespace pas_indx; 
