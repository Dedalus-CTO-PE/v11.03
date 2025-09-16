create table hl7fa3af
(
  hla3rsid    varchar2(64) default ' ' not null,
  hla3vrid    varchar2(10) default ' ' not null,
  hla3cnt1    varchar2(4) default ' ' not null,
  hla3cnt2    varchar2(4) default ' ' not null,
  hla3rstx    varchar2(200) default ' ' not null,
  hla3rssy    varchar2(255) default ' ' not null,
  hla3rsve    varchar2(50) default ' ' not null,
  hla3rscd    varchar2(50) default ' ' not null,
  hla3rsdi    varchar2(200) default ' ' not null,
  hla3rssl    varchar2(10) default ' ' not null,
  hla3rdes    varchar2(200) default ' ' not null,
  hla3rost    varchar2(40) default ' ' not null,
  hla3rsvy    varchar2(10) default ' ' not null,
  hla3retx    varchar2(200) default ' ' not null,
  hla3resy    varchar2(255) default ' ' not null,
  hla3reve    varchar2(50) default ' ' not null,
  hla3recd    varchar2(50) default ' ' not null,
  hla3redi    varchar2(200) default ' ' not null,
  hla3resl    varchar2(10) default ' ' not null,
  hla3spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fa3a1 primary key( 
hla3rsid,
hla3vrid,
hla3cnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
