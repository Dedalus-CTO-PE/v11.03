create table hl7p1daf
(
  hl1drsid    varchar2(64) default ' ' not null,
  hl1dvrid    varchar2(10) default ' ' not null,
  hl1dcnt1    varchar2(4) default ' ' not null,
  hl1dcnt2    varchar2(4) default ' ' not null,
  hl1dcprf    varchar2(10) default ' ' not null,
  hl1dctxt    varchar2(200) default ' ' not null,
  hl1dcsys    varchar2(255) default ' ' not null,
  hl1dcver    varchar2(200) default ' ' not null,
  hl1dccod    varchar2(50) default ' ' not null,
  hl1dcdis    varchar2(200) default ' ' not null,
  hl1dcusl    varchar2(10) default ' ' not null,
  hl1dcsy2    varchar2(255) default ' ' not null,
  hl1dcve2    varchar2(200) default ' ' not null,
  hl1dcco2    varchar2(50) default ' ' not null,
  hl1dcdi2    varchar2(200) default ' ' not null,
  hl1dcus2    varchar2(10) default ' ' not null,
  hl1dcsy3    varchar2(255) default ' ' not null,
  hl1dcve3    varchar2(200) default ' ' not null,
  hl1dcco3    varchar2(50) default ' ' not null,
  hl1dcdi3    varchar2(200) default ' ' not null,
  hl1dcus3    varchar2(10) default ' ' not null,
  hl1dspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p1da1 primary key( 
hl1drsid,
hl1dvrid,
hl1dcnt1,
hl1dcnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
