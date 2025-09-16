create table hl7p3aaf
(
  hl3arsid    varchar2(64) default ' ' not null,
  hl3avrid    varchar2(10) default ' ' not null,
  hl3acnt1    varchar2(4) default ' ' not null,
  hl3acnt2    varchar2(4) default ' ' not null,
  hl3aaref    varchar2(200) default ' ' not null,
  hl3aatyp    varchar2(255) default ' ' not null,
  hl3aadis    varchar2(200) default ' ' not null,
  hl3aiuse    varchar2(40) default ' ' not null,
  hl3aisys    varchar2(255) default ' ' not null,
  hl3aival    varchar2(200) default ' ' not null,
  hl3aitxt    varchar2(200) default ' ' not null,
  hl3acsys    varchar2(255) default ' ' not null,
  hl3acver    varchar2(200) default ' ' not null,
  hl3accod    varchar2(50) default ' ' not null,
  hl3acdis    varchar2(200) default ' ' not null,
  hl3acuss    varchar2(10) default ' ' not null,
  hl3apstr    varchar2(40) default ' ' not null,
  hl3apend    varchar2(40) default ' ' not null,
  hl3adisp    varchar2(200) default ' ' not null,
  hl3aspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p3aa1 primary key( 
hl3arsid,
hl3avrid,
hl3acnt1,
hl3acnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
