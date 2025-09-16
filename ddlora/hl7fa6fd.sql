create table hl7fa6af
(
  hla6rsid    varchar2(64) default ' ' not null,
  hla6vrid    varchar2(10) default ' ' not null,
  hla6cnt1    varchar2(4) default ' ' not null,
  hla6cnt2    varchar2(4) default ' ' not null,
  hla6cnt3    varchar2(4) default ' ' not null,
  hla6ntim    varchar2(40) default ' ' not null,
  hla6ntxt    varchar2(300) default ' ' not null,
  hla6nstr    varchar2(200) default ' ' not null,
  hla6nref    varchar2(200) default ' ' not null,
  hla6ntyp    varchar2(255) default ' ' not null,
  hla6ndis    varchar2(255) default ' ' not null,
  hla6nidu    varchar2(20) default ' ' not null,
  hla6nsys    varchar2(255) default ' ' not null,
  hla6nivl    varchar2(200) default ' ' not null,
  hla6nids    varchar2(255) default ' ' not null,
  hla6nidv    varchar2(50) default ' ' not null,
  hla6nidc    varchar2(50) default ' ' not null,
  hla6nidd    varchar2(200) default ' ' not null,
  hla6nius    varchar2(10) default ' ' not null,
  hla6nidt    varchar2(200) default ' ' not null,
  hla6nips    varchar2(40) default ' ' not null,
  hla6nipe    varchar2(40) default ' ' not null,
  hla6spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fa6a1 primary key( 
hla6rsid,
hla6vrid,
hla6cnt1,
hla6cnt2,
hla6cnt3)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fa6a2 on hl7fa6af
(
hla6cnt3,
hla6rsid,
hla6vrid,
hla6cnt1,
hla6cnt2
)
  tablespace pas_indx; 
