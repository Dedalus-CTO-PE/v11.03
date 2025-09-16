create table mltsecaf
(
  mlscusid    varchar2(10) default ' ' not null,
  mlschosp    varchar2(3) default ' ' not null,
  mlscspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mltseca1 primary key( 
mlscusid,
mlschosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mltseca2 on mltsecaf
(
mlschosp,
mlscusid
)
  tablespace pas_indx; 
