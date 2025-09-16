create table patfcmmf
(
  fundcod     varchar2(6) default ' ' not null,
  dfcount     varchar2(2) default ' ' not null,
  ftext       varchar2(70) default ' ' not null,
  fspares     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfcmm1 primary key( 
fundcod,
dfcount)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
