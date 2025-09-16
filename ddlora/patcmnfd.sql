create table patcmntf
(
  dpcadmn     varchar2(8) default ' ' not null,
  dpclno      varchar2(2) default ' ' not null,
  pcline      varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmnt1 primary key( 
dpcadmn,
dpclno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
