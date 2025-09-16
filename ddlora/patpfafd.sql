create table patpfaaf
(
  ptpfinvn    varchar2(8) default ' ' not null,
  ptpfifdt    varchar2(8) default ' ' not null,
  ptpfplan    varchar2(8) default ' ' not null,
  ptpfstat    varchar2(3) default ' ' not null,
  ptpfmodr    varchar2(3) default ' ' not null,
  ptpfwebc    varchar2(10) default ' ' not null,
  ptpfdatc    varchar2(8) default ' ' not null,
  ptpftimc    varchar2(8) default ' ' not null,
  ptpfwebu    varchar2(10) default ' ' not null,
  ptpfdatu    varchar2(8) default ' ' not null,
  ptpftimu    varchar2(8) default ' ' not null,
  ptpfspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpfaa1 primary key( 
ptpfinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
