create table patdadaf
(
  dptdaadm    varchar2(8) default ' ' not null,
  ptdaadts    varchar2(5) default ' ' not null,
  ptdadcts    varchar2(5) default ' ' not null,
  ptdaspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdada1 primary key( 
dptdaadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
