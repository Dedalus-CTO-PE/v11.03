create table apscntaf
(
  apcncrd     varchar2(5) default ' ' not null,
  apcnlin     varchar2(3) default ' ' not null,
  apcndat     varchar2(70) default ' ' not null,
  apcnspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apscnta1 primary key( 
apcncrd,
apcnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
