create table pataccaf
(
  ptasclam    varchar2(3) default ' ' not null,
  ptasatyp    varchar2(3) default ' ' not null,
  dptasday    varchar2(3) default ' ' not null,
  ptasaccs    varchar2(3) default ' ' not null,
  ptasprac    varchar2(3) default ' ' not null,
  ptasspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patacca1 primary key( 
ptasclam,
ptasatyp,
dptasday)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
