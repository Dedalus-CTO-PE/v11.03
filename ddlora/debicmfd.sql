create table debicmaf
(
  dbicitm     varchar2(8) default ' ' not null,
  dbiclin     varchar2(3) default ' ' not null,
  dbiccom     varchar2(50) default ' ' not null,
  dbicspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debicma1 primary key( 
dbicitm,
dbiclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
