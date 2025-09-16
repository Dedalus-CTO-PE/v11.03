create table fmsnrfaf
(
  fmnfcode    varchar2(3) default ' ' not null,
  fmnftcod    varchar2(12) default ' ' not null,
  fmnfaseq    varchar2(5) default ' ' not null,
  fmnfscod    varchar2(12) default ' ' not null,
  fmnfspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrfa1 primary key( 
fmnfcode,
fmnftcod,
fmnfaseq,
fmnfscod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsnrfa2 on fmsnrfaf
(
fmnfcode,
fmnfscod,
fmnftcod
)
  tablespace pas_indx; 
