create table fmshccaf
(
  fmhainst    varchar2(3) default ' ' not null,
  fmhahccc    varchar2(5) default ' ' not null,
  fmhaledg    varchar2(2) default ' ' not null,
  fmhacoce    varchar2(12) default ' ' not null,
  fmhaspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmshcca1 primary key( 
fmhainst,
fmhahccc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
