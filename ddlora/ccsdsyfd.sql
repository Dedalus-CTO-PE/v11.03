create table ccsdsyaf
(
  ccdssec     varchar2(4) default ' ' not null,
  ccdshcd     varchar2(2) default ' ' not null,
  ccdsdpt     varchar2(8) default ' ' not null,
  ccdsspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdsya1 primary key( 
ccdssec,
ccdshcd,
ccdsdpt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsdsya2 on ccsdsyaf
(
ccdshcd,
ccdsdpt,
ccdssec
)
  tablespace pas_indx; 
