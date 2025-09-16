create table pmsoosaf
(
  pmoourno    varchar2(8) default ' ' not null,
  pmoocusr    varchar2(10) default ' ' not null,
  pmoocdte    varchar2(8) default ' ' not null,
  pmooctme    varchar2(8) default ' ' not null,
  pmoospar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsoosa1 primary key( 
pmoourno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
