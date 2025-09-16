create table patok11f
(
  ptcoitm     varchar2(9) default ' ' not null,
  ptcokwd     varchar2(15) default ' ' not null,
  ptcospa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ptok11a1 primary key( 
ptcoitm,
ptcokwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ptok11a2 on patok11f
(
ptcokwd,
ptcoitm
)
  tablespace pas_indx; 
