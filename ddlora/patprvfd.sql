create table patprvaf
(
  ptpvcode    varchar2(6) default ' ' not null,
  ptpvdesc    varchar2(40) default ' ' not null,
  ptpvspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patprva1 primary key( 
ptpvcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
