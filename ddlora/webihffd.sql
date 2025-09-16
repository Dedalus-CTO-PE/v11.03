create table webihfaf
(
  wbinfbid    varchar2(3) default ' ' not null,
  wbinarid    varchar2(20) default ' ' not null,
  wbinfrid    varchar2(15) default ' ' not null,
  wbinrptc    varchar2(3) default ' ' not null,
  wbincacn    varchar2(2) default ' ' not null,
  wbinexcn    varchar2(2) default ' ' not null,
  wbinexcd    varchar2(4) default ' ' not null,
  wbinextx    varchar2(80) default ' ' not null,
  wbintrid    varchar2(24) default ' ' not null,
  wbinmsid    varchar2(36) default ' ' not null,
  wbinspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihfa1 primary key( 
wbinfbid,
wbinarid,
wbinfrid,
wbinrptc,
wbincacn,
wbinexcn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihfa2 on webihfaf
(
wbintrid,
wbinfbid,
wbinarid,
wbinfrid,
wbinrptc,
wbincacn,
wbinexcn
)
  tablespace pas_indx; 
create unique index webihfa3 on webihfaf
(
wbinmsid,
wbinfbid,
wbinarid,
wbinfrid,
wbinrptc,
wbincacn,
wbinexcn
)
  tablespace pas_indx; 
