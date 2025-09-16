create table patpkiaf
(
  ptpkcode    varchar2(3) default ' ' not null,
  ptpkkkwd    varchar2(50) default ' ' not null,
  ptpkspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpkia1 primary key( 
ptpkcode,
ptpkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpkia2 on patpkiaf
(
ptpkkkwd,
ptpkcode
)
  tablespace pas_indx; 
