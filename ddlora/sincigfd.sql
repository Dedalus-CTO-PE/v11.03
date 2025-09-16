create table sincigaf
(
  siigcat     varchar2(7) default ' ' not null,
  siigwar     varchar2(5) default ' ' not null,
  siiglin     varchar2(3) default ' ' not null,
  siigcom     varchar2(78) default ' ' not null,
  siigspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinciga1 primary key( 
siigcat,
siigwar,
siiglin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
