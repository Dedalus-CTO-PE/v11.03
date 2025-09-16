create table patkdraf
(
  ptkditm     varchar2(4) default ' ' not null,
  ptkdkwd     varchar2(15) default ' ' not null,
  ptkdspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkdra1 primary key( 
ptkditm,
ptkdkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkdra2 on patkdraf
(
ptkdkwd,
ptkditm
)
  tablespace pas_indx; 
