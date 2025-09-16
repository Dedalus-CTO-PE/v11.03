create table patkco7f
(
  ptcoitm     varchar2(9) default ' ' not null,
  ptcokwd     varchar2(15) default ' ' not null,
  ptcospa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patk7oa1 primary key( 
ptcoitm,
ptcokwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patk7oa2 on patkco7f
(
ptcokwd,
ptcoitm
)
  tablespace pas_indx; 
