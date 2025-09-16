create table patkco3f
(
  ptcoitm     varchar2(9) default ' ' not null,
  ptcokwd     varchar2(15) default ' ' not null,
  ptcospa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patk3oa1 primary key( 
ptcoitm,
ptcokwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patk3oa2 on patkco3f
(
ptcokwd,
ptcoitm
)
  tablespace pas_indx; 
