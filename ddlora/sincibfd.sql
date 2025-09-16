create table sincibaf
(
  siibcat     varchar2(7) default ' ' not null,
  siiblin     varchar2(3) default ' ' not null,
  siibcom     varchar2(78) default ' ' not null,
  siibspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinciba1 primary key( 
siibcat,
siiblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
