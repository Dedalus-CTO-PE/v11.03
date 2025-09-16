create table patpeiaf
(
  ptpestdt    varchar2(8) default ' ' not null,
  dptpeadm    varchar2(8) default ' ' not null,
  dptpesta    varchar2(1) default ' ' not null,
  ptpedate    varchar2(8) default ' ' not null,
  ptperesn    varchar2(3) default ' ' not null,
  ptpeoper    varchar2(10) default ' ' not null,
  ptpespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpeio1 primary key( 
ptpestdt,
dptpeadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpeio2 on patpeiaf
(
ptpestdt,
dptpesta,
dptpeadm
)
  tablespace pas_indx; 
create unique index patpeio3 on patpeiaf
(
dptpeadm,
ptpestdt
)
  tablespace pas_indx; 
