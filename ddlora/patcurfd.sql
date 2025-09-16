create table patcuraf
(
  dcmurno     varchar2(8) default ' ' not null,
  dcmurlno    varchar2(3) default ' ' not null,
  cmurline    varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcura1 primary key( 
dcmurno,
dcmurlno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
