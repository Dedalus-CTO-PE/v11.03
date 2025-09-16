create table fmsnrlaf
(
  fmnlcod     varchar2(3) default ' ' not null,
  fmnltyp     varchar2(1) default ' ' not null,
  fmnlunq     varchar2(3) default ' ' not null,
  fmnllin     varchar2(70) default ' ' not null,
  fmnlspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrla1 primary key( 
fmnlcod,
fmnltyp,
fmnlunq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
