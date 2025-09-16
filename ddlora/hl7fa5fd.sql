create table hl7fa5af
(
  hla5rsid    varchar2(64) default ' ' not null,
  hla5vrid    varchar2(10) default ' ' not null,
  hla5cnt1    varchar2(4) default ' ' not null,
  hla5cnt2    varchar2(4) default ' ' not null,
  hla5ntim    varchar2(40) default ' ' not null,
  hla5ntxt    varchar2(300) default ' ' not null,
  hla5nstr    varchar2(200) default ' ' not null,
  hla5nref    varchar2(200) default ' ' not null,
  hla5ntyp    varchar2(255) default ' ' not null,
  hla5ndis    varchar2(255) default ' ' not null,
  hla5nidu    varchar2(20) default ' ' not null,
  hla5nsys    varchar2(255) default ' ' not null,
  hla5nivl    varchar2(200) default ' ' not null,
  hla5nids    varchar2(255) default ' ' not null,
  hla5nidv    varchar2(50) default ' ' not null,
  hla5nidc    varchar2(50) default ' ' not null,
  hla5nidd    varchar2(200) default ' ' not null,
  hla5nius    varchar2(10) default ' ' not null,
  hla5nidt    varchar2(200) default ' ' not null,
  hla5nips    varchar2(40) default ' ' not null,
  hla5nipe    varchar2(40) default ' ' not null,
  hla5spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fa5a1 primary key( 
hla5rsid,
hla5vrid,
hla5cnt1,
hla5cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fa5a2 on hl7fa5af
(
hla5cnt2,
hla5rsid,
hla5vrid,
hla5cnt1
)
  tablespace pas_indx; 
