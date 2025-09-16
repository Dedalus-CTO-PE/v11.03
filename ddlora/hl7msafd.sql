create table hl7msaaf
(
  dmsain01    varchar2(20) default ' ' not null,
  dmsain02    varchar2(2) default ' ' not null,
  msa001      varchar2(2) default ' ' not null,
  msa002      varchar2(20) default ' ' not null,
  msa003      varchar2(80) default ' ' not null,
  msa004      varchar2(15) default ' ' not null,
  msa005      varchar2(2) default ' ' not null,
  msa006      varchar2(100) default ' ' not null,
  msa007      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7msa01 primary key( 
dmsain01,
dmsain02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
