create table hl7faaaf
(
  hlaarsid    varchar2(64) default ' ' not null,
  hlaavrid    varchar2(10) default ' ' not null,
  hlaacnt1    varchar2(4) default ' ' not null,
  hlaacnt2    varchar2(4) default ' ' not null,
  hlaaidus    varchar2(20) default ' ' not null,
  hlaaidsy    varchar2(255) default ' ' not null,
  hlaaidve    varchar2(50) default ' ' not null,
  hlaaidcd    varchar2(50) default ' ' not null,
  hlaaiddi    varchar2(200) default ' ' not null,
  hlaaidsl    varchar2(1) default ' ' not null,
  hlaaidtx    varchar2(200) default ' ' not null,
  hlaasyst    varchar2(255) default ' ' not null,
  hlaaidva    varchar2(200) default ' ' not null,
  hlaapsta    varchar2(40) default ' ' not null,
  hlaapend    varchar2(40) default ' ' not null,
  hlaaaref    varchar2(200) default ' ' not null,
  hlaaatyp    varchar2(255) default ' ' not null,
  hlaaadis    varchar2(200) default ' ' not null,
  hlaaiuse    varchar2(40) default ' ' not null,
  hlaaisys    varchar2(255) default ' ' not null,
  hlaaival    varchar2(200) default ' ' not null,
  hlaaitxt    varchar2(200) default ' ' not null,
  hlaacsys    varchar2(255) default ' ' not null,
  hlaacver    varchar2(200) default ' ' not null,
  hlaaccod    varchar2(50) default ' ' not null,
  hlaacdis    varchar2(200) default ' ' not null,
  hlaacuss    varchar2(10) default ' ' not null,
  hlaapstr    varchar2(40) default ' ' not null,
  hlaapren    varchar2(40) default ' ' not null,
  hlaaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faaa1 primary key( 
hlaarsid,
hlaavrid,
hlaacnt1,
hlaacnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
