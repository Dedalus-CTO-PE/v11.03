create table hl7fa4af
(
  hla4rsid    varchar2(64) default ' ' not null,
  hla4vrid    varchar2(10) default ' ' not null,
  hla4cnt1    varchar2(4) default ' ' not null,
  hla4cnt2    varchar2(4) default ' ' not null,
  hla4cnt3    varchar2(4) default ' ' not null,
  hla4rmtx    varchar2(200) default ' ' not null,
  hla4rmsy    varchar2(255) default ' ' not null,
  hla4rmvr    varchar2(200) default ' ' not null,
  hla4rmcd    varchar2(50) default ' ' not null,
  hla4rmdp    varchar2(200) default ' ' not null,
  hla4rmus    varchar2(10) default ' ' not null,
  hla4spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fa4a1 primary key( 
hla4rsid,
hla4vrid,
hla4cnt1,
hla4cnt2,
hla4cnt3)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fa4a2 on hl7fa4af
(
hla4cnt3,
hla4rsid,
hla4vrid,
hla4cnt1,
hla4cnt2
)
  tablespace pas_indx; 
