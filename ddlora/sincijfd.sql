create table sincijaf
(
  siijcat     varchar2(7) default ' ' not null,
  siijlin     varchar2(3) default ' ' not null,
  siijcom     varchar2(78) default ' ' not null,
  siijspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincija1 primary key( 
siijcat,
siijlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
