create table patik1af
(
  ptikitm     varchar2(9) default ' ' not null,
  ptikkwd     varchar2(15) default ' ' not null,
  ptikspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patik1a1 primary key( 
ptikitm,
ptikkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patik1a2 on patik1af
(
ptikkwd,
ptikitm
)
  tablespace pas_indx; 
