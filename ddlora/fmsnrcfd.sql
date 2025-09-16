create table fmsnrcaf
(
  fmnccode    varchar2(3) default ' ' not null,
  fmnctcod    varchar2(12) default ' ' not null,
  fmncaseq    varchar2(5) default ' ' not null,
  fmncscod    varchar2(12) default ' ' not null,
  fmncspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrca1 primary key( 
fmnccode,
fmnctcod,
fmncaseq,
fmncscod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsnrca2 on fmsnrcaf
(
fmnccode,
fmncscod,
fmnctcod
)
  tablespace pas_indx; 
