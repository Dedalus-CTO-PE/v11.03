create table websedaf
(
  wbsdarid    varchar2(20) default ' ' not null,
  wbsdrptc    varchar2(3) default ' ' not null,
  wbsdscod    varchar2(11) default ' ' not null,
  wbsdsrvc    varchar2(3) default ' ' not null,
  wbsdsfec    varchar2(4) default ' ' not null,
  wbsdsexc    varchar2(3) default ' ' not null,
  wbsdsfet    varchar2(80) default ' ' not null,
  wbsdtrid    varchar2(24) default ' ' not null,
  wbsdmsid    varchar2(36) default ' ' not null,
  wbsdspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webseda1 primary key( 
wbsdarid,
wbsdrptc,
wbsdscod,
wbsdsrvc,
wbsdsfec,
wbsdsexc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webseda2 on websedaf
(
wbsdtrid,
wbsdarid,
wbsdrptc,
wbsdscod,
wbsdsrvc,
wbsdsfec,
wbsdsexc
)
  tablespace pas_indx; 
create unique index webseda3 on websedaf
(
wbsdmsid,
wbsdarid,
wbsdrptc,
wbsdscod,
wbsdsrvc,
wbsdsfec,
wbsdsexc
)
  tablespace pas_indx; 
