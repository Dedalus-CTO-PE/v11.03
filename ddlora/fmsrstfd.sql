create table fmsrstaf
(
  fmrtstyc    varchar2(3) default ' ' not null,
  fmrtrown    varchar2(2) default ' ' not null,
  fmrtline    varchar2(2) default ' ' not null,
  fmrttype    varchar2(2) default ' ' not null,
  fmrtwidt    varchar2(2) default ' ' not null,
  fmrtvtyp    varchar2(2) default ' ' not null,
  fmrtscal    varchar2(2) default ' ' not null,
  fmrtperi    varchar2(2) default ' ' not null,
  fmrtfrmt    varchar2(20) default ' ' not null,
  fmrtspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsrsta1 primary key( 
fmrtstyc,
fmrtrown,
fmrtline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
