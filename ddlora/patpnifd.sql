create table patpniaf
(
  dptpnhnu    varchar2(2) default ' ' not null,
  ptpnadno    varchar2(8) default ' ' not null,
  ptpnnmpi    varchar2(20) default ' ' not null,
  ptpnspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpnia1 primary key( 
dptpnhnu,
ptpnadno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpnia2 on patpniaf
(
ptpnnmpi,
dptpnhnu,
ptpnadno
)
  tablespace pas_indx; 
