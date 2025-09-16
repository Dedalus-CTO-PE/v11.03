create table fmsdisaf
(
  fmdscode    varchar2(5) default ' ' not null,
  fmdsdesc    varchar2(20) default ' ' not null,
  fmdsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsdisa1 primary key( 
fmdscode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
