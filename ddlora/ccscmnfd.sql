create table ccscmnaf
(
  ccmncom     varchar2(4) default ' ' not null,
  ccmnlin     varchar2(3) default ' ' not null,
  ccmndat     varchar2(78) default ' ' not null,
  ccmnspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmna1 primary key( 
ccmncom,
ccmnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
