create table legcmntf
(
  dlpcadmn    varchar2(8) default ' ' not null,
  dlpclno     varchar2(3) default ' ' not null,
  lpcline     varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legcmnt1 primary key( 
dlpcadmn,
dlpclno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
