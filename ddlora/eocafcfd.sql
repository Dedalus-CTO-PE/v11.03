create table eocafcaf
(
  decafadm    varchar2(8) default ' ' not null,
  ecafdate    varchar2(8) default ' ' not null,
  ecafsent    varchar2(1) default ' ' not null,
  ecafspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint eocafca1 primary key( 
decafadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index eocafca2 on eocafcaf
(
ecafdate,
decafadm
)
  tablespace pas_indx; 
