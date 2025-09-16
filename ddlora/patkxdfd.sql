create table patkcdxf
(
  ptcditm     varchar2(9) default ' ' not null,
  ptcdkwd     varchar2(15) default ' ' not null,
  ptcdspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkxda1 primary key( 
ptcditm,
ptcdkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkxda2 on patkcdxf
(
ptcdkwd,
ptcditm
)
  tablespace pas_indx; 
