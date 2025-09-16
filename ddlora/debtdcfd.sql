create table debtdcaf
(
  dbtddeb     varchar2(8) default ' ' not null,
  dbtddln     varchar2(3) default ' ' not null,
  dbtdlin     varchar2(3) default ' ' not null,
  dbtdcom     varchar2(50) default ' ' not null,
  dbtdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debtdca1 primary key( 
dbtddeb,
dbtddln,
dbtdlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
