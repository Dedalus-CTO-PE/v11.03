create table sincccaf
(
  sicccst     varchar2(5) default ' ' not null,
  sicclin     varchar2(3) default ' ' not null,
  sicccom     varchar2(78) default ' ' not null,
  siccspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinccca1 primary key( 
sicccst,
sicclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
