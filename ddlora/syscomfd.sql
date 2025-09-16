create table syscomaf
(
  sycmsys     varchar2(2) default ' ' not null,
  sycmfil     varchar2(2) default ' ' not null,
  sycmfld     varchar2(4) default ' ' not null,
  dsycmuni    varchar2(2) default ' ' not null,
  sycmtext    varchar2(37) default ' ' not null,
  sycmspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint syscoma1 primary key( 
sycmsys,
sycmfil,
sycmfld,
dsycmuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
