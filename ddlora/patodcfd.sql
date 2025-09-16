create table patodcaf
(
  dptodadm    varchar2(8) default ' ' not null,
  ptoddate    varchar2(8) default ' ' not null,
  ptodsent    varchar2(1) default ' ' not null,
  ptodfill    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patodca1 primary key( 
dptodadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patodca2 on patodcaf
(
ptoddate,
dptodadm
)
  tablespace pas_indx; 
