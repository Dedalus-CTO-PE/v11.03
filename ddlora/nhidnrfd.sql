create table nhiauddn
(
  nhdnaudd    varchar2(8) default ' ' not null,
  nhdnaudt    varchar2(8) default ' ' not null,
  nhdnaudp    varchar2(2) default ' ' not null,
  nhdnaudr    varchar2(1) default ' ' not null,
  nhdnauds    number(1,0) default 0 not null,
  nhdnaudo    varchar2(4) default ' ' not null,
  nhdnnmpi    varchar2(7) default ' ' not null,
  nhdndonr    varchar2(10) default ' ' not null,
  nhdncnsu    varchar2(25) default ' ' not null,
  nhdncng1    varchar2(20) default ' ' not null,
  nhdncng2    varchar2(20) default ' ' not null,
  nhdncng3    varchar2(20) default ' ' not null,
  nhdncnpi    varchar2(1) default ' ' not null,
  nhdncna1    varchar2(35) default ' ' not null,
  nhdncna2    varchar2(30) default ' ' not null,
  nhdncna3    varchar2(30) default ' ' not null,
  nhdncna4    varchar2(30) default ' ' not null,
  nhdncna5    varchar2(30) default ' ' not null,
  nhdncrel    varchar2(2) default ' ' not null,
  nhdncwph    varchar2(25) default ' ' not null,
  nhdncaph    varchar2(25) default ' ' not null,
  nhdndat     varchar2(8) default ' ' not null,
  nhdntim     varchar2(8) default ' ' not null,
  nhdnspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index nhiauddn on nhiauddn
(
nhdnaudd,
nhdnaudt,
nhdnaudp,
nhdnaudr
)
tablespace pas_indx; 
create table nhidnraf
(
  nhdnnmpi    varchar2(7) default ' ' not null,
  nhdndonr    varchar2(10) default ' ' not null,
  nhdncnsu    varchar2(25) default ' ' not null,
  nhdncng1    varchar2(20) default ' ' not null,
  nhdncng2    varchar2(20) default ' ' not null,
  nhdncng3    varchar2(20) default ' ' not null,
  nhdncnpi    varchar2(1) default ' ' not null,
  nhdncna1    varchar2(35) default ' ' not null,
  nhdncna2    varchar2(30) default ' ' not null,
  nhdncna3    varchar2(30) default ' ' not null,
  nhdncna4    varchar2(30) default ' ' not null,
  nhdncna5    varchar2(30) default ' ' not null,
  nhdncrel    varchar2(2) default ' ' not null,
  nhdncwph    varchar2(25) default ' ' not null,
  nhdncaph    varchar2(25) default ' ' not null,
  nhdndat     varchar2(8) default ' ' not null,
  nhdntim     varchar2(8) default ' ' not null,
  nhdnspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhidnra1 primary key( 
nhdnnmpi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
