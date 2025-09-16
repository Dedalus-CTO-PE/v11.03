create table hl7p4aaf
(
  hl4arsid    varchar2(64) default ' ' not null,
  hl4avrid    varchar2(10) default ' ' not null,
  hl4acnt1    varchar2(4) default ' ' not null,
  hl4acnt2    varchar2(4) default ' ' not null,
  hl4aaref    varchar2(200) default ' ' not null,
  hl4aatyp    varchar2(255) default ' ' not null,
  hl4aadis    varchar2(200) default ' ' not null,
  hl4aiuse    varchar2(40) default ' ' not null,
  hl4aisys    varchar2(255) default ' ' not null,
  hl4aival    varchar2(200) default ' ' not null,
  hl4aitxt    varchar2(200) default ' ' not null,
  hl4acsys    varchar2(255) default ' ' not null,
  hl4acver    varchar2(200) default ' ' not null,
  hl4accod    varchar2(50) default ' ' not null,
  hl4acdis    varchar2(200) default ' ' not null,
  hl4acuss    varchar2(19) default ' ' not null,
  hl4apstr    varchar2(40) default ' ' not null,
  hl4apren    varchar2(40) default ' ' not null,
  hl4adisp    varchar2(200) default ' ' not null,
  hl4alnty    varchar2(50) default ' ' not null,
  hl4aspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p4aa1 primary key( 
hl4arsid,
hl4avrid,
hl4acnt1,
hl4acnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
