create table debplnaf
(
  dbpldeb     varchar2(8) default ' ' not null,
  dbpluni     varchar2(3) default ' ' not null,
  dbpllin     varchar2(3) default ' ' not null,
  dbplcom     varchar2(50) default ' ' not null,
  dbplspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debplna1 primary key( 
dbpldeb,
dbpluni,
dbpllin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
